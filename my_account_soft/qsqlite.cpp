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

int Qsqlite::addUser(QString username, QString password, int isadmin = 0, int autologin = 0) // ����û����ɹ�����id ��id=-1Ϊ���ʧ�� ���ݱ�user 
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

bool Qsqlite::editUser(int id, QString username, QString password, int isadmin, int autologin)//�޸��û� ���ݱ�user 
{

}