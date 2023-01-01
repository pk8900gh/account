#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mysoft.h"
#include "mysqlite3.h"

class MySoft : public QMainWindow ,public MySqlite3
{
    Q_OBJECT

public:
    int* db;
    MySoft(QWidget *parent = nullptr);
    ~MySoft();

private:
    Ui::MySoftClass ui;
};
