#include "mysoft.h"
#include <QDebug>



MySoft::MySoft(QString dbfile,QWidget *parent) : QMainWindow(parent),Qsqlite(dbfile)
{
    ui.setupUi(this);
    if ( !this->initDB())
    {
        qDebug()<<"init:" << this->error.text();
    }
}

MySoft::~MySoft()
{

}
