#include "mysoft.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
//#include "qtextcodec.h"
//#include <QTextcodec>
string UTF8ToGB(const char* str);
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    char  path[] = "B:\\C++�ĵ�\\account\\my_account_soft\\database\\data.sqlite3";
    //QWidget * parent=new QWidget();
	//�����������
    //QTextCodec* codec = QTextCodec::codecForName("UTF - 8");
	//QTextCodec::setCodecForLocale(codec);
    MySoft  w;
    if( w.sqlOpen(path))
        w.ui.statusBar->showMessage(QString::fromLocal8Bit("���ݿ���������"));
    w.show();
    w.ui.textEdit01->setText(QString::fromLocal8Bit("�����й���"));  //QStringLiteral("ѧ���������ϵͳ")   QString::fromLocal8Bit("ѧ���������ϵͳ"))
    w.ui.textEdit01->setText(QString("\347\241\256\345\256\232"));
    
    
    return a.exec();
}