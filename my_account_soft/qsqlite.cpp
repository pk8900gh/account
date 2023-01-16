#include "qsqlite.h"

#include <QObject>
#include <QMap>
#include <QMessageBox>
#include <QSettings>
#include <QSqlError>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QBuffer>

Qsqlite::Qsqlite(QString db)
{
	this->dbfile = db;
}
Qsqlite::~Qsqlite()
{
}
bool Qsqlite::initDB()
{
	// 检测已连接的方式 - 默认连接名
		//QSqlDatabase::contains(QSqlDatabase::defaultConnection)
	if (QSqlDatabase::contains("qt_sql_default_connection"))
		db = QSqlDatabase::database("qt_sql_default_connection");
	else
		db = QSqlDatabase::addDatabase("QSQLITE");
	//检测已连接的方式 - 自定义连接名
	QFileInfo qf(dbfile);
	if (!qf.isFile())
		return false;
	db.setDatabaseName(dbfile);
	if (!db.open())
	{
		error = db.lastError();
		return false;
	}
	return true;

}

int Qsqlite::addUser(QString username, QString password, int isadmin = 0, int autologin = 0) // 添加用户，成功返回id ，id=-1为添加失败 数据表：user 
{
	QSqlQuery query;
	QString command = QString("insert into user(username,password,isadmin,autologin) values('%1','%2','%3','%4').arg(username).arg(password).arg(isadmin).arg(autologin)");
	qDebug() << command;
	if (query.exec(command))
	{
		qDebug() << "insert ok!";
		return 1;
	}
	else
	{
		qDebug() << "insert error!";
		return -1;
	}
	return 0;
}

bool Qsqlite::editUser(int id, QString username, QString password, int isadmin, int autologin)//修改用户 数据表：user 
{

}