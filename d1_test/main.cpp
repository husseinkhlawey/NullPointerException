#include <QCoreApplication>
#include <QtSql>
#include <QtDebug>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <iostream>
#include <vector>
using namespace std;

void addValues(QString name, QString species, QString breed, QString weight, QString height, QString colour){
    QSqlQuery qry;
    qry.prepare("INSERT OR REPLACE INTO animals VALUES (?,?,?,?,?,?);");

    qry.addBindValue(name);
    qry.addBindValue(species);
    qry.addBindValue(breed);
    qry.addBindValue(weight);
    qry.addBindValue(height);
    qry.addBindValue(colour);

    if(!qry.exec()){
        qDebug() << "cant add values";
    }
    else{
        qDebug() <<"added values";
    }

}

void myRunQuery(QString input){
    QSqlQuery query;
    query.prepare(input);

    if(!query.exec()){
        qDebug()<<"cant run query";
    }
    else{
        qDebug()<<"ran query";
    }
}

int main(int argc, char *argv[])
{

    qDebug() << "starting";

    QCoreApplication a(argc, argv);

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/student/Desktop/NullPointerException/d1_test/myDatabase");

    if(!db.open()){
        qDebug() << "cant open db";
    }
    else{
        qDebug()<<"opened";
    }

    myRunQuery("DROP TABLE IF EXISTS animals;");

    QString query = "CREATE TABLE IF NOT EXISTS animals (name TEXT PRIMARY KEY, species TEXT, breed TEXT, weight TEXT, height TEXT, colour TEXT);";

    QSqlQuery qry;

    if(!qry.exec(query)){
        qDebug() << "cant create table";
    }
    else{
        qDebug() << "made table";
    }

    addValues("Bloo","dog","rottweiler","55","2.5","black");
    //addValues("Red");


    //reading from the db
    QSqlQuery query2;
    query2.prepare("select * from animals");

    if(!query2.exec()){
        qDebug()<<"cant read";
    }
    else{
        qDebug()<<"read from db";
    }


    while(query2.next())
    {
        // access fields of current record
        //if(query2.first())
            qDebug()<<query2.value(1).toString();
        //else
            //qDebug()<<"animal not found";
    }


    qDebug() << "ending";
    db.close();
    return a.exec();
}
//https://www.youtube.com/watch?v=WQtblU13Cq4 <<-- the based lord himself
//https://www.qtcentre.org/threads/27167-How-can-i-execute-a-database-script-within-Qt
//http://blog.davidecoppola.com/2016/11/howto-embed-database-in-application-with-sqlite-and-qt/
