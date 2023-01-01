#pragma once
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")// 该指令仅支持VS环境
#endif
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
    Ui::MySoftClass ui;
};
