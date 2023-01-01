#pragma once
#include "sqlite3.h"
#include <Windows.h>
class MySqlite3
{
public:
	MySqlite3(); // 构造函数
	MySqlite3(char* path);
	virtual ~MySqlite3(); //析构函数
	sqlite3* db = NULL;
	bool sqlOpen(char* path); //打开数据库
	bool sqlClose(sqlite3* db); //关闭数据库
	char** rawQuery(char* sql, int *row, int* column, char** result); //查询数据库
	bool sqlExec(char* sql); //运行sql语句

};