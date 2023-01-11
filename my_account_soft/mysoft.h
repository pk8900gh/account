#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_mysoft.h"
#include <Windows.h>
#include <string>
#include "qsqlite.h"

using namespace std;

class MySoft : public QMainWindow,public Qsqlite
{
    Q_OBJECT

public:
    Ui::MySoftClass ui;
    MySoft(QString dbfile, QWidget* parent = nullptr);
    ~MySoft();
};
