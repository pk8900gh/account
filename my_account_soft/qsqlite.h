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
	bool initDB();  //��ʼ�����ݿ⣬true:������ false:�޷���
	int addUser( QString username, QString password, int isadmin = 0, int autologin = 0); // ����û����ɹ�����id ��id=-1Ϊ���ʧ�� ���ݱ�user 
	bool editUser(int id, QString username, QString password, int isadmin, int autologin);//�޸��û� ���ݱ�user 
	int addUserLimits(int user_id, int create = 0, int  modify = 0, int del = 0, int showTotal = 0, int  print = 0, int census = 0, int pay = 0); //�����û�Ȩ�� ������id ��id=-1Ϊ���ʧ��  id,user_id,create,modify,delete,showTotal,print,census,pay ���ݱ�userLimits
	bool editUserLimits(int id, int user_id, int create, int  modify, int del, int showTotal, int  print, int census, int pay);  //�޸��û�Ȩ�� ���ݱ�userLimits
	int  addCustomType(QString typeName);// ��ӿͻ����ͣ�����id ��id=-1Ϊ���ʧ�� id,typeName    ���ݱ�customeType
	bool editCustomType(int id, QString typeName);//�޸Ŀͻ�����   ���ݱ�customeType
	int  addCustom(QString customeName, int QcustomeType_id, QString telephone, QString JianPin, QString pinYin, QString address, QString lastCensusTime, QString lastPayTime, float money, QString remarks);
	//��ӿͻ�������id ��id=-1Ϊ���ʧ�� id ,customeName,customeType_id,telephone,JianPin,pinYin,address,lastCensusTime,lastPayTime,money,remarks   ���ݱ�custome
	bool editCustom(int id, QString customeName, int QcustomeType_id, QString telephone, QString JianPin, QString pinYin, QString address, QString lastCensusTime, QString lastPayTime, float money, QString remarks);
	//�޸Ŀͻ���Ϣ  ���ݱ�custome
	int addItemType(QString name, int used = 0);  //���Ӽ�����ϸ����  id,name,used  ���ݱ�itemType
	bool editItemType(int id, QString name, int used); //�޸ļ�����ϸ����  ���ݱ�itemType
	int addItemModel(int ItemType_id, QString ModelName, QString unit, float price, int used = 0); //������ϸ���˹���ͺ�  id,ItemType_id,ModelName,unit,price,used ���ݱ�itemModel
	bool editIteModel(int id, int ItemType_id, QString ModelName, QString unit, float price, int used); //�޸���ϸ���˹���ͺ� ���ݱ�itemModel
	int addUnitDic(int itemType_id,QString unitText,int itemModel_id,int used=0);//������λ id,itemType_id,unitText,itemModel_id,used   ���ݱ�unitDic
	bool editUnitDic(int id, int itemType_id, QString unitText, int itemModel_id, int used); //�޸ĵ�λ ���ݱ�unitDic
	int addDetailSheet(QString theDate, int custome_id, float money, QString remark, QString sysDate, int census_id = -1, int  pay_id = -1);//��������� ��������  id,date,custome_id,money,remark,census_id,pay_id  //���ݱ�detailSheet
	bool eidtDetailSheet(int id,QString theDate, int custome_id, float money, QString remark, QString sysDate, int census_id, int  pay_id);//��������� �޸ļ���  id,date,custome_id,money,remark,census_id,pay_id  //���ݱ�detailSheet
	int addCensusSheet(int custome_id,QString censusText,QString censusDate,float censusMoney,QString censusUserName,QString censusRemark);//��������� ����ͳ�Ʊ���  id,custome_id,censusText,censusDate,censusMoney,censusUserName,censusRemark  //���ݱ�censusSheet
	bool editCensusSheet(int id,int custome_id, QString censusText, QString censusDate, float censusMoney, QString censusUserName, QString censusRemark);//�޸�ͳ�Ʊ���  id,custome_id,censusText,censusDate,censusMoney,censusUserName,censusRemark  //���ݱ�censusSheet
	bool delCensusSheet(int id);// ���������  ɾ��ͳ�Ʊ���  id,custome_id,censusText,censusDate,censusMoney,censusUserName,censusRemark  //���ݱ�censusSheet
	int addPaySheet(int custome_id, int census_id,QString payText,QString payDate,float payMoney,QString payUserName,QString payRemark); ///��������� �������㱨��  id,custome_id,census_id,payText,payDate,payMoney,payUserName,payRemark //���ݱ�paySheet
	int editPaySheet(int id,int custome_id, int census_id, QString payText, QString payDate, float payMoney, QString payUserName, QString payRemark); ///���޸���Ϣ �޸Ľ��㱨��  id,custome_id,census_id,payText,payDate,payMoney,payUserName,payRemark //���ݱ�paySheet
	bool delPaySheet(int id); //ɾ�����㱨�� ���ղ��� ��Ҫ����ȷ��
};
