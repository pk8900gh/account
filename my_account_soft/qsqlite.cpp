#include "qsqlite.h"

Qsqlite::Qsqlite(QString db)
{
	this->dbfile = db;
}
Qsqlite::~Qsqlite()
{
}
bool Qsqlite::initDB()
{
	// ��������ӵķ�ʽ - Ĭ��������
		//QSqlDatabase::contains(QSqlDatabase::defaultConnection)
	if (QSqlDatabase::contains("qt_sql_default_connection"))
		db = QSqlDatabase::database("qt_sql_default_connection");
	else
		db = QSqlDatabase::addDatabase("QSQLITE");
	//��������ӵķ�ʽ - �Զ���������
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