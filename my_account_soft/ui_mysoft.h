/********************************************************************************
** Form generated from reading UI file 'mysoft.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSOFT_H
#define UI_MYSOFT_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
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
    QStackedWidget *stackedWidget_disp;
    QWidget *disp_customPanel;
    QWidget *disp_accountPanel;
    QTableView *tableView_account_show;
    QStackedWidget *stackedWidget_edit;
    QWidget *edit_accountPanel;
    QFrame *line_3;
    QLabel *editAc_lab_panelName;
    QFrame *line_4;
    QComboBox *editAc_cmb_customtype;
    QLabel *l_search_lab_16;
    QLabel *l_search_lab_17;
    QComboBox *editAc_cmb_customname;
    QDateEdit *dateEdit;
    QLabel *l_search_lab_18;
    QComboBox *editAc_cmb_JinShouRen;
    QLabel *l_search_lab_19;
    QLabel *l_search_lab_20;
    QTableWidget *tableWidget_account_edit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *edit_customPanel;
    QLabel *editCustom_lab_panelName;
    QFrame *line;
    QFrame *line_2;
    QLabel *l_search_lab_7;
    QComboBox *editCustom_cmb_type;
    QLabel *l_search_lab_8;
    QLineEdit *editCustom_lineEdit_name;
    QLineEdit *editCustom_lineEdit_telphone;
    QLabel *l_search_lab_9;
    QLineEdit *editCustom_lineEdit_address;
    QLabel *l_search_lab_10;
    QLabel *l_search_lab_11;
    QLineEdit *editCustom_lineEdit_address_2;
    QLineEdit *editCustom_lineEdit_name_2;
    QLabel *l_search_lab_12;
    QLabel *l_search_lab_13;
    QLabel *l_search_lab_14;
    QLineEdit *editCustom_lineEdit_address_3;
    QToolButton *editCustom_btn_addType;
    QLabel *l_search_lab_15;
    QTextEdit *editCustom_textEdit_remark;
    QPushButton *editCustom_btn_new;
    QPushButton *editCustom_btn_clear;
    QPushButton *editCustom_btn_ok;
    QWidget *wdgSearchPanel;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *l_search_lab;
    QComboBox *search_cmb_custom;
    QLabel *l_search_lab_2;
    QComboBox *serarch_cmd_bumeng;
    QLabel *l_search_lab_3;
    QComboBox *serarch_cmd_user;
    QGridLayout *gridLayout_2;
    QComboBox *search_cmb_itemModel;
    QLabel *l_search_lab_5;
    QComboBox *search_cmb_itemText;
    QLabel *l_search_lab_6;
    QLabel *l_search_lab_4;
    QComboBox *search_cmb_itemType;
    QGridLayout *gridLayout_3;
    QRadioButton *serch_radio_month;
    QRadioButton *serch_radio_year;
    QRadioButton *serch_radio_all;
    QCheckBox *search_checkBox_noPay;
    QCheckBox *search_checkBox_noCensus;
    QCheckBox *search_checkBox_isCensus;
    QCheckBox *search_checkBox_isPay;
    QPushButton *search_btn_go;
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
        MySoftClass->resize(1029, 768);
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
        stackedWidget_disp = new QStackedWidget(centralWidget);
        stackedWidget_disp->setObjectName("stackedWidget_disp");
        stackedWidget_disp->setGeometry(QRect(0, 110, 571, 551));
        stackedWidget_disp->setStyleSheet(QString::fromUtf8("background-color: rgb(75, 75, 75);"));
        stackedWidget_disp->setFrameShape(QFrame::StyledPanel);
        stackedWidget_disp->setLineWidth(8);
        stackedWidget_disp->setMidLineWidth(6);
        disp_customPanel = new QWidget();
        disp_customPanel->setObjectName("disp_customPanel");
        stackedWidget_disp->addWidget(disp_customPanel);
        disp_accountPanel = new QWidget();
        disp_accountPanel->setObjectName("disp_accountPanel");
        tableView_account_show = new QTableView(disp_accountPanel);
        tableView_account_show->setObjectName("tableView_account_show");
        tableView_account_show->setGeometry(QRect(10, 10, 551, 531));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView_account_show->sizePolicy().hasHeightForWidth());
        tableView_account_show->setSizePolicy(sizePolicy);
        tableView_account_show->setMinimumSize(QSize(100, 100));
        tableView_account_show->setMaximumSize(QSize(551, 531));
        tableView_account_show->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 220);\n"
"gridline-color: rgb(124, 124, 124);\n"
"color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(255, 244, 124);"));
        tableView_account_show->setFrameShape(QFrame::Box);
        stackedWidget_disp->addWidget(disp_accountPanel);
        stackedWidget_edit = new QStackedWidget(centralWidget);
        stackedWidget_edit->setObjectName("stackedWidget_edit");
        stackedWidget_edit->setGeometry(QRect(569, -1, 461, 661));
        stackedWidget_edit->setStyleSheet(QString::fromUtf8("background-color: rgb(80,80, 80);\n"
"alternate-background-color: rgb(182, 149, 112);\n"
"border-color: rgb(143, 143, 143);\n"
"selection-background-color: rgb(0, 0, 255);"));
        stackedWidget_edit->setFrameShape(QFrame::StyledPanel);
        edit_accountPanel = new QWidget();
        edit_accountPanel->setObjectName("edit_accountPanel");
        line_3 = new QFrame(edit_accountPanel);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(260, 20, 118, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        editAc_lab_panelName = new QLabel(edit_accountPanel);
        editAc_lab_panelName->setObjectName("editAc_lab_panelName");
        editAc_lab_panelName->setGeometry(QRect(150, 10, 101, 20));
        editAc_lab_panelName->setAlignment(Qt::AlignCenter);
        line_4 = new QFrame(edit_accountPanel);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(20, 20, 118, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        editAc_cmb_customtype = new QComboBox(edit_accountPanel);
        editAc_cmb_customtype->setObjectName("editAc_cmb_customtype");
        editAc_cmb_customtype->setGeometry(QRect(90, 50, 120, 25));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(editAc_cmb_customtype->sizePolicy().hasHeightForWidth());
        editAc_cmb_customtype->setSizePolicy(sizePolicy1);
        editAc_cmb_customtype->setMinimumSize(QSize(120, 0));
        l_search_lab_16 = new QLabel(edit_accountPanel);
        l_search_lab_16->setObjectName("l_search_lab_16");
        l_search_lab_16->setGeometry(QRect(20, 80, 81, 25));
        l_search_lab_16->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        l_search_lab_17 = new QLabel(edit_accountPanel);
        l_search_lab_17->setObjectName("l_search_lab_17");
        l_search_lab_17->setGeometry(QRect(20, 50, 81, 25));
        l_search_lab_17->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        editAc_cmb_customname = new QComboBox(edit_accountPanel);
        editAc_cmb_customname->setObjectName("editAc_cmb_customname");
        editAc_cmb_customname->setGeometry(QRect(100, 80, 201, 25));
        sizePolicy1.setHeightForWidth(editAc_cmb_customname->sizePolicy().hasHeightForWidth());
        editAc_cmb_customname->setSizePolicy(sizePolicy1);
        editAc_cmb_customname->setMinimumSize(QSize(120, 0));
        dateEdit = new QDateEdit(edit_accountPanel);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(100, 110, 111, 24));
        dateEdit->setFocusPolicy(Qt::ClickFocus);
        dateEdit->setCurrentSection(QDateTimeEdit::DaySection);
        dateEdit->setCalendarPopup(true);
        dateEdit->setCurrentSectionIndex(2);
        dateEdit->setTimeSpec(Qt::UTC);
        dateEdit->setDate(QDate(2000, 1, 2));
        l_search_lab_18 = new QLabel(edit_accountPanel);
        l_search_lab_18->setObjectName("l_search_lab_18");
        l_search_lab_18->setGeometry(QRect(20, 110, 71, 25));
        l_search_lab_18->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        editAc_cmb_JinShouRen = new QComboBox(edit_accountPanel);
        editAc_cmb_JinShouRen->setObjectName("editAc_cmb_JinShouRen");
        editAc_cmb_JinShouRen->setGeometry(QRect(100, 140, 90, 25));
        sizePolicy1.setHeightForWidth(editAc_cmb_JinShouRen->sizePolicy().hasHeightForWidth());
        editAc_cmb_JinShouRen->setSizePolicy(sizePolicy1);
        editAc_cmb_JinShouRen->setMinimumSize(QSize(90, 0));
        l_search_lab_19 = new QLabel(edit_accountPanel);
        l_search_lab_19->setObjectName("l_search_lab_19");
        l_search_lab_19->setGeometry(QRect(20, 140, 81, 25));
        l_search_lab_19->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        l_search_lab_20 = new QLabel(edit_accountPanel);
        l_search_lab_20->setObjectName("l_search_lab_20");
        l_search_lab_20->setGeometry(QRect(220, 50, 101, 25));
        l_search_lab_20->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        tableWidget_account_edit = new QTableWidget(edit_accountPanel);
        if (tableWidget_account_edit->columnCount() < 7)
            tableWidget_account_edit->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_account_edit->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_account_edit->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_account_edit->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_account_edit->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_account_edit->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_account_edit->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_account_edit->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (tableWidget_account_edit->rowCount() < 9)
            tableWidget_account_edit->setRowCount(9);
        tableWidget_account_edit->setObjectName("tableWidget_account_edit");
        tableWidget_account_edit->setGeometry(QRect(10, 180, 431, 351));
        tableWidget_account_edit->setAutoFillBackground(false);
        tableWidget_account_edit->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 220);\n"
"gridline-color: rgb(124, 124, 124);\n"
"color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(255, 244, 124);"));
        tableWidget_account_edit->setFrameShape(QFrame::Panel);
        tableWidget_account_edit->setFrameShadow(QFrame::Plain);
        tableWidget_account_edit->setLineWidth(0);
        tableWidget_account_edit->setMidLineWidth(0);
        tableWidget_account_edit->setAlternatingRowColors(false);
        tableWidget_account_edit->setShowGrid(true);
        tableWidget_account_edit->setGridStyle(Qt::SolidLine);
        tableWidget_account_edit->setSortingEnabled(true);
        tableWidget_account_edit->setCornerButtonEnabled(true);
        tableWidget_account_edit->setRowCount(9);
        tableWidget_account_edit->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_account_edit->verticalHeader()->setVisible(true);
        tableWidget_account_edit->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget_account_edit->verticalHeader()->setHighlightSections(true);
        tableWidget_account_edit->verticalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableWidget_account_edit->verticalHeader()->setStretchLastSection(true);
        pushButton = new QPushButton(edit_accountPanel);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(220, 540, 93, 29));
        pushButton_2 = new QPushButton(edit_accountPanel);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(340, 540, 93, 29));
        stackedWidget_edit->addWidget(edit_accountPanel);
        edit_customPanel = new QWidget();
        edit_customPanel->setObjectName("edit_customPanel");
        editCustom_lab_panelName = new QLabel(edit_customPanel);
        editCustom_lab_panelName->setObjectName("editCustom_lab_panelName");
        editCustom_lab_panelName->setGeometry(QRect(140, 10, 101, 20));
        editCustom_lab_panelName->setAlignment(Qt::AlignCenter);
        line = new QFrame(edit_customPanel);
        line->setObjectName("line");
        line->setGeometry(QRect(10, 20, 118, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(edit_customPanel);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(250, 20, 118, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        l_search_lab_7 = new QLabel(edit_customPanel);
        l_search_lab_7->setObjectName("l_search_lab_7");
        l_search_lab_7->setGeometry(QRect(30, 80, 81, 25));
        l_search_lab_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        editCustom_cmb_type = new QComboBox(edit_customPanel);
        editCustom_cmb_type->setObjectName("editCustom_cmb_type");
        editCustom_cmb_type->setGeometry(QRect(120, 80, 141, 25));
        sizePolicy1.setHeightForWidth(editCustom_cmb_type->sizePolicy().hasHeightForWidth());
        editCustom_cmb_type->setSizePolicy(sizePolicy1);
        editCustom_cmb_type->setMinimumSize(QSize(120, 0));
        l_search_lab_8 = new QLabel(edit_customPanel);
        l_search_lab_8->setObjectName("l_search_lab_8");
        l_search_lab_8->setGeometry(QRect(30, 120, 81, 25));
        l_search_lab_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        editCustom_lineEdit_name = new QLineEdit(edit_customPanel);
        editCustom_lineEdit_name->setObjectName("editCustom_lineEdit_name");
        editCustom_lineEdit_name->setGeometry(QRect(120, 120, 241, 24));
        editCustom_lineEdit_telphone = new QLineEdit(edit_customPanel);
        editCustom_lineEdit_telphone->setObjectName("editCustom_lineEdit_telphone");
        editCustom_lineEdit_telphone->setGeometry(QRect(120, 160, 241, 24));
        l_search_lab_9 = new QLabel(edit_customPanel);
        l_search_lab_9->setObjectName("l_search_lab_9");
        l_search_lab_9->setGeometry(QRect(30, 160, 81, 25));
        l_search_lab_9->setStyleSheet(QString::fromUtf8(""));
        editCustom_lineEdit_address = new QLineEdit(edit_customPanel);
        editCustom_lineEdit_address->setObjectName("editCustom_lineEdit_address");
        editCustom_lineEdit_address->setGeometry(QRect(120, 200, 241, 24));
        l_search_lab_10 = new QLabel(edit_customPanel);
        l_search_lab_10->setObjectName("l_search_lab_10");
        l_search_lab_10->setGeometry(QRect(30, 200, 81, 25));
        l_search_lab_10->setStyleSheet(QString::fromUtf8(""));
        l_search_lab_11 = new QLabel(edit_customPanel);
        l_search_lab_11->setObjectName("l_search_lab_11");
        l_search_lab_11->setGeometry(QRect(30, 240, 81, 25));
        l_search_lab_11->setStyleSheet(QString::fromUtf8(""));
        editCustom_lineEdit_address_2 = new QLineEdit(edit_customPanel);
        editCustom_lineEdit_address_2->setObjectName("editCustom_lineEdit_address_2");
        editCustom_lineEdit_address_2->setGeometry(QRect(120, 240, 241, 24));
        editCustom_lineEdit_name_2 = new QLineEdit(edit_customPanel);
        editCustom_lineEdit_name_2->setObjectName("editCustom_lineEdit_name_2");
        editCustom_lineEdit_name_2->setGeometry(QRect(120, 320, 91, 24));
        l_search_lab_12 = new QLabel(edit_customPanel);
        l_search_lab_12->setObjectName("l_search_lab_12");
        l_search_lab_12->setGeometry(QRect(30, 320, 81, 25));
        l_search_lab_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        l_search_lab_13 = new QLabel(edit_customPanel);
        l_search_lab_13->setObjectName("l_search_lab_13");
        l_search_lab_13->setGeometry(QRect(220, 320, 151, 25));
        l_search_lab_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        l_search_lab_14 = new QLabel(edit_customPanel);
        l_search_lab_14->setObjectName("l_search_lab_14");
        l_search_lab_14->setGeometry(QRect(30, 280, 81, 25));
        l_search_lab_14->setStyleSheet(QString::fromUtf8(""));
        editCustom_lineEdit_address_3 = new QLineEdit(edit_customPanel);
        editCustom_lineEdit_address_3->setObjectName("editCustom_lineEdit_address_3");
        editCustom_lineEdit_address_3->setGeometry(QRect(120, 280, 241, 24));
        editCustom_btn_addType = new QToolButton(edit_customPanel);
        editCustom_btn_addType->setObjectName("editCustom_btn_addType");
        editCustom_btn_addType->setGeometry(QRect(270, 80, 27, 26));
        l_search_lab_15 = new QLabel(edit_customPanel);
        l_search_lab_15->setObjectName("l_search_lab_15");
        l_search_lab_15->setGeometry(QRect(30, 360, 81, 25));
        l_search_lab_15->setStyleSheet(QString::fromUtf8(""));
        editCustom_textEdit_remark = new QTextEdit(edit_customPanel);
        editCustom_textEdit_remark->setObjectName("editCustom_textEdit_remark");
        editCustom_textEdit_remark->setGeometry(QRect(120, 360, 241, 101));
        editCustom_btn_new = new QPushButton(edit_customPanel);
        editCustom_btn_new->setObjectName("editCustom_btn_new");
        editCustom_btn_new->setGeometry(QRect(30, 40, 93, 29));
        editCustom_btn_clear = new QPushButton(edit_customPanel);
        editCustom_btn_clear->setObjectName("editCustom_btn_clear");
        editCustom_btn_clear->setGeometry(QRect(120, 490, 93, 29));
        editCustom_btn_ok = new QPushButton(edit_customPanel);
        editCustom_btn_ok->setObjectName("editCustom_btn_ok");
        editCustom_btn_ok->setGeometry(QRect(260, 490, 93, 29));
        stackedWidget_edit->addWidget(edit_customPanel);
        wdgSearchPanel = new QWidget(centralWidget);
        wdgSearchPanel->setObjectName("wdgSearchPanel");
        wdgSearchPanel->setGeometry(QRect(0, 0, 571, 111));
        wdgSearchPanel->setStyleSheet(QString::fromUtf8("background-color: rgb(65,65, 65);\n"
"selection-background-color: rgb(0, 0, 255);"));
        horizontalLayout = new QHBoxLayout(wdgSearchPanel);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        l_search_lab = new QLabel(wdgSearchPanel);
        l_search_lab->setObjectName("l_search_lab");

        gridLayout->addWidget(l_search_lab, 0, 0, 1, 1);

        search_cmb_custom = new QComboBox(wdgSearchPanel);
        search_cmb_custom->setObjectName("search_cmb_custom");
        sizePolicy1.setHeightForWidth(search_cmb_custom->sizePolicy().hasHeightForWidth());
        search_cmb_custom->setSizePolicy(sizePolicy1);
        search_cmb_custom->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(search_cmb_custom, 0, 1, 1, 1);

        l_search_lab_2 = new QLabel(wdgSearchPanel);
        l_search_lab_2->setObjectName("l_search_lab_2");

        gridLayout->addWidget(l_search_lab_2, 1, 0, 1, 1);

        serarch_cmd_bumeng = new QComboBox(wdgSearchPanel);
        serarch_cmd_bumeng->setObjectName("serarch_cmd_bumeng");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(serarch_cmd_bumeng->sizePolicy().hasHeightForWidth());
        serarch_cmd_bumeng->setSizePolicy(sizePolicy2);
        serarch_cmd_bumeng->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(serarch_cmd_bumeng, 1, 1, 1, 1);

        l_search_lab_3 = new QLabel(wdgSearchPanel);
        l_search_lab_3->setObjectName("l_search_lab_3");

        gridLayout->addWidget(l_search_lab_3, 2, 0, 1, 1);

        serarch_cmd_user = new QComboBox(wdgSearchPanel);
        serarch_cmd_user->setObjectName("serarch_cmd_user");
        sizePolicy2.setHeightForWidth(serarch_cmd_user->sizePolicy().hasHeightForWidth());
        serarch_cmd_user->setSizePolicy(sizePolicy2);
        serarch_cmd_user->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(serarch_cmd_user, 2, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName("gridLayout_2");
        search_cmb_itemModel = new QComboBox(wdgSearchPanel);
        search_cmb_itemModel->setObjectName("search_cmb_itemModel");
        sizePolicy1.setHeightForWidth(search_cmb_itemModel->sizePolicy().hasHeightForWidth());
        search_cmb_itemModel->setSizePolicy(sizePolicy1);
        search_cmb_itemModel->setMinimumSize(QSize(110, 0));

        gridLayout_2->addWidget(search_cmb_itemModel, 1, 1, 1, 1);

        l_search_lab_5 = new QLabel(wdgSearchPanel);
        l_search_lab_5->setObjectName("l_search_lab_5");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(l_search_lab_5->sizePolicy().hasHeightForWidth());
        l_search_lab_5->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(l_search_lab_5, 1, 0, 1, 1);

        search_cmb_itemText = new QComboBox(wdgSearchPanel);
        search_cmb_itemText->setObjectName("search_cmb_itemText");
        sizePolicy1.setHeightForWidth(search_cmb_itemText->sizePolicy().hasHeightForWidth());
        search_cmb_itemText->setSizePolicy(sizePolicy1);
        search_cmb_itemText->setMinimumSize(QSize(110, 0));

        gridLayout_2->addWidget(search_cmb_itemText, 2, 1, 1, 1);

        l_search_lab_6 = new QLabel(wdgSearchPanel);
        l_search_lab_6->setObjectName("l_search_lab_6");
        sizePolicy3.setHeightForWidth(l_search_lab_6->sizePolicy().hasHeightForWidth());
        l_search_lab_6->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(l_search_lab_6, 2, 0, 1, 1);

        l_search_lab_4 = new QLabel(wdgSearchPanel);
        l_search_lab_4->setObjectName("l_search_lab_4");
        sizePolicy3.setHeightForWidth(l_search_lab_4->sizePolicy().hasHeightForWidth());
        l_search_lab_4->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(l_search_lab_4, 0, 0, 1, 1);

        search_cmb_itemType = new QComboBox(wdgSearchPanel);
        search_cmb_itemType->setObjectName("search_cmb_itemType");
        sizePolicy1.setHeightForWidth(search_cmb_itemType->sizePolicy().hasHeightForWidth());
        search_cmb_itemType->setSizePolicy(sizePolicy1);
        search_cmb_itemType->setMinimumSize(QSize(110, 0));

        gridLayout_2->addWidget(search_cmb_itemType, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName("gridLayout_3");
        serch_radio_month = new QRadioButton(wdgSearchPanel);
        serch_radio_month->setObjectName("serch_radio_month");

        gridLayout_3->addWidget(serch_radio_month, 2, 0, 1, 1);

        serch_radio_year = new QRadioButton(wdgSearchPanel);
        serch_radio_year->setObjectName("serch_radio_year");

        gridLayout_3->addWidget(serch_radio_year, 2, 1, 1, 2);

        serch_radio_all = new QRadioButton(wdgSearchPanel);
        serch_radio_all->setObjectName("serch_radio_all");

        gridLayout_3->addWidget(serch_radio_all, 2, 3, 1, 1);

        search_checkBox_noPay = new QCheckBox(wdgSearchPanel);
        search_checkBox_noPay->setObjectName("search_checkBox_noPay");

        gridLayout_3->addWidget(search_checkBox_noPay, 0, 2, 1, 2);

        search_checkBox_noCensus = new QCheckBox(wdgSearchPanel);
        search_checkBox_noCensus->setObjectName("search_checkBox_noCensus");

        gridLayout_3->addWidget(search_checkBox_noCensus, 0, 0, 1, 2);

        search_checkBox_isCensus = new QCheckBox(wdgSearchPanel);
        search_checkBox_isCensus->setObjectName("search_checkBox_isCensus");

        gridLayout_3->addWidget(search_checkBox_isCensus, 1, 0, 1, 2);

        search_checkBox_isPay = new QCheckBox(wdgSearchPanel);
        search_checkBox_isPay->setObjectName("search_checkBox_isPay");

        gridLayout_3->addWidget(search_checkBox_isPay, 1, 2, 1, 2);


        horizontalLayout->addLayout(gridLayout_3);

        search_btn_go = new QPushButton(wdgSearchPanel);
        search_btn_go->setObjectName("search_btn_go");
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(search_btn_go->sizePolicy().hasHeightForWidth());
        search_btn_go->setSizePolicy(sizePolicy4);
        search_btn_go->setMinimumSize(QSize(40, 0));
        search_btn_go->setMaximumSize(QSize(60, 16777215));
        search_btn_go->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(search_btn_go);

        MySoftClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MySoftClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1029, 22));
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
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy5);
        mainToolBar->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 80, 80);"));
        MySoftClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MySoftClass);
        statusBar->setObjectName("statusBar");
        statusBar->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);\n"
"color: rgb(255, 255, 255);"));
        MySoftClass->setStatusBar(statusBar);
#if QT_CONFIG(shortcut)
        l_search_lab_16->setBuddy(search_cmb_custom);
        l_search_lab_17->setBuddy(search_cmb_custom);
        l_search_lab_18->setBuddy(search_cmb_custom);
        l_search_lab_19->setBuddy(search_cmb_custom);
        l_search_lab_20->setBuddy(search_cmb_custom);
        l_search_lab_7->setBuddy(search_cmb_custom);
        l_search_lab_8->setBuddy(search_cmb_custom);
        l_search_lab_9->setBuddy(search_cmb_custom);
        l_search_lab_10->setBuddy(search_cmb_custom);
        l_search_lab_11->setBuddy(search_cmb_custom);
        l_search_lab_12->setBuddy(search_cmb_custom);
        l_search_lab_13->setBuddy(search_cmb_custom);
        l_search_lab_14->setBuddy(search_cmb_custom);
        l_search_lab_15->setBuddy(search_cmb_custom);
        l_search_lab->setBuddy(search_cmb_custom);
        l_search_lab_2->setBuddy(serarch_cmd_bumeng);
        l_search_lab_3->setBuddy(serarch_cmd_user);
        l_search_lab_5->setBuddy(search_cmb_custom);
        l_search_lab_6->setBuddy(search_cmb_custom);
        l_search_lab_4->setBuddy(search_cmb_custom);
#endif // QT_CONFIG(shortcut)

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
        mainToolBar->addSeparator();
        mainToolBar->addAction(m_custom);
        mainToolBar->addSeparator();
        mainToolBar->addAction(m_new_detail);
        mainToolBar->addAction(m_new_census);
        mainToolBar->addAction(m_new_pay);
        mainToolBar->addSeparator();
        mainToolBar->addAction(m_sys_backup);
        mainToolBar->addSeparator();
        mainToolBar->addAction(m_sys_quit);

        retranslateUi(MySoftClass);

        stackedWidget_disp->setCurrentIndex(1);
        stackedWidget_edit->setCurrentIndex(0);
        editAc_cmb_customtype->setCurrentIndex(-1);
        editAc_cmb_customname->setCurrentIndex(-1);
        editAc_cmb_JinShouRen->setCurrentIndex(-1);
        editCustom_cmb_type->setCurrentIndex(-1);
        search_cmb_custom->setCurrentIndex(-1);
        search_cmb_itemModel->setCurrentIndex(-1);
        search_cmb_itemText->setCurrentIndex(-1);
        search_cmb_itemType->setCurrentIndex(-1);


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
        editAc_lab_panelName->setText(QCoreApplication::translate("MySoftClass", "\350\256\260     \350\264\246", nullptr));
        editAc_cmb_customtype->setCurrentText(QString());
        l_search_lab_16->setText(QCoreApplication::translate("MySoftClass", "\345\256\242\346\210\267\345\220\215\347\247\260\357\274\232", nullptr));
        l_search_lab_17->setText(QCoreApplication::translate("MySoftClass", "\345\256\242\346\210\267\347\261\273\345\236\213\357\274\232", nullptr));
        editAc_cmb_customname->setCurrentText(QString());
        l_search_lab_18->setText(QCoreApplication::translate("MySoftClass", "\346\227\245       \346\234\237\357\274\232", nullptr));
        editAc_cmb_JinShouRen->setCurrentText(QString());
        l_search_lab_19->setText(QCoreApplication::translate("MySoftClass", "\347\273\217 \346\211\213 \344\272\272\357\274\232", nullptr));
        l_search_lab_20->setText(QCoreApplication::translate("MySoftClass", "\347\272\242\345\255\227\344\270\272\345\277\205\345\241\253\351\241\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_account_edit->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MySoftClass", "\346\221\230\350\246\201\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_account_edit->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MySoftClass", "\350\247\204\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_account_edit->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MySoftClass", "\346\221\230  \350\246\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_account_edit->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MySoftClass", "\345\215\225\344\275\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_account_edit->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MySoftClass", "\346\225\260\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_account_edit->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MySoftClass", "\345\215\225\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_account_edit->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MySoftClass", "\351\207\221\351\242\235", nullptr));
        pushButton->setText(QCoreApplication::translate("MySoftClass", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MySoftClass", "\345\217\226\346\266\210", nullptr));
        editCustom_lab_panelName->setText(QCoreApplication::translate("MySoftClass", "\346\226\260\345\242\236\345\256\242\346\210\267", nullptr));
        l_search_lab_7->setText(QCoreApplication::translate("MySoftClass", "\345\256\242\346\210\267\347\261\273\345\236\213\357\274\232", nullptr));
        editCustom_cmb_type->setCurrentText(QString());
        l_search_lab_8->setText(QCoreApplication::translate("MySoftClass", "\345\256\242\346\210\267\345\220\215\347\247\260\357\274\232", nullptr));
        l_search_lab_9->setText(QCoreApplication::translate("MySoftClass", "\347\224\265      \350\257\235\357\274\232", nullptr));
        l_search_lab_10->setText(QCoreApplication::translate("MySoftClass", "\345\234\260      \345\235\200\357\274\232", nullptr));
        l_search_lab_11->setText(QCoreApplication::translate("MySoftClass", "\345\205\250      \346\213\274\357\274\232", nullptr));
        l_search_lab_12->setText(QCoreApplication::translate("MySoftClass", "\346\234\237\345\210\235\351\207\221\351\242\235\357\274\232", nullptr));
        l_search_lab_13->setText(QCoreApplication::translate("MySoftClass", "\345\205\203\357\274\210\345\210\233\345\273\272\345\220\216\346\227\240\346\263\225\344\277\256\346\224\271\357\274\211", nullptr));
        l_search_lab_14->setText(QCoreApplication::translate("MySoftClass", "\347\256\200      \346\213\274\357\274\232", nullptr));
        editCustom_btn_addType->setText(QCoreApplication::translate("MySoftClass", "+", nullptr));
        l_search_lab_15->setText(QCoreApplication::translate("MySoftClass", "\345\256\242\346\210\267\347\256\200\344\273\213\357\274\232", nullptr));
        editCustom_btn_new->setText(QCoreApplication::translate("MySoftClass", "\346\226\260\345\242\236", nullptr));
        editCustom_btn_clear->setText(QCoreApplication::translate("MySoftClass", "\346\270\205\347\251\272", nullptr));
        editCustom_btn_ok->setText(QCoreApplication::translate("MySoftClass", "\347\241\256\345\256\232", nullptr));
        l_search_lab->setText(QCoreApplication::translate("MySoftClass", "\345\256\242\346\210\267\357\274\232", nullptr));
        search_cmb_custom->setCurrentText(QString());
        l_search_lab_2->setText(QCoreApplication::translate("MySoftClass", "\351\203\250\351\227\250\357\274\232", nullptr));
        l_search_lab_3->setText(QCoreApplication::translate("MySoftClass", "\347\273\217\346\211\213\344\272\272\357\274\232", nullptr));
        search_cmb_itemModel->setCurrentText(QString());
        l_search_lab_5->setText(QCoreApplication::translate("MySoftClass", "\350\247\204       \346\240\274\357\274\232", nullptr));
        search_cmb_itemText->setCurrentText(QString());
        l_search_lab_6->setText(QCoreApplication::translate("MySoftClass", "\346\221\230       \350\246\201\357\274\232", nullptr));
        l_search_lab_4->setText(QCoreApplication::translate("MySoftClass", "\344\270\232\345\212\241\347\261\273\345\236\213\357\274\232", nullptr));
        search_cmb_itemType->setCurrentText(QString());
        serch_radio_month->setText(QCoreApplication::translate("MySoftClass", "\346\234\254\346\234\210", nullptr));
        serch_radio_year->setText(QCoreApplication::translate("MySoftClass", "\346\234\254\345\271\264", nullptr));
        serch_radio_all->setText(QCoreApplication::translate("MySoftClass", "\345\205\250\351\203\250", nullptr));
        search_checkBox_noPay->setText(QCoreApplication::translate("MySoftClass", "\346\234\252\347\273\223\347\256\227", nullptr));
        search_checkBox_noCensus->setText(QCoreApplication::translate("MySoftClass", "\346\234\252\347\273\237\350\256\241", nullptr));
        search_checkBox_isCensus->setText(QCoreApplication::translate("MySoftClass", "\345\267\262\347\273\237\350\256\241", nullptr));
        search_checkBox_isPay->setText(QCoreApplication::translate("MySoftClass", "\345\267\262\347\273\223\347\256\227", nullptr));
        search_btn_go->setText(QCoreApplication::translate("MySoftClass", "\346\237\245\350\257\242", nullptr));
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
