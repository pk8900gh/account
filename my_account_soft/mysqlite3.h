#if	!defined(AFX_SQLITEHELPER_H__59F8C44E_0D98_4422_AEB1_2FD927EE8902__INCLUDED_)
#define AFX_SQLITEHELPER_H__59F8C44E_0D98_4422_AEB1_2FD927EE8902__INCLUDED_
#endif // !defined(AFX_SQLITEHELPER_H__59F8C44E_0D98_4422_AEB1_2FD927EE8902__INCLUDED_)</windows.h>
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "sqlite3.h"
#include <Windows.h>
class MySqlite3
{
public:
	MySqlite3(); // ���캯��
	virtual ~MySqlite3(); //��������
	sqlite3* db = NULL;
	bool sqlOpen(char* path); //�����ݿ�
	bool sqlClose(sqlite3* db); //�ر����ݿ�
	char** rawQuery(char* sql, int *row, int* column, char** result); //��ѯ���ݿ�
	bool sqlExec(char* sql); //����sql���

private:
	;
};

