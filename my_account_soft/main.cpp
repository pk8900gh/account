#include "mysoft.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include "qtextcodec.h"
//#include <QTextcodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    char  path[] = "B:\\C++�ĵ�\\account\\my_account_soft\\database\\data.sqlite3";
    //QWidget * parent=new QWidget();
	//�����������
    //QTextCodec* codec = QTextCodec::codecForName("UTF - 8");
	//QTextCodec::setCodecForLocale(codec);
    MySoft  w;
    w.sqlOpen(path);
    w.show();
    w.ui.textEdit01->setText(QString::fromLocal8Bit("�����й���"));  //QStringLiteral("ѧ���������ϵͳ")   QString::fromLocal8Bit("ѧ���������ϵͳ"))
    w.ui.statusBar->showMessage(QString::fromLocal8Bit("�����Ѿ�����"));
    return a.exec();
}
