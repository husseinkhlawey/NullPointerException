#include "sqlfunctions.h"
#include "animal.h"
#include "client.h"
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

//adds animal values to database
void addAnimals(int id, QString name, int gender, QString species, QString breed, int age, float weight, float height, QString colour,
                QString independence, QString obedience, QString training, int costOfMaintenance, int timeOfMaintenance, QString loyalty,
                QString diet, QString loudness, int lifespan, QString socialNeeds)
{
    QSqlQuery qry;
    qry.prepare("INSERT OR REPLACE INTO animals VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?);");

    qry.addBindValue(id);
    qry.addBindValue(name);
    qry.addBindValue(gender);
    qry.addBindValue(species);
    qry.addBindValue(breed);
    qry.addBindValue(age);
    qry.addBindValue(weight);
    qry.addBindValue(height);
    qry.addBindValue(colour);
    qry.addBindValue(independence);
    qry.addBindValue(obedience);
    qry.addBindValue(training);
    qry.addBindValue(costOfMaintenance);
    qry.addBindValue(timeOfMaintenance);
    qry.addBindValue(loyalty);
    qry.addBindValue(diet);
    qry.addBindValue(loudness);
    qry.addBindValue(lifespan);
    qry.addBindValue(socialNeeds);

    if(!qry.exec()){
        qDebug() << "Can't add animal values";
    }
    else{
        qDebug() <<"Added values";
    }
}

//adds client values to database
void addClients (int id, QString fname, QString lname, QString email, QString address, QString phone){
    QSqlQuery qry;
    qry.prepare("INSERT OR REPLACE INTO clients VALUES (?,?,?,?,?,?);");

    qry.addBindValue(id);
    qry.addBindValue(fname);
    qry.addBindValue(lname);
    qry.addBindValue(email);
    qry.addBindValue(address);
    qry.addBindValue(phone);

    if(!qry.exec()){
        qDebug() << "Can't add client values";
    }
    else{
        qDebug() <<"Added values";
    }
}

//populates database and removes old data
void buildDatabase() {
    //deleting existing data
    QString currentQuery = "DROP TABLE IF EXISTS animals;";
    runQuery(currentQuery);

    currentQuery = "DROP TABLE IF EXISTS clients;";
    runQuery(currentQuery);

    //creating tables
    //gender: 0 is female, 1 is male
    currentQuery = "CREATE TABLE IF NOT EXISTS animals (id INTEGER PRIMARY KEY,"
                   "name TEXT, gender INTEGER, species TEXT, breed TEXT, age INTEGER,"
                   "weight INTEGER, height INTEGER, colour TEXT, independence TEXT, obedience TEXT, "
                   "training TEXT, costOfMaintenance INTEGER, timeOfMaintenance INTEGER, loyalty TEXT, diet TEXT, "
                   "loudness TEXT, lifespan INTEGER, socialNeeds TEXT);";

    runQuery(currentQuery);
    currentQuery = "CREATE TABLE IF NOT EXISTS clients (id INTEGER PRIMARY KEY, firstName TEXT, lastName TEXT, email TEXT, address TEXT, phone TEXT);";

    runQuery(currentQuery);

    //adding values to database
    addAnimals(0,"Bloo",1,"Dog","Rottweiler",7,55,2.5,"black","medium","high","easy",90,45,"high","2-3 meals","medium",12,"10 hours/week");
    addAnimals(1,"Red",1,"Dog","Hound",9,40,2,"brown","medium","high","easy",80,40,"high","2-3 meals","high",12,"10 hours/week");
    addAnimals(2,"Frisk",1,"Cat","Balinese",6,3,0.8,"white","high","low","none",60,3,"medium","3-4 meals","low",10,"3 hours/week");
    //addAnimals(3,"Falcon",0,"Bird","Humming Bird",5567,0,567.13,"turquoise");
    //addAnimals(4,"Fenrir",1,"Ancient Wolf","Dire Wolf",1,30,3,"White");
    //addAnimals(5,"Jon Snow", 0.5, "Ape King","G.O.D",454300000,8,100,"gold");

    addClients(0,"Bob","Ross","bob.ross@gmail.com","1234 Some Street","(257) 323-9812");
}

//reading from the db
QSqlQuery readAnimalTable() {
    QSqlQuery query;
    query.prepare("select * from animals");

    if(!query.exec()){
        qDebug()<<"Can't read animals";
    }
    else{
        qDebug()<<"Read animals from db";
    }
    return query;
}

//make read query for clients
QSqlQuery readClientTable() {
    QSqlQuery query;
    query.prepare("select * from clients");

    if(!query.exec()){
        qDebug()<<"Can't read clients";
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

void printClient(Client *client) {
    qDebug() << client->getID();
    qDebug() << client->getFname();
    qDebug() << client->getLname();
    qDebug() << client->getEmail();
    qDebug() << client->getAddress();
    qDebug() << client->getPhone();
}

//get number of animals
int getNumAnimals(){
    int total = 0;
    QSqlQuery query = readAnimalTable();
    while(query.next()){
        total++;
    }
    return total;
}

//get number of clients
int getNumClients(){
    int total = 0;
    QSqlQuery query = readClientTable();
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

//adds animals to data structure, for future use
void addAllClients(QSqlQuery query, vector<Client> clients, Client *client){
    while(query.next()){

        client->setID(query.value(0).toInt());
        client->setFname(query.value(1).toString());
        client->setLname(query.value(2).toString());
        client->setEmail(query.value(3).toString());
        client->setAddress(query.value(4).toString());
        client->setPhone(query.value(4).toString());

        clients.push_back(*client);
        client = new Client();
        qDebug()<<"loop ran";
    }
    qDebug() << "size sql" << clients.size();
}
