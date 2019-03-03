#include "mainwindow.h"
#include <QApplication>
#include <QtDebug>
#include <QtSql>
#include "sqlfunctions.h"
#include "animal.h"
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    qDebug() << "Starting";

<<<<<<< HEAD
    /*
    QSqlDatabase myDatabase = QSqlDatabase::addDatabase("QSQLITE");
    myDatabase.setDatabaseName("/home/student/Desktop/NullPointerException/cuACS/myDatabase");

    if(!myDatabase.open()){
            qDebug() << "Can't open database";
    }
        else{
            qDebug()<<"Opened database";
    }

    buildDatabase();
    */

    //QSqlQuery query = readDatabase();

    //data structure for animals INCOMPLETE
    //try <*Animal>
    //vector<Animal> animals;
    //Animal *animal = new Animal();

    /*
    while(query.next()){

        animal->setID(query.value(0).toInt());
        animal->setName(query.value(1).toString());
        animal->setGender(query.value(2).toInt());
        animal->setSpecies(query.value(3).toString());
        animal->setBreed(query.value(4).toString());
        animal->setAge(query.value(5).toInt());
        animal->setWeight(query.value(6).toFloat());
        animal->setHeight(query.value(7).toFloat());
        animal->setColour(query.value(8).toString());

        animals.push_back(*animal);
        animal = new Animal();
        qDebug()<<"loop ran";
    }
    */

    //addAllAnimals(query, animals, animal);

    //qDebug()<<"size"<<animals.size();

    /*for (size_t i = 0; i < animals.size(); i++) {
        printAnimal(&animals[i]);
    }*/

    //while(animals.size() > 0){
        //delete &animals[0]);
    //}

    w.show();
    //animals.clear();
    //myDatabase.close();
    return a.exec();
    //qDebug() << "Ending";
=======
    w.show();
    return a.exec();
>>>>>>> ca38f583b8a57816c80298cadfecfda00eb74cfa
}
