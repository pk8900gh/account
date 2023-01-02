#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_mysoft.h"
#include "mysqlite3.h"
#include <Windows.h>
#include <string>
using namespace std;

class MySoft : public QMainWindow ,public MySqlite3
{
    Q_OBJECT

public:
    int* db;
    Ui::MySoftClass ui;
    MySoft(QWidget *parent = nullptr);
    ~MySoft();
};
