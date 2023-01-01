#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mysoft.h"

class MySoft : public QMainWindow
{
    Q_OBJECT

public:
    MySoft(QWidget *parent = nullptr);
    ~MySoft();

private:
    Ui::MySoftClass ui;
};
