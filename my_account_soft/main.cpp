#include "mysoft.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/Qwidget>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    char  path[] = "B:\\C++文档\\account\\my_account_soft\\database\\data.sqlite3";
    string s1 = "12345是个数字";
	//解决乱码问题
    //QTextCodec* codec = QTextCodec::codecForName("UTF - 8");
	//QTextCodec::setCodecForLocale(codec);
    MySoft  w;
    w.show();
    //w.ui.textEdit01->setText(QString("我是中国人"));  //QStringLiteral("学生事务管理系统")   QString::fromLocal8Bit("学生事务管理系统"))
    //w.ui.textEdit01->append(QString("\347\241\256\345\256\232"));
    //w.ui.textEdit01->append(QString::fromStdString(s1));
    qDebug() << "3213213131";
    
    return a.exec();
}