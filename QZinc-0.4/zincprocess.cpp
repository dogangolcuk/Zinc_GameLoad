#include "zincprocess.h"
void ZincProcess::writeSettings()
{
// settings.setValue("dirPath",QCoreApplication::applicationDirPath ()+"/");

settings.setValue("dirPath",QDir::homePath()+"/.QZinc/");
// settings.setValue("romsPath","./QZinc/roms/");
}
void ZincProcess::setExePath()
{
// QVariant vtmp=settings.value("dirPath");
// ExePathString =  vtmp.toString()+"zinc";
ExePathString ="zinc";

}
  void ZincProcess::setRomsPathString()
{
QVariant vtmp=settings.value("romsPath");
RomsPathString= vtmp.toString();

} 
  void ZincProcess::setRomsPathString(QString path)
{
// QVariant vtmp=settings.value("dirPath");
settings.setValue("romsPath",path);
RomsPathString= path;

} 
void ZincProcess::setRendererConfPathString()
{

QVariant vtmp=settings.value("dirPath");
RendererConfPathString=vtmp.toString()+"renderer.cfg";
}
   void ZincProcess::setLibControllerPathString()
{
QVariant vtmp=settings.value("dirPath");
LibControllerPathString=vtmp.toString()+"libcontrolznc.so";


}
   void ZincProcess::setLibRenderPathString()
{
QVariant vtmp=settings.value("dirPath");
LibRenderPathString=vtmp.toString()+"librendererznc.so";


}
void ZincProcess::setGameNumber(int num)
{
GameNumber=QString("%1").arg(num);

}
void ZincProcess::setSound(bool yn)
{
useSound=yn;

}
    QString ZincProcess::getRendererConfPathString()
{

return RendererConfPathString;
}

 QString ZincProcess::getRomsPathString()
{

return RomsPathString;
}
QStringList ZincProcess::makeExecString()
{

QStringList tmp;
// tmp << ExePathString ;
tmp << GameNumber;
tmp << "--roms-directory=" + RomsPathString;
tmp << "--renderer=" + LibRenderPathString ;
tmp << "--use-renderer-cfg-file=" + RendererConfPathString ;
tmp << "--controller=" + LibControllerPathString;
 if (useSound)
   tmp <<"--use-sound=yes" ;
 else tmp <<"--use-sound=no";

return tmp;


}
void ZincProcess::go()
{
 myProcess.start(ExePathString ,makeExecString() );
} 
QByteArray ZincProcess::getGameList()
{
myProcess.start(ExePathString +"--list-games");
// QByteArray btmp;
QByteArray b;
    while (myProcess.waitForReadyRead())
        b += myProcess.readAll();

return b;

}
ZincProcess::ZincProcess()

{
writeSettings();
setExePath();
setRomsPathString();
setRendererConfPathString();
setLibRenderPathString();
setLibControllerPathString();
// setGameNumber(25);
//  setSound(true);

}

