﻿#include <QtDebug>
#include <QtSql>
#include "animal.h"

//runs given sql queries on open database
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

//adds animals values to databse
void addValues(int id, QString name, int gender, QString species, QString breed, int age, float weight, float height, QString colour){
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

//populates database and removes old data
void buildDatabase() {
    QString currentQuery = "DROP TABLE IF EXISTS animals;";
    runQuery(currentQuery);

    //gender: 0 is female, 1 is male
    currentQuery = "CREATE TABLE IF NOT EXISTS animals (id INTEGER PRIMARY KEY,"
                   "name TEXT, gender INTEGER, species TEXT, breed TEXT, age INTEGER,"
                   "weight INTEGER, height INTEGER, colour TEXT);";

    runQuery(currentQuery);

    //adding values to database
    addValues(0,"Bloo",1,"dog","rottweiler",7,55,2.5,"black");
    addValues(1,"Red",1,"dog","hound",9,40,2,"brown");

}

//reading from the db
QSqlQuery readDatabase() {
    QSqlQuery query;
    query.prepare("select * from animals");

    if(!query.exec()){
        qDebug()<<"Can't read";
    }
    else{
        qDebug()<<"Read from db";
    }
    return query;
}

//for debugging print animal's information
void printAnimal(Animal *animal) {
    qDebug() << animal->getID();
    qDebug() << animal->getName();
    qDebug() << animal->getGender();
    qDebug() << animal->getSpecies();
    qDebug() << animal->getBreed();
    qDebug() << animal->getAge();
    qDebug() << animal->getWeight();
    qDebug() << animal->getHeight();
    qDebug() << animal->getColour();
}

//adds animals to data structure
void addAllAnimals(QSqlQuery query, vector<Animal> animals, Animal *animal){
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
    qDebug() << "size sql" << animals.size();
}
