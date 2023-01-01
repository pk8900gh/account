#include "mysoft.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
//#include "qtextcodec.h"
//#include <QTextcodec>
string UTF8ToGB(const char* str);
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    char  path[] = "B:\\C++文档\\account\\my_account_soft\\database\\data.sqlite3";
    //QWidget * parent=new QWidget();
	//解决乱码问题
    //QTextCodec* codec = QTextCodec::codecForName("UTF - 8");
	//QTextCodec::setCodecForLocale(codec);
    MySoft  w;
    if( w.sqlOpen(path))
        w.ui.statusBar->showMessage(QString::fromLocal8Bit("数据库正常启动"));
    w.show();
    w.ui.textEdit01->setText(QString::fromLocal8Bit("我是中国人"));  //QStringLiteral("学生事务管理系统")   QString::fromLocal8Bit("学生事务管理系统"))
    w.ui.textEdit01->setText(QString("\347\241\256\345\256\232"));
    
    
    return a.exec();
}