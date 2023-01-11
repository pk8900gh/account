#pragma once
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>
#include "string.h"
#include <QFileInfo>


class Qsqlite
{
public:
	QString dbfile;
	QSqlDatabase db;
	QSqlError error;
	Qsqlite(QString dbfile);
	~Qsqlite();
	bool initDB();  //初始化数据库，true:正常打开 false:无法打开
	int addUser( QString username, QString password, int isadmin = 0, int autologin = 0); // 添加用户，成功返回id ，id=-1为添加失败 数据表：user 
	bool editUser(int id, QString username, QString password, int isadmin, int autologin);//修改用户 数据表：user 
	int addUserLimits(int user_id, int create = 0, int  modify = 0, int del = 0, int showTotal = 0, int  print = 0, int census = 0, int pay = 0); //新增用户权限 ，返回id ，id=-1为添加失败  id,user_id,create,modify,delete,showTotal,print,census,pay 数据表：userLimits
	bool editUserLimits(int id, int user_id, int create, int  modify, int del, int showTotal, int  print, int census, int pay);  //修改用户权限 数据表：userLimits
	int  addCustomType(QString typeName);// 添加客户类型，返回id ，id=-1为添加失败 id,typeName    数据表：customeType
	bool editCustomType(int id, QString typeName);//修改客户类型   数据表：customeType
	int  addCustom(QString customeName, int QcustomeType_id, QString telephone, QString JianPin, QString pinYin, QString address, QString lastCensusTime, QString lastPayTime, float money, QString remarks);
	//添加客户，返回id ，id=-1为添加失败 id ,customeName,customeType_id,telephone,JianPin,pinYin,address,lastCensusTime,lastPayTime,money,remarks   数据表：custome
	bool editCustom(int id, QString customeName, int QcustomeType_id, QString telephone, QString JianPin, QString pinYin, QString address, QString lastCensusTime, QString lastPayTime, float money, QString remarks);
	//修改客户信息  数据表：custome
	int addItemType(QString name, int used = 0);  //增加记账明细类型  id,name,used  数据表：itemType
	bool editItemType(int id, QString name, int used); //修改记账明细类型  数据表：itemType
	int addItemModel(int ItemType_id, QString ModelName, QString unit, float price, int used = 0); //增加明细记账规格型号  id,ItemType_id,ModelName,unit,price,used 数据表：itemModel
	bool editIteModel(int id, int ItemType_id, QString ModelName, QString unit, float price, int used); //修改明细记账规格型号 数据表：itemModel
	int addUnitDic(int itemType_id,QString unitText,int itemModel_id,int used=0);//新增单位 id,itemType_id,unitText,itemModel_id,used   数据表：unitDic
	bool editUnitDic(int id, int itemType_id, QString unitText, int itemModel_id, int used); //修改单位 数据表：unitDic
	int addDetailSheet(QString theDate, int custome_id, float money, QString remark, QString sysDate, int census_id = -1, int  pay_id = -1);//事务处理机制 新增记账  id,date,custome_id,money,remark,census_id,pay_id  //数据表：detailSheet
	bool eidtDetailSheet(int id,QString theDate, int custome_id, float money, QString remark, QString sysDate, int census_id, int  pay_id);//事务处理机制 修改记账  id,date,custome_id,money,remark,census_id,pay_id  //数据表：detailSheet
	int addCensusSheet(int custome_id,QString censusText,QString censusDate,float censusMoney,QString censusUserName,QString censusRemark);//事务处理机制 新增统计报表  id,custome_id,censusText,censusDate,censusMoney,censusUserName,censusRemark  //数据表：censusSheet
	bool editCensusSheet(int id,int custome_id, QString censusText, QString censusDate, float censusMoney, QString censusUserName, QString censusRemark);//修改统计报表  id,custome_id,censusText,censusDate,censusMoney,censusUserName,censusRemark  //数据表：censusSheet
	bool delCensusSheet(int id);// 事务处理机制  删除统计报表  id,custome_id,censusText,censusDate,censusMoney,censusUserName,censusRemark  //数据表：censusSheet
	int addPaySheet(int custome_id, int census_id,QString payText,QString payDate,float payMoney,QString payUserName,QString payRemark); ///事务处理机制 新增结算报表  id,custome_id,census_id,payText,payDate,payMoney,payUserName,payRemark //数据表；paySheet
	int editPaySheet(int id,int custome_id, int census_id, QString payText, QString payDate, float payMoney, QString payUserName, QString payRemark); ///仅修改信息 修改结算报表  id,custome_id,census_id,payText,payDate,payMoney,payUserName,payRemark //数据表；paySheet
	bool delPaySheet(int id); //删除结算报表 风险操作 需要进行确认
};
