#include "mainwindow.h"
#include <QApplication>
#include <QtDebug>
#include <QtSql>

void runQuery(QString input){
    QSqlQuery query;
    query.prepare(input);

    if(!query.exec()){
        qDebug() << "Can't run query";
    }
    else{
        qDebug() << "Ran query";
    }
}

void addValues(int id, QString name, int gender, QString species, QString breed, int age, QString weight, QString height, QString colour){
    QSqlQuery qry;
    qry.prepare("INSERT OR REPLACE INTO animals VALUES (?,?,?,?,?,?,?,?,?);");

    qry.addBindValue(id);
    qry.addBindValue(name);
    qry.addBindValue(gender);
    qry.addBindValue(species);
    qry.addBindValue(breed);
    qry.addBindValue(age);
    qry.addBindValue(weight);
    qry.addBindValue(height);
    qry.addBindValue(colour);

    if(!qry.exec()){
        qDebug() << "Can't add values";
    }
    else{
        qDebug() <<"Added values";
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    qDebug() << "Starting";

    QSqlDatabase myDatabase = QSqlDatabase::addDatabase("QSQLITE");
    myDatabase.setDatabaseName("/home/student/Desktop/NullPointerException/cuACS/myDatabase");

    if(!myDatabase.open()){
            qDebug() << "Can't open database";
        }
        else{
            qDebug()<<"Opened database";
        }

    QString currentQuery = "DROP TABLE IF EXISTS animals;";
    runQuery(currentQuery);

    //gender: 0 is female, 1 is male
    currentQuery = "CREATE TABLE IF NOT EXISTS animals (id INTEGER PRIMARY KEY,"
                   "name TEXT, gender INTEGER, species TEXT, breed TEXT, age INTEGER,"
                   "weight INTEGER, height INTEGER, colour TEXT);";
    runQuery(currentQuery);

    //adding values to database
    addValues(0,"Bloo",1,"dog","rottweiler",7,"55","2.5","black");

    qDebug() << "Ending";
    myDatabase.close();
    w.show();
    return a.exec();
}
