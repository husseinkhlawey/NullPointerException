#include "sqlfunctions.h"
#include "animal.h"
#include <QtDebug>
#include <QtSql>

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
    addValues(0,"Bloo",1,"Dog","Rottweiler",7,55,2.5,"black");
    addValues(1,"Red",1,"Dog","Hound",9,40,2,"brown");
    addValues(2,"Frisk",1,"Cat","Balinese",6,3,0.8,"white");
    addValues(3,"Falcon",0,"Bird","Humming Bird",5567,0,567.13,"turquoise");
    addValues(4,"Fenrir",1,"Ancient Wolf","Dire Wolf",1,30,3,"White");
    addValues(5,"Jon Snow", 0.5, "Ape King","G.O.D",454300000,8,100,"gold");
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

//get number of animals
int getNumAnimals(){
    int total = 0;
    QSqlQuery query = readDatabase();
    while(query.next()){
        total++;
    }
    return total;
}

//adds animals to data structure, for future use
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
