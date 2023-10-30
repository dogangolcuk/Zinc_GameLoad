#ifndef ZINCPROCESS_H
#define ZINCPROCESS_H

// #include <QProcess>
#include <QDir>
#include <QtCore>
class ZincProcess :public QProcess
{
    Q_OBJECT

public:
    ZincProcess();
//     ~ZincProcess();
public slots:
    void go();
    void setExePath();
    void setRomsPathString();
    void setRendererConfPathString();
    void setLibControllerPathString();
    void setLibRenderPathString();
    void setGameNumber(int num);
    void setSound(bool yn);
    QStringList makeExecString();
    void writeSettings();
    QByteArray getGameList();
    QString getRendererConfPathString();
    void setRomsPathString(QString);
    QString getRomsPathString();

private:
    QString ExePathString;
    QString RomsPathString;
    QString RendererConfPathString;
    QString LibControllerPathString;
    QString LibRenderPathString;
    QString GameNumber; 
    bool useSound;
    QSettings settings;
    QProcess myProcess;
};

#endif
 
