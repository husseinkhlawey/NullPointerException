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
void addClients (int id, QString fname, QString lname, QString email, QString address, QString phone, QString numKids, QString leisure, QString salary, QString housing, QString allergies, QString lifestyle){
    QSqlQuery qry;
    qry.prepare("INSERT OR REPLACE INTO clients VALUES (?,?,?,?,?,?,?,?,?,?,?,?);");

    qry.addBindValue(id);
    qry.addBindValue(fname);
    qry.addBindValue(lname);
    qry.addBindValue(email);
    qry.addBindValue(address);
    qry.addBindValue(phone);
    qry.addBindValue(numKids);
    qry.addBindValue(leisure);
    qry.addBindValue(salary);
    qry.addBindValue(housing);
    qry.addBindValue(allergies);
    qry.addBindValue(lifestyle);

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
    currentQuery = "CREATE TABLE IF NOT EXISTS clients (id INTEGER PRIMARY KEY, firstName TEXT, lastName TEXT, email TEXT, address TEXT, phone TEXT, numKids TEXT, leisureTime TEXT, salary TEXT,"
                   "housing TEXT, allergies TEXT, lifestyle TEXT);";

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

    addClients(0,"Bob","Ross","bob.ross@gmail.com","1234 Some Street","561-437-6464","0","168","100,000","large","none","active",               "Dog", "low", "high", "high", 200, 50, "high", 4, "high", 3, 4);
    addClients(1,"Boon","Jacob","Bjacob.ross@hotmail.com","123 Street Street","407-451-2131","2","43","34,000","small","fur","sedentary",       "Cat", "low", "high", "medium", 20, 20, "high", 1, "low", 4, 4);
    addClients(2,"Jay","Johnson","jj34234@hotmail.com","12 Somerset Street","360-655-3643","4","56","346,000","large","none","lazy",            "Hamster", "low", "medium", "medium", 10, 50, "high", 1, "high", 4, 3);
    addClients(3,"John","Dave","johnD@gmail.com","4 Henderson Street","908-754-4044","9","118","200,000","large","none","active",               "Bird", "high", "low", "low", 10, 30, "high", 6, "high", 3, 1);
    addClients(4,"Ray","Richard","ray009s@gmail.com","256 Chapel Street","908-405-5950","3","78","70,000","medium","none","active",             "Horse", "high", "low", "high", 700, 70, "high", 4, "high", 9, 6);
    addClients(5,"Jim","Smith","jimsmith00@hotmail.com","2655 Sweetland Street","337-626-5802","0","10","1,000,000","large","none","active",    "Turtle", "low", "high", "medium", 150, 20, "medium,", 4, "low", 10, 2);
    addClients(6,"Alexandria","Yoder","balchen@verizon.net","8 Oak Avenue","337-965-7874","3","88","60,000","small","fur","lazy",               "Fish", "low", "low", "high", 40, 35, "high", 4, "low", 2, 1);
    addClients(7,"Izayah","Sanders","jaesenj@yahoo.com","2329 Kyle Street","702-987-6792","0","168","100","box","fur","lazy",                   "Lizard", "low", "low", "high", 100, 50, "medium", 3, "low", 4, 4);
    addClients(8,"Jarrett","Haley","dbanarse@msn.com","1190 Hardman Road","702-353-1657","0","16","50,000","small","none","sedentary",          "Dog", "low", "high", "high", 200, 10, "medium", 5, "high", 8, 6);
    addClients(9,"Samir","Estrada","harryh@yahoo.ca","3668 Sycamore Street","616-431-0311","2","49","143,000","medium","none","sedentary",      "Dog", "high", "medium", "high", 200, 50, "high", 3, "medium", 12, 4);
    addClients(10,"Dax","Lopez","cyrus@verizon.net","4958 Jerry Dove Drive","309-734-5292","0","123","567,000","large","fur","active",          "Hamster", "low", "high", "Low", 40, 40, "mdeium", 5, "high", 4, 0);
    addClients(11,"Tyshawn","Garza","keiji@verizon.net","2751 Valley Drive","254-381-3599","4","50","57,000","small","none","sedentary",        "Fish", "low", "low", "low", 25, 10, "low", 4, "low", 3, 2);
    addClients(12,"Drew","Perkins","maikelnai@sbcglobal.net","920 Southern Avenue","310-777-5101","4","111","143,000","large","fur","active",   "Turtle", "low", "high", "low", 120, 5, "low", 4, "low", 15, 0);
    addClients(13,"Xander","Hester","vsprintf@yahoo.ca","3944 Jacobs Street","828-231-9403","0","153","720,000","medium","none","active",       "Rabbit", "medium", "high", "medium", 20, 20, "low", 4, "low", 8, 7);
    addClients(14,"Giovanni","Massey","doormat@yahoo.ca","650 Rivendell Drive","917-733-5239","3","52","120,000","large","fur","sedentary",     "Lizard", "medium", "medium", "high", 400, 20, "high", 3, "low", 6, 3);
    addClients(15,"Denisse","Bass","ianbuck@optonline.net","3138 Brannon Avenue","337-591-9384","3","45","230,000","large","fur","lazy",        "Cat", "high", "low", "low", 180, 30, "low", 4, "medium", 10, 7);
    addClients(16,"Janessa","Parsons","world@icloud.com","4428 Rainy Day Drive","412-750-0612","1","16","70,000","medium","none","active",      "Rabbit", "low", "low", "low", 350, 5, "low", 5, "high", 6, 0);
    addClients(17,"Carlee","Reilly","richard@comcast.net","2051 Rocket Drive","915-621-8279","2","24","100,000","medium","none","sedentary",    "Dog", "medium", "medium", "high", 230, 50, "high", 2, "low", 13, 10);
    addClients(18,"Bailey","Patrick","sartak@yahoo.ca","2979 Hall Street","281-418-3487","3","97","50,000","small","fur","active",              "Bird", "low", "high", "low", 30, 20, "dedium", 6, "high", 6, 1);
    addClients(19,"Paul","Mosley","mahbub@optonline.net","3340 John Daniel Drive","330-358-8186","5","23","80,000","medium","none","sedentary", "Hamster", "high", "high", "low", 20, 10, "low", 4, "high", 4, 1);
    addClients(20,"Glenn","Jordan","ardagna@live.com","1788 Wyatt Street","213-639-1101","2","96","77,000","medium","none","lazy",              "Horse", "medium", "high", "high", 750, 60, "medium", 3, "high", 10, 4);
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

void editAnimals(QString id, QString name, QString gender, QString species, QString breed, QString age, QString weight, QString height, QString colour,
                QString independence, QString obedience, QString training, QString costOfMaintenance, QString timeOfMaintenance, QString loyalty,
                 QString diet, QString loudness, QString lifespan, QString socialNeeds){

    QSqlQuery qry;
    qry.prepare("UPDATE animals SET name = '" + name + "', gender = " + gender + ", species = '" + species + "', breed = '" + breed + "', age = " + age + ", weight = "
                + weight + ", height = " + height + ", colour = '" + colour + "', independence = '" + independence + "', obedience = '"
                + obedience + "', training = '" + training + "', costOfMaintenance = " + costOfMaintenance + ", timeOfMaintenance = " + timeOfMaintenance +
                ", loyalty = '" + loyalty + "', diet = '" + diet + "', loudness = '" + loudness + "', lifespan = " + lifespan + ", socialNeeds = '" + socialNeeds +
                "' WHERE id = " + id + ";");

    //qry.prepare("UPDATE animals SET name = \"" + name + "\" WHERE id = 0" + ";");



    if(!qry.exec()){
        qDebug()<<"Can't update animals";
    }
    else{
        qDebug()<<"animals updated";
    }

    qDebug() <<"UPDATE animals SET name = '" + name + "', gender = " + gender + ", species = '" + species + "', breed = '" + breed + "', age = " + age + ", weight = "
                     + weight + ", height = " + height + ", colour = '" + colour + "', independence = '" + independence + "', obedience = '"
                     + obedience + "', training = '" + training + "', costOfMaintenance = " + costOfMaintenance + ", timeOfMaintenance = " + timeOfMaintenance +
                     ", loyalty = '" + loyalty + "', diet = '" + diet + "', loudness = '" + loudness + "', lifespan = " + lifespan + ", socialNeeds = '" + socialNeeds +
                     "' WHERE id = " + id;
    //runQuery(currentQuery);
}

void editClients(QString id, QString fname, QString lname, QString email, QString address, QString phone, QString kids, QString leisure, QString salary, QString house,
                QString allergies, QString lifestyle){

    QSqlQuery qry;
    qry.prepare("UPDATE clients SET firstName = '" + fname + "', lastName = '" + lname + "', email = '" + email + "', address = '" + address + "', phone = '" + phone + "', numKids = '"
                + kids + "', leisureTime = '" + leisure + "', salary = '" + salary + "', housing = '" + house + "', allergies = '"
                + allergies + "', lifestyle = '" + lifestyle + "' WHERE id = " + id + ";");

    //qry.prepare("UPDATE animals SET name = \"" + name + "\" WHERE id = 0" + ";");

    if(!qry.exec()){
        qDebug()<<"Can't update client";
    }
    else{
        qDebug()<<"client updated";
    }

    qDebug() <<"UPDATE clients SET firstName = '" + fname + "', lastName = '" + lname + "', email = '" + email + "', address = '" + address + "', phone = '" + phone + "', numKids = '"
            + kids + "', leisureTime = '" + leisure + "', salary = '" + salary + "', housing = '" + house + "', allergies = '"
            + allergies + "', lifestyle = '" + lifestyle + "' WHERE id = " + id + ";";
}
