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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
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
    QAction *m_custom;
    QAction *m_item_type;
    QAction *m_new_detail;
    QAction *m_search_detail;
    QAction *m_modify_detail;
    QAction *m_new_census;
    QAction *m_modify_census;
    QAction *m_search_census;
    QAction *m_new_pay;
    QAction *m_modify_pay;
    QAction *m_search_pay;
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QLabel *label;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QWidget *page_4;
    QWidget *widgetSearchPanel;
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
        MySoftClass->resize(1024, 768);
        MySoftClass->setStyleSheet(QString::fromUtf8("background-color: rgb(140, 140, 140);\n"
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
            icon.addFile(QString::fromUtf8(":/ico_/icon/dictsetting.png"), QSize(), QIcon::Normal, QIcon::Off);
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
        m_custom = new QAction(MySoftClass);
        m_custom->setObjectName("m_custom");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/ico_/icon/custom.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_custom->setIcon(icon3);
        m_item_type = new QAction(MySoftClass);
        m_item_type->setObjectName("m_item_type");
        m_new_detail = new QAction(MySoftClass);
        m_new_detail->setObjectName("m_new_detail");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/ico_/icon/ji.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_new_detail->setIcon(icon4);
        m_search_detail = new QAction(MySoftClass);
        m_search_detail->setObjectName("m_search_detail");
        m_modify_detail = new QAction(MySoftClass);
        m_modify_detail->setObjectName("m_modify_detail");
        m_new_census = new QAction(MySoftClass);
        m_new_census->setObjectName("m_new_census");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/ico_/icon/record1.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_new_census->setIcon(icon5);
        m_modify_census = new QAction(MySoftClass);
        m_modify_census->setObjectName("m_modify_census");
        m_search_census = new QAction(MySoftClass);
        m_search_census->setObjectName("m_search_census");
        m_new_pay = new QAction(MySoftClass);
        m_new_pay->setObjectName("m_new_pay");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/ico_/icon/pay.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_new_pay->setIcon(icon6);
        m_modify_pay = new QAction(MySoftClass);
        m_modify_pay->setObjectName("m_modify_pay");
        m_search_pay = new QAction(MySoftClass);
        m_search_pay->setObjectName("m_search_pay");
        centralWidget = new QWidget(MySoftClass);
        centralWidget->setObjectName("centralWidget");
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 70, 631, 591));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(75, 75, 75);"));
        stackedWidget->setFrameShape(QFrame::StyledPanel);
        stackedWidget->setLineWidth(8);
        stackedWidget->setMidLineWidth(6);
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label = new QLabel(page_2);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 631, 31));
        label->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page_2);
        stackedWidget_2 = new QStackedWidget(centralWidget);
        stackedWidget_2->setObjectName("stackedWidget_2");
        stackedWidget_2->setGeometry(QRect(629, -1, 401, 661));
        stackedWidget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(80,80, 80);"));
        stackedWidget_2->setFrameShape(QFrame::StyledPanel);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        stackedWidget_2->addWidget(page_4);
        widgetSearchPanel = new QWidget(centralWidget);
        widgetSearchPanel->setObjectName("widgetSearchPanel");
        widgetSearchPanel->setGeometry(QRect(0, 0, 631, 71));
        widgetSearchPanel->setStyleSheet(QString::fromUtf8("background-color: rgb(65,65, 65);"));
        MySoftClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MySoftClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1024, 22));
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
        mainToolBar->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 80, 80);"));
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
        m_sys->addSeparator();
        m_sys->addAction(m_sys_backup);
        m_sys->addAction(m_sys_recover);
        m_sys->addSeparator();
        m_sys->addAction(m_sys_quit);
        m_dict->addAction(m_custom);
        m_dict->addAction(m_item_type);
        m_account->addAction(m_new_detail);
        m_account->addAction(m_modify_detail);
        m_account->addAction(m_search_detail);
        m_census->addAction(m_new_census);
        m_census->addAction(m_modify_census);
        m_census->addAction(m_search_census);
        m_pay->addAction(m_new_pay);
        m_pay->addAction(m_modify_pay);
        m_pay->addAction(m_search_pay);
        mainToolBar->addAction(m_sys_user);
        mainToolBar->addAction(m_sys_quit);

        retranslateUi(MySoftClass);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MySoftClass);
    } // setupUi

    void retranslateUi(QMainWindow *MySoftClass)
    {
        MySoftClass->setWindowTitle(QCoreApplication::translate("MySoftClass", "MySoft", nullptr));
        m_sys_user->setText(QCoreApplication::translate("MySoftClass", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        m_sys_backup->setText(QCoreApplication::translate("MySoftClass", "\345\244\207\344\273\275\346\225\260\346\215\256", nullptr));
        m_sys_recover->setText(QCoreApplication::translate("MySoftClass", "\346\201\242\345\244\215\346\225\260\346\215\256", nullptr));
        m_sys_quit->setText(QCoreApplication::translate("MySoftClass", "\351\200\200\345\207\272", nullptr));
        m_custom->setText(QCoreApplication::translate("MySoftClass", "\345\256\242\346\210\267\347\256\241\347\220\206", nullptr));
        m_item_type->setText(QCoreApplication::translate("MySoftClass", "\351\241\271\347\233\256\347\261\273\345\236\213", nullptr));
        m_new_detail->setText(QCoreApplication::translate("MySoftClass", "\346\226\260\345\242\236\350\256\260\350\264\246", nullptr));
        m_search_detail->setText(QCoreApplication::translate("MySoftClass", "\346\237\245\350\257\242", nullptr));
        m_modify_detail->setText(QCoreApplication::translate("MySoftClass", "\344\277\256\346\224\271", nullptr));
        m_new_census->setText(QCoreApplication::translate("MySoftClass", "\346\226\260\345\273\272\347\273\237\350\256\241\350\241\250", nullptr));
        m_modify_census->setText(QCoreApplication::translate("MySoftClass", "\344\277\256\346\224\271\347\273\237\350\256\241\350\241\250", nullptr));
        m_search_census->setText(QCoreApplication::translate("MySoftClass", "\346\237\245\350\257\242\347\273\237\350\256\241\350\241\250", nullptr));
        m_new_pay->setText(QCoreApplication::translate("MySoftClass", "\346\226\260\345\273\272\347\273\223\347\256\227\350\241\250", nullptr));
        m_modify_pay->setText(QCoreApplication::translate("MySoftClass", "\344\277\256\346\224\271\347\273\223\347\256\227\350\241\250", nullptr));
        m_search_pay->setText(QCoreApplication::translate("MySoftClass", "\346\237\245\350\257\242\347\273\223\347\256\227\350\241\250", nullptr));
        label->setText(QCoreApplication::translate("MySoftClass", "\345\256\242\346\210\267\347\256\241\347\220\206", nullptr));
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
