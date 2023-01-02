#include "mysoft.h"
#include "sqlite3.h"
#include "mysqlite3.h"



MySoft::MySoft(QWidget *parent)
    : QMainWindow(parent),MySqlite3()
{
    ui.setupUi(this);
}

MySoft::~MySoft()
{
}
