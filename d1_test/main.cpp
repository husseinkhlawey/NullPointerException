#include <QCoreApplication>
#include <QApplication>
#include <QtSql>
#include <QtDebug>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QtWidgets>
#include "mainwindow.h"
#include <QCommandLineParser>
#include <QCommandLineOption>
#include "Animal.h"
#include <vector>
#include <iostream>
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

    //QCoreApplication a(argc, argv);


    Q_INIT_RESOURCE(application);

    QApplication app(argc, argv);
    QCoreApplication::setOrganizationName("QtProject");
    QCoreApplication::setApplicationName("Application Example");
    QCoreApplication::setApplicationVersion(QT_VERSION_STR);
    QCommandLineParser parser;
    parser.setApplicationDescription(QCoreApplication::applicationName());
    parser.addHelpOption();
    parser.addVersionOption();
    parser.addPositionalArgument("file", "The file to open.");
    parser.process(app);

    MainWindow mainWin;
        if (!parser.positionalArguments().isEmpty())
            mainWin.loadFile(parser.positionalArguments().first());
        mainWin.show();


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
    addValues("Red","dog","hound","40","2","brown");


    //reading from the db
    QSqlQuery query2;
    query2.prepare("select * from animals");

    if(!query2.exec()){
        qDebug()<<"cant read";
    }
    else{
        qDebug()<<"read from db";
    }


    //do something with the data
    //print some of it
    query2.next();
    //while(query2.next())
    //{
        // access fields of current record
        //if(query2.first())
            qDebug()<<query2.value(0).toString();
        //else
            //qDebug()<<"animal not found";
    //}

    //data structure for animals
    vector<Animal> animals;
    Animal *dummyAnl = new Animal("","","",0,"","");
    dummyAnl->name = query2.value(0).toString();
    dummyAnl->species = query2.value(1).toString();
    dummyAnl->breed = query2.value(2).toString();
    dummyAnl->weight = query2.value(3).toString();
    dummyAnl->height = query2.value(4).toString();
    dummyAnl->colour = query2.value(5).toString();

    qDebug()<<"printing dummyAnl";
    qDebug() << dummyAnl->name;
    qDebug() << dummyAnl->species;
    qDebug() << dummyAnl->breed;
    qDebug() << dummyAnl->weight;
    qDebug() << dummyAnl->height;
    qDebug() << dummyAnl->colour;

    animals.push_back(*dummyAnl);
    for (size_t i = 0; i < animals.size(); i++) {
        qDebug() << animals.at(i).name << endl;
      }

    delete dummyAnl;

    qDebug() << "ending";
    db.close();
    //return a.exec();
    return app.exec();
}
//https://www.youtube.com/watch?v=WQtblU13Cq4 <<-- the based lord himself
//https://www.qtcentre.org/threads/27167-How-can-i-execute-a-database-script-within-Qt
//http://blog.davidecoppola.com/2016/11/howto-embed-database-in-application-with-sqlite-and-qt/
//https://www.ibm.com/support/knowledgecenter/en/SSLTBW_2.3.0/com.ibm.zos.v2r3.cbclx01/cplr376.htm
//https://doc.qt.io/qt-5/qtwidgets-mainwindows-application-example.html
