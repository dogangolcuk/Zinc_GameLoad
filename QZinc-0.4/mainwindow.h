#include "ui_f_qzinc.h"
#include "zincprocess.h"
#include <QtGui>
#include <QFile>
#include <QDir>
class mainWindow : public QWidget , Ui::MainWindow
{
   Q_OBJECT
   public:
      mainWindow(); 
      ZincProcess qzinc;
      QSettings res;
   public slots:
      void oynat();
      void oynat(QListWidgetItem *);
      void lstOyunDoldur();
      void ltikla ( QListWidgetItem * item  );
      void makeRendererConf();
      void getOyunYolu();
      void setXRes(QString);
      void setYRes(QString);
      void getRes();
void setSoundState(int);
void setFullState(int);
      QStringList getGameList();
};
 
