#ifndef CONNECTION_H
#define CONNECTION_H

#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>

static bool createConnection()
{
    QSqlDatabase db =QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("mydata");
    db.setUserName("root");
    db.setPassword("");

    if(!db.open())
    {
        QMessageBox::critical(0,QObject::tr("无法打开数据库"),"无法创建数据库连接！",QMessageBox::Cancel);
        return false;
    }

    //创建表
    QSqlQuery query(db);

//    query.exec("create table course(id int primary key, name varchar(20),teacher varchar(20))");
//    query.exec("insert into course values(0,'shuxue','liulaoshi')");
//    query.exec("insert into course values(1,'yingyu','zhanglaoshi')");
//    query.exec("insert into course values(2,'jisuanji','bailaoshi')");

    query.exec("create table courses(id int primary key,name varchar(20),teacher varchar(20))");
    query.exec("insert into courses values(0,'math','liulaoshi')");
    query.exec("insert into courses values(1,'english','zhanglaoshi')");
    query.exec("insert into courses values(2,'computer','bailaoshi')");

    return true;
}

#endif // CONNECTION_H
