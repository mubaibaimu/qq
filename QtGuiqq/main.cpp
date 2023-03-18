#include "QtGuiqq.h"
#include <QtWidgets/QApplication>
#include<QSqlDatabase>
#include<QSqlError>
#include<QDebug>
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");  //创建Mysql数据库连接
    db.setHostName("localhost");                            //主机服务器
    db.setPort(3306);                                       //端口
    db.setUserName("root");                                 //用户名
    db.setPassword("Baizihao123.");                         //密码
    db.setDatabaseName("message");                          //数据库名
    //确定连接情况
    if (db.open())
    {
        qDebug() << "数据库连接成功";
    }
    else
    {
        qDebug() << "数据库连接失败";
        qDebug() << db.lastError().text();                  //输出错误信息
    }
	QtGuiqq w;
	w.show();
	return a.exec();
}
