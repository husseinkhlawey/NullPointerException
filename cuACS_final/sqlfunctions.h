#ifndef SQLFUNCTIONS_H
#define SQLFUNCTIONS_H

#include "animal.h"
#include "client.h"
#include <QtSql>

//runs given sql queries on open database
void runQuery(QString input);

//adds animals values to databse
void addAnimals(int id, QString name, int gender, QString species, QString breed, int age, float weight, float height, QString colour,
                QString independence, QString obedience, QString training, int costOfMaintenance, int timeOfMaintenance, QString loyalty,
                int diet, QString loudness, int lifespan, int socialNeeds);

//adds client values to database
void addClients (int id, QString fname, QString lname, QString email, QString address, QString phone, QString numKids, QString leisure,
                 QString salary, QString housing, QString allergies, QString lifestyle, QString species, QString independence, QString obedience,
                 QString training, int costOfMaintenance, int timeOfMaintenance, QString loyalty, int diet, QString loudness, int lifespan,
                 int socialNeeds);

//populates database and removes old data
void buildDatabase();

//reading from the db
QSqlQuery readAnimalTable();

//make read query for clients
QSqlQuery readClientTable();

//for debugging print animal's information
void printAnimal(Animal *animal);

//for debugging print animal's information
void printClient(Client *client);

//get number of animals
int getNumAnimals();

//get number of clients
int getNumClients();

//adds animals to data structure
void addAllAnimals(QSqlQuery query, vector<Animal> animals, Animal *animal);

//adds clients to data structure
void addAllClients(QSqlQuery query, vector<Client> clients, Animal *client);

void editAnimals(QString id, QString name, QString gender, QString species, QString breed, QString age, QString weight, QString height, QString colour,
                QString independence, QString obedience, QString training, QString costOfMaintenance, QString timeOfMaintenance, QString loyalty,
                QString diet, QString loudness, QString lifespan, QString socialNeeds);

void editClients(QString id, QString fName, QString lName, QString email, QString address, QString phone, QString numKids, QString leisure,
                 QString salary, QString housing, QString allergies, QString lifestyle, QString species, QString independence, QString obedience,
                 QString training, QString costOfMaintenance, QString timeOfMaintenance, QString loyalty, QString diet, QString loudness,
                 QString lifespan, QString socialNeeds);

#endif // SQLFUNCTIONS_H
