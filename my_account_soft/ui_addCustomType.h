/********************************************************************************
** Form generated from reading UI file 'addCustomType.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCUSTOMTYPE_H
#define UI_ADDCUSTOMTYPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow_addcustomType
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_name;
    QPushButton *btn_ok;
    QTableWidget *tableWidget;

    void setupUi(QMainWindow *MainWindow_addcustomType)
    {
        if (MainWindow_addcustomType->objectName().isEmpty())
            MainWindow_addcustomType->setObjectName("MainWindow_addcustomType");
        MainWindow_addcustomType->setWindowModality(Qt::ApplicationModal);
        MainWindow_addcustomType->resize(293, 317);
        MainWindow_addcustomType->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 80, 80);"));
        centralwidget = new QWidget(MainWindow_addcustomType);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit_name = new QLineEdit(centralwidget);
        lineEdit_name->setObjectName("lineEdit_name");

        horizontalLayout->addWidget(lineEdit_name);

        btn_ok = new QPushButton(centralwidget);
        btn_ok->setObjectName("btn_ok");

        horizontalLayout->addWidget(btn_ok);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");

        verticalLayout->addWidget(tableWidget);

        MainWindow_addcustomType->setCentralWidget(centralwidget);

        retranslateUi(MainWindow_addcustomType);

        QMetaObject::connectSlotsByName(MainWindow_addcustomType);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow_addcustomType)
    {
        MainWindow_addcustomType->setWindowTitle(QCoreApplication::translate("MainWindow_addcustomType", "\345\256\242\346\210\267\347\261\273\345\236\213", nullptr));
        btn_ok->setText(QCoreApplication::translate("MainWindow_addcustomType", "\346\267\273\345\212\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow_addcustomType: public Ui_MainWindow_addcustomType {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCUSTOMTYPE_H
