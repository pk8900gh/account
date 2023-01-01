#include "mysoft.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include "qtextcodec.h"
//#include <QTextcodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    char  path[] = "B:\\C++文档\\account\\my_account_soft\\database\\data.sqlite3";
    //QWidget * parent=new QWidget();
	//解决乱码问题
    //QTextCodec* codec = QTextCodec::codecForName("UTF - 8");
	//QTextCodec::setCodecForLocale(codec);
    MySoft  w;
    w.sqlOpen(path);
    w.show();
    w.ui.textEdit01->setText(QString::fromLocal8Bit("我是中国人"));  //QStringLiteral("学生事务管理系统")   QString::fromLocal8Bit("学生事务管理系统"))
    w.ui.statusBar->showMessage(QString::fromLocal8Bit("程序已经启动"));
    return a.exec();
}
