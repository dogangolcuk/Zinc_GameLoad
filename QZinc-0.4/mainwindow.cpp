#include "mainwindow.h"
#include <QCoreApplication>
void mainWindow::ltikla ( QListWidgetItem * item  ){
//  listWidget_2->clear();
// lineEdit->setText(item->text() );
qzinc.setGameNumber(lwOyunlar->row(item)+1);
} 

QStringList mainWindow::getGameList()
{
QStringList line;
// QString defaultFilePath=QCoreApplication::applicationDirPath()+"/";
QFile file(":games/gamesList");
file.open(QIODevice::ReadOnly | QIODevice::Text);
QTextStream in(&file);
while (!in.atEnd()) {
         line << in.readLine();

        }
file.close();
return line;

}
 void mainWindow::lstOyunDoldur()
{
 lwOyunlar->insertItems(0,getGameList());
}
void mainWindow::oynat()
{
if(chbSound->isChecked())
     qzinc.setSound(true);
else qzinc.setSound(false);
     qzinc.go();

}
void mainWindow::oynat(QListWidgetItem *)
{

     qzinc.go();

}
void mainWindow::makeRendererConf()
{
QString full;
QFile file(qzinc.getRendererConfPathString());
qDebug()<<qzinc.getRendererConfPathString();
// QFile file("/home/qwerty/renderer.conf");
     file.open(QIODevice::ReadWrite);
         
if(CbFullScreen->isChecked())
     full="1";
else   full="0";

     QTextStream out(&file);
//      out << "The magic number is: " << 49 << "\n";
out << "; renderer settings\n";
out << "XSize			= "<< LeX->text()<<" ; window/fullscreen X size\n";
out << "YSize			= "<< LeY->text()<<" ; window/fullscreen Y size\n";
out << "FullScreen		= "<< full << " ; Fullscreen mode: 0/1\n";
out << "ColorDepth		= 32    ; Fullscreen color depth: 16/32\n";
out << "ScanLines		= 0  	; Scannlines: 0=none, 1=black, 2=bright\n";
out << "Filtering		= "<<FilterBox->value()<<" ; Texture filtering: 0-3\n";
out << "Blending		= 1 	; Enhanced color blend: ogl: 0/1; D3D: 0-2\n";
out << "Dithering		= 0 	; Dithering: 0/1\n";
out << "ShowFPS			= 1 	; FPS display on startup: 0/1\n";
out << "FrameLimitation	 	= 1 	; Frame limit: 0/1\n";
out << "FrameSkipping		= 0 	; Frame skip: 0/1\n";
out << "FramerateDetection	= 1 	; Auto framerate detection: 0/1\n";
out << "FramerateManual		= 100 	; Manual framerate: 0-1000\n";
out << "TextureType		= 3 	; Tetxures: 0=default, 1=4 bit, 2=5bit, 3=8bit\n";
out << "TextureCaching		= 2 	; Caching type: 0-2\n";
out << "TurnDisplay             = 0     ; Turn the whole display (0-2, 0=default)\n";

file.close();
}
void mainWindow::getOyunYolu()
{
	QFileDialog dialog;
	dialog.setFileMode ( QFileDialog::DirectoryOnly );
	QString yol = dialog.getExistingDirectory (
	                  this,
	                  QString::fromUtf8 ( "Rom Dizini " ),
	                  "/home/",
	                  QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks );
//              tmpop = new xmlop();
//              QFile::copy( tmpop->getSharePath() +"/" + value , s+value);
//              delete tmpop;
        qzinc.setRomsPathString(yol);
        oyunYolu->setText(yol);
// 	arsivYolu = yol;
// 	label->setText ( arsivYolu );
// return yol;

}

void mainWindow::setXRes(QString x)
{
res.setValue("X",x);
res.setValue("Y",LeY->text());
}
void mainWindow::setYRes(QString y)
{
res.setValue("Y",y);
// res.setValue("Y",LeY->text());
}

void mainWindow::setFullState(int i)
{
res.setValue("FullScreen",i);
// res.setValue("Y",LeY->text());
qDebug("%d",i);
}
void mainWindow::setSoundState(int i)
{
res.setValue("Sound",i);
qDebug("%d",i);
// res.setValue("Y",LeY->text());
}

void mainWindow::getRes()
{


QVariant xres=res.value("X");
QString XResolution= xres.toString();
LeX->setText(XResolution);

QVariant yres=res.value("Y");
QString YResolution= yres.toString();
LeY->setText(YResolution);

QVariant f=res.value("FullScreen");
CbFullScreen->setChecked(f.toInt());
// LeY->setText(YResolution);

QVariant s=res.value("Sound");
chbSound->setChecked(s.toInt());

}
 mainWindow::mainWindow()
//  :QDialog(parent)
{

setupUi(this);
         oyunYolu->setText(qzinc.getRomsPathString());
         lstOyunDoldur();
	 getRes();
	 makeRendererConf();
connect(lwOyunlar,SIGNAL(itemClicked ( QListWidgetItem *  )),this,SLOT(ltikla ( QListWidgetItem *  )));
connect(pbOynat ,SIGNAL(clicked()),  this,SLOT(makeRendererConf()));
connect(pbOynat ,SIGNAL(clicked()),  this,SLOT(oynat()));
connect(TbOyunYolu ,SIGNAL(clicked()),  this,SLOT(getOyunYolu()));
connect(LeX ,SIGNAL(textChanged(QString)),  this,SLOT(setXRes(QString)));
connect(LeY ,SIGNAL(textChanged(QString)),  this,SLOT(setYRes(QString)));
connect(CbFullScreen ,SIGNAL(stateChanged(int)),  this,SLOT(setFullState(int)));
connect(chbSound ,SIGNAL(stateChanged(int)),  this,SLOT(setSoundState(int)));
}
