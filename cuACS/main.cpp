#include "mainwindow.h"
#include <QApplication>
#include <QtDebug>
#include <QtSql>
#include "sqlfunctions.cpp"
#include "animal.h"

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

    buildDatabase();

    QSqlQuery query = readDatabase();

    //data structure for animals
    vector<Animal> *animals {};
    Animal *animal = new Animal();

    addAllAnimals(query,animals,animal);

    qDebug()<<animals->size();
    for (size_t i = 0; i < animals->size(); i++) {
        printAnimal(&animals->at(i));
    }

    //while(animals.size() > 0){
        //delete &animals.at(0);
    //}

    w.show();
    qDebug() << "Ending";
    //animals.clear();
    myDatabase.close();
    return a.exec();
}
