#include "mysqlite3.h"
#include "stdio.h"

MySqlite3::MySqlite3()
{
}
MySqlite3::~MySqlite3()
{
}
bool MySqlite3::sqlExec(char* sql)
{
	sqlite3_exec(db, sql, 0, 0, 0);
	return true;
}
char** MySqlite3::rawQuery(char* sql, int* row, int* column, char** result)
{
	sqlite3_get_table(db, sql, &result, row, column, 0);
	return result;
}
bool MySqlite3::sqlOpen(char* path)
{
	int last = sqlite3_open(path, &db);
	if (SQLITE_OK != last)
	{
		printf("error");
	}
	return true;
}