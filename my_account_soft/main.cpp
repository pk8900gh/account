#include "mysoft.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MySoft w;
    w.show();
    return a.exec();
}
