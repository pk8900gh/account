#include "qsqlite.h"

Qsqlite::Qsqlite(QString db)
{
	this->dbfile = db;
}
Qsqlite::~Qsqlite()
{
}
bool Qsqlite::initDB() //初始化数据库，true:正常打开 false:无法打开
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