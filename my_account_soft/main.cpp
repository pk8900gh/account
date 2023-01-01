#include "mysoft.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    char  path[] = "B:\\C++ÎÄµµ\\account\\my_account_soft\\database\\data.sqlite3";
    //QWidget * parent=new QWidget();
    MySoft  w;
    w.sqlOpen(path);
    w.show();
    w.
    return a.exec();
}
