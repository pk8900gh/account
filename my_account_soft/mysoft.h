#pragma once
#include <QtWidgets>
#include "ui_mysoft.h"
#include <Windows.h>
#include <string>
#include "qsqlite.h"
#include <QSqlQueryModel>
#include "Form_addCustomType.h"
using namespace std;
struct SheetArg;
struct SheetArg
{
    string name;
    int width;
    QString  title;
};
CONST SheetArg SHEET_user[] = {{"id",20,"id"},{"userName",160,"用户名"},{"isAdmin",60,"管理员"},{"autoLogin",140,"自动登陆"} };//,{"passWord",0,"密码"},

class MySoft : public QMainWindow,public Qsqlite
{
    Q_OBJECT

public:
    Ui::MySoftClass ui;
    //为数据模型  m_pModel 设置父对象  
    QSqlQueryModel* m_pModel= new QSqlQueryModel(this);; //数据模型,用于显示查询结果

    //创建子窗口 form_addCustomType 客户类型管理
    Form_addCustomType* form_addCustomType = new Form_addCustomType(this);

    MySoft(QString dbfile, QWidget* parent = nullptr);

    QString get_SheetArg_name(CONST SheetArg* sa, int len);// 返回SheetArg中 name 字符，并用<,>连接

    void set_sqlModel_title(QSqlQueryModel* pModel, CONST SheetArg* sa, int len);//设置数据模型指定列的列标题（若是不设置，则标题为和数据表上一样）

    void select_sqlModel(QString sheetName, QTableView* view, QSqlQueryModel* pModel, CONST SheetArg* sa, int len); //查询并显示到界面tableView上

    ~MySoft();
public slots:
    void on_editAc_btn_addType();

};


