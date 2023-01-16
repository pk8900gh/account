#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_addCustomType.h"

class Form_addCustomType:public QMainWindow
{
	Q_OBJECT

public:
	Form_addCustomType(QMainWindow* parent = Q_NULLPTR);

protected:

private:
	Ui::MainWindow_addcustomType ui;
};