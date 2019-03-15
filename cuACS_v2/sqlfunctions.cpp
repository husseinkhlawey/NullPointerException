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
    addAnimals(3,"Falcon",0,"Bird","Humming Bird",5567,0,567.13,"turquoise","medium","high","easy",90,45,"high","2-3 meals","medium",12,"19 hours/week");
    addAnimals(4,"Fenrir",1,"Ancient Wolf","Dire Wolf",1,30,3,"White","medium","high","easy",80,40,"high","2-3 meals","high",12,"13 hours/week");
    addAnimals(5,"Jon Snow", 0.5, "Ape King","G.O.D",454300000,8,100,"gold","high","low","none",60,3,"medium","3-4 meals","low",10,"12 hours/week");
    addAnimals(6,"Goku", 0, "Dog","Greyhound",2,55,8,"black","medium","high","easy",90,45,"high","2-5 meals","medium",13,"10 hours/week");
    addAnimals(7,"Vegeta", 0, "Cat","Jaguar",21,100,10,"spotted","medium","high","easy",80,40,"high","2-4 meals","high",16,"10 hours/week");;
    addAnimals(8,"Piccolo", 0, "Dog","Rottweiler",10,125,9,"green","high","low","none",60,3,"medium","3-4 meals","low",18,"3 hours/week");
    addAnimals(9,"Bulma", 1, "Bird","Swallow",1,2,3,"blue","medium","high","easy",90,45,"high","2-5 meals","medium",10,"1 hours/week");
    addAnimals(10,"Videl", 1, "Cat", "Siamese",2,5,4,"white","medium","high","easy",80,40,"high","2-3 meals","high",15,"15 hours/week");
    addAnimals(11,"ChiChi", 1, "Cat","Scottish Fold",3,4,2,"grey","high","low","none",60,3,"medium","3-5 meals","low",10,"3 hours/week");
    addAnimals(12,"Gohan", 0, "Reptile","Turtle",5,90,30,"dark green","medium","high","easy",90,45,"high","2-3 meals","medium",12,"10 hours/week");
    addAnimals(13,"Goten", 0, "Reptile","Snake",3,100,1,"grey","medium","high","easy",80,40,"high","2-3 meals","high",1,"10 hours/week");
    addAnimals(14,"Trunks", 0, "Reptile","Lizard",10,120,4,"red","high","low","none",60,3,"medium","3-4 meals","low",10,"6 hours/week");
    addAnimals(15,"Krillin", 0, "Rabbit","Mini Rex",3,30,1,"white","medium","high","easy",90,45,"high","2-3 meals","medium",15,"10 hours/week");
    addAnimals(16,"Bom", 0, "Dog","Tibetan Mastiff",1,20,1,"brown","medium","high","easy",80,40,"high","2-5 meals","high",12,"11 hours/week");
    addAnimals(17,"Ted", 1, "Dog","Chiwawa",1,15,1,"black","high","low","none",60,3,"medium","3-4 meals","low",10,"5 hours/week");
    addAnimals(18,"Mi", 1, "Cat","Sphinx",2,18,3,"black","medium","high","easy",90,45,"high","2-3 meals","medium",12,"13 hours/week");
    addAnimals(19,"Tom", 0, "Cat","Persian",5,20,1,"gery","medium","high","easy",80,40,"high","2-5 meals","high",16,"10 hours/week");
    addAnimals(20,"Mulk", 1, "Reptile","Lizard",2,6,2,"white","medium","high","easy",90,45,"high","2-4 meals","medium",1,"10 hours/week");
    addAnimals(21,"Jerry", 0, "Hamster","Chinese",5,60,1,"white","medium","high","easy",80,40,"high","2-3 meals","high",12,"10 hours/week");
    addAnimals(22,"Hulk", 1, "Hamster","Robo",2,30,1,"orange","high","low","none",60,3,"medium","3-4 meals","low",10,"3 hours/week");
    addAnimals(23,"Kid", 0, "Bird","Parrot",3,70,3,"yellow","medium","high","easy",90,45,"high","2-3 meals","medium",18,"17 hours/week");
    addAnimals(24,"Lame", 1, "Bird","Pigeon",4,30,2,"black","medium","high","easy",80,40,"high","2-6 meals","high",15,"12 hours/week");
    addAnimals(25,"Tim", 0, "Fish","Golden",2,60,1,"black","high","low","none",60,3,"medium","3-4 meals","low",10,"13 hours/week");
    addAnimals(26,"Polla", 1, "Fish","Guppy",7,55,23,"blue","medium","high","easy",90,45,"high","2-5 meals","medium",12,"15 hours/week");

    addClients(0,"Bob","Ross","bob.ross@gmail.com","1234 Some Street","(257) 323-9812");
    addClients(1,"Boon","Jacob","Bjacob.ross@hotmail.com","13 Street Street","(543) 179-8984");
    addClients(2,"Jay","Johnson","jj34234@hotmail.com","12 Somerset Street","(613) 789-3676");
    addClients(3,"John","Dave","johnD@gmail.com","4 Henderson Street","(813) 676-5463");
    addClients(4,"Ray","Richard","ray009s@gmail.com","256 Chapel Street","(647) 874-9786");
    addClients(5,"Jim","Smith","jimsmith00@hotmail.com","2655 Sweetland Street","(367) 887-8954");
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
