#ifndef SQLFUNCTIONS_H
#define SQLFUNCTIONS_H

#include "animal.h"
#include <QtSql>

//runs given sql queries on open database
void runQuery(QString input);

//adds animals values to databse
void addAnimals(int id, QString name, int gender, QString species, QString breed, int age, float weight, float height, QString colour);

//adds client values to database
void addClients (int id, QString fname, QString lname, QString email, QString address, QString phone);

//populates database and removes old data
void buildDatabase();

//reading from the db
QSqlQuery readAnimalTable();

//make read query for clients
QSqlQuery readClientTable();

//for debugging print animal's information
void printAnimal(Animal *animal);

//get number of animals
int getNumAnimals();

//adds animals to data structure
void addAllAnimals(QSqlQuery query, vector<Animal> animals, Animal *animal);

#endif // SQLFUNCTIONS_H
