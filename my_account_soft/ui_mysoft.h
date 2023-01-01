/********************************************************************************
** Form generated from reading UI file 'mysoft.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSOFT_H
#define UI_MYSOFT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MySoftClass
{
public:
    QWidget *centralWidget;
    QTextEdit *textEdit01;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MySoftClass)
    {
        if (MySoftClass->objectName().isEmpty())
            MySoftClass->setObjectName("MySoftClass");
        MySoftClass->resize(1024, 768);
        MySoftClass->setStyleSheet(QString::fromUtf8("background-color: rgb(93, 93, 93);\n"
"color: rgb(255, 255, 255);"));
        centralWidget = new QWidget(MySoftClass);
        centralWidget->setObjectName("centralWidget");
        textEdit01 = new QTextEdit(centralWidget);
        textEdit01->setObjectName("textEdit01");
        textEdit01->setGeometry(QRect(260, 130, 531, 201));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 380, 75, 24));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(450, 380, 75, 24));
        MySoftClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MySoftClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1024, 22));
        menuBar->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 52);"));
        MySoftClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MySoftClass);
        mainToolBar->setObjectName("mainToolBar");
        MySoftClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MySoftClass);
        statusBar->setObjectName("statusBar");
        statusBar->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);\n"
"color: rgb(255, 255, 255);"));
        MySoftClass->setStatusBar(statusBar);

        retranslateUi(MySoftClass);
        QObject::connect(pushButton, &QPushButton::clicked, MySoftClass, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MySoftClass);
    } // setupUi

    void retranslateUi(QMainWindow *MySoftClass)
    {
        MySoftClass->setWindowTitle(QCoreApplication::translate("MySoftClass", "MySoft", nullptr));
        pushButton->setText(QCoreApplication::translate("MySoftClass", "A\347\241\256\345\256\232\\12", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MySoftClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MySoftClass: public Ui_MySoftClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSOFT_H
