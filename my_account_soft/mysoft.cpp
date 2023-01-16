#include "mysoft.h"
#include <QDebug>
#include <QObject>
//#include "Form_addCustomType.h"
using namespace std;


MySoft::MySoft(QString dbfile,QWidget *parent) : QMainWindow(parent),Qsqlite(dbfile)
{
    ui.setupUi(this);

    if ( !this->initDB())
    {
        qDebug()<<"init:" << this->error.text();
    }
	ui.stackedWidget_disp->setCurrentWidget(ui.disp_accountPanel);
	ui.stackedWidget_edit->setCurrentWidget(ui.edit_accountPanel);

	//将数据模型设置到tableView控件上
	ui.tableView_account_show->setModel(m_pModel);

    

    int len = sizeof(SHEET_user) / sizeof(SHEET_user[0]); //计算元素个数

    //显示查询数据到界面tableView上
    select_sqlModel("user", ui.tableView_account_show, m_pModel, SHEET_user, len);

    //QObject::connect(ui.editAc_btn_addType,&QPushButton::clicked, [=](void) { form_addCustomType->show(); });//Lambda表达式，关联后直接编写信号发射后要执行的代码。不需要定义槽函数。
    QObject::connect(ui.editCustom_btn_addType, &QPushButton::clicked, this, &MySoft::on_editAc_btn_addType);
}
void MySoft::on_editAc_btn_addType()
{
    form_addCustomType->show();
}
MySoft::~MySoft()
{

}

void MySoft::select_sqlModel(QString sheetName,QTableView *view, QSqlQueryModel* pModel, CONST SheetArg* sa,int len) //查询并显示到界面tableView上
{
    //清空数据模型
    pModel->clear();
    //查询数据
    QString sql = "select " + get_SheetArg_name(SHEET_user, len) + " from " + sheetName;
    qDebug() << sql;// 输出查询语句
    pModel->setQuery(sql, db);

    if (pModel->lastError().isValid())
    {
        ui.statusBar->showMessage("********* 数据查询失败!!" + pModel->lastError().text());
        return;
    }
    //设置数据模型指定列的列标题（若是不设置，则标题为和数据表上一样）
    set_sqlModel_title(pModel, SHEET_user, len);
    //设置列宽度 （不可变：ui->tableView->horizontalHeader()->setResizeMode(0,QHeaderView::Fixed);）
    for (int x = 0; x < len; x++) {
        view->setColumnWidth(x, sa[x].width);
    }
}
QString MySoft::get_SheetArg_name(CONST SheetArg* sa, int len) // 返回SheetArg中 name 字符，并用<,>连接
{
    QString ret = "";
    for (int x = 0; x < len; x++) {
        ret += sa[x].name;
        if (x < len - 1)
            ret += ",";
    }
    return ret;
}
void MySoft::set_sqlModel_title(QSqlQueryModel* pModel, CONST SheetArg* sa, int len)
//设置数据模型指定列的列标题（若是不设置，则标题为和数据表上一样）m_pModel->setHeaderData(0<列序号0-N>, Qt::Horizontal<Qt常数，横向>, "学号"<QString,要显示的列标题>);
{
    for (int x = 0; x < len; x++) {
        pModel->setHeaderData(x, Qt::Horizontal, sa[x].title);
    }

}