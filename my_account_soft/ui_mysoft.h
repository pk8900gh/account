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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
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
    QAction *m_sys_user;
    QAction *m_sys_backup;
    QAction *m_sys_recover;
    QAction *m_sys_quit;
    QAction *action_8;
    QAction *action_9;
    QWidget *centralWidget;
    QTextEdit *textEdit01;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QMenu *m_sys;
    QMenu *m_dict;
    QMenu *m_account;
    QMenu *m_census;
    QMenu *m_pay;
    QMenu *m_about;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MySoftClass)
    {
        if (MySoftClass->objectName().isEmpty())
            MySoftClass->setObjectName("MySoftClass");
        MySoftClass->resize(1113, 768);
        MySoftClass->setStyleSheet(QString::fromUtf8("background-color: rgb(93, 93, 93);\n"
"color: rgb(255, 255, 255);"));
        MySoftClass->setIconSize(QSize(36, 36));
        MySoftClass->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        m_sys_user = new QAction(MySoftClass);
        m_sys_user->setObjectName("m_sys_user");
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("accessories-calculator");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/ico_/icon/custom.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        m_sys_user->setIcon(icon);
        m_sys_backup = new QAction(MySoftClass);
        m_sys_backup->setObjectName("m_sys_backup");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ico_/icon/backup.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_sys_backup->setIcon(icon1);
        m_sys_recover = new QAction(MySoftClass);
        m_sys_recover->setObjectName("m_sys_recover");
        m_sys_quit = new QAction(MySoftClass);
        m_sys_quit->setObjectName("m_sys_quit");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ico_/icon/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_sys_quit->setIcon(icon2);
        action_8 = new QAction(MySoftClass);
        action_8->setObjectName("action_8");
        action_9 = new QAction(MySoftClass);
        action_9->setObjectName("action_9");
        centralWidget = new QWidget(MySoftClass);
        centralWidget->setObjectName("centralWidget");
        textEdit01 = new QTextEdit(centralWidget);
        textEdit01->setObjectName("textEdit01");
        textEdit01->setGeometry(QRect(200, 130, 531, 201));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 80, 75, 24));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(450, 380, 75, 24));
        MySoftClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MySoftClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1113, 22));
        menuBar->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 52);"));
        m_sys = new QMenu(menuBar);
        m_sys->setObjectName("m_sys");
        m_dict = new QMenu(menuBar);
        m_dict->setObjectName("m_dict");
        m_account = new QMenu(menuBar);
        m_account->setObjectName("m_account");
        m_census = new QMenu(menuBar);
        m_census->setObjectName("m_census");
        m_pay = new QMenu(menuBar);
        m_pay->setObjectName("m_pay");
        m_about = new QMenu(menuBar);
        m_about->setObjectName("m_about");
        MySoftClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MySoftClass);
        mainToolBar->setObjectName("mainToolBar");
        mainToolBar->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy);
        MySoftClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MySoftClass);
        statusBar->setObjectName("statusBar");
        statusBar->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);\n"
"color: rgb(255, 255, 255);"));
        MySoftClass->setStatusBar(statusBar);

        menuBar->addAction(m_sys->menuAction());
        menuBar->addAction(m_dict->menuAction());
        menuBar->addAction(m_account->menuAction());
        menuBar->addAction(m_census->menuAction());
        menuBar->addAction(m_pay->menuAction());
        menuBar->addAction(m_about->menuAction());
        m_sys->addAction(m_sys_user);
        m_sys->addAction(m_sys_backup);
        m_sys->addAction(m_sys_recover);
        m_sys->addSeparator();
        m_sys->addAction(m_sys_quit);
        m_dict->addAction(action_8);
        m_dict->addAction(action_9);
        mainToolBar->addAction(m_sys_user);
        mainToolBar->addAction(m_sys_quit);

        retranslateUi(MySoftClass);
        QObject::connect(pushButton, &QPushButton::clicked, MySoftClass, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MySoftClass);
    } // setupUi

    void retranslateUi(QMainWindow *MySoftClass)
    {
        MySoftClass->setWindowTitle(QCoreApplication::translate("MySoftClass", "MySoft", nullptr));
        m_sys_user->setText(QCoreApplication::translate("MySoftClass", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        m_sys_backup->setText(QCoreApplication::translate("MySoftClass", "\345\244\207\344\273\275\346\225\260\346\215\256", nullptr));
        m_sys_recover->setText(QCoreApplication::translate("MySoftClass", "\346\201\242\345\244\215\346\225\260\346\215\256", nullptr));
        m_sys_quit->setText(QCoreApplication::translate("MySoftClass", "\351\200\200\345\207\272", nullptr));
        action_8->setText(QCoreApplication::translate("MySoftClass", "\345\256\242\346\210\267\347\256\241\347\220\206", nullptr));
        action_9->setText(QCoreApplication::translate("MySoftClass", "\351\241\271\347\233\256\347\261\273\345\236\213", nullptr));
        pushButton->setText(QCoreApplication::translate("MySoftClass", "A\347\241\256\345\256\232\\12", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MySoftClass", "PushButton", nullptr));
        m_sys->setTitle(QCoreApplication::translate("MySoftClass", "\347\263\273\347\273\237", nullptr));
        m_dict->setTitle(QCoreApplication::translate("MySoftClass", "\345\255\227\345\205\270", nullptr));
        m_account->setTitle(QCoreApplication::translate("MySoftClass", "\350\256\260\350\264\246", nullptr));
        m_census->setTitle(QCoreApplication::translate("MySoftClass", "\347\273\237\350\256\241\346\212\245\350\241\250", nullptr));
        m_pay->setTitle(QCoreApplication::translate("MySoftClass", "\347\273\223\347\256\227\346\212\245\350\241\250", nullptr));
        m_about->setTitle(QCoreApplication::translate("MySoftClass", "\345\205\263\344\272\216\350\275\257\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MySoftClass: public Ui_MySoftClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSOFT_H
