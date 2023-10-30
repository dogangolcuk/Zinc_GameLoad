 #include "mainwindow.h"
 #include <QApplication>
int main(int argc, char *argv[])
    {
        QDir path = QDir(QDir::homePath() + "/.QZinc");
 	if (!path.exists())
            path.mkpath(QDir::homePath() + "/.QZinc");

	if(!QFile::exists ( QDir::homePath() + "/.QZinc/libcontrolznc.so" ))
             QFile::copy( "/tmp/libcontrolznc.so" ,QDir::homePath() + "/.QZinc/libcontrolznc.so" );

	if(!QFile::exists ( QDir::homePath() + "/.QZinc/librendererznc.so" ))
             QFile::copy( "/tmp/librendererznc.so" ,QDir::homePath() + "/.QZinc/librendererznc.so" );

	if(!QFile::exists ( QDir::homePath() + "/.QZinc/libs11player.so" ))
             QFile::copy( "/tmp/libs11player.so" ,QDir::homePath() + "/.QZinc/libs11player.so" );
	
	


    QApplication app(argc,argv);
    mainWindow *form = new mainWindow;
     form->show();
    return app.exec();

    } 
