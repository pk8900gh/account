#include "mysoft.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/Qwidget>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString dbfilepath = "B:\\C++\\account\\my_account_soft\\database\\data.sqlite3";
    //string s1 = "12345是个数字";
	//解决乱码问题 文件——》高级保存选项——》   编码(E):    Unicode(UTF - 8带签名) - 代码页65001
    MySoft  w(dbfilepath);
    w.show();
    w.initDB();
    //w.ui.textEdit01->setText(QString("我是中国人"));  //QStringLiteral("学生事务管理系统")   QString::fromLocal8Bit("学生事务管理系统"))
    //w.ui.textEdit01->append(QString("\347\241\256\345\256\232"));
    //w.ui.textEdit01->append(QString::fromStdString(s1));
    qDebug() << w.error;
    
    return a.exec();
}