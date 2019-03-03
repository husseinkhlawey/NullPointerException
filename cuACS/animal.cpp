#include "animal.h"

Animal::Animal(int id, QString nam, QString spec, QString bree, int gend, QString col, QString intel, QString hum, QString obedi, QString loyal,
        QString behav, QString temper, QString comm_skl, QString cour, QString indep, int age, float heig, float weig){

          this->id              = id;
          name                  = nam;
          species               = spec;
          breed                 = bree;
          gender                = gend;
          colour                = col;
          intelligence          = intel;
          humor                 = hum;
          obedience             = obedi;
          loyalty               = loyal;
          behaviour             = behav;
          temperment            = temper;
          communication_skill   = comm_skl;
          courage               = cour;
          independent           = indep;
          this->age                   = age;
          height                = heig;
          weight                = weig;

        }

Animal::Animal(int id, QString name, int gender, QString species, QString breed, int age, float weight, float height, QString colour){
    this->id = id;
    this->name = name;
    this->gender = gender;
    this->species = species;
    this-> breed = breed;
    this->age = age;
    this->weight = weight;
    this->height = height;
    this->colour = colour;
}

Animal::Animal(){
    this->id = 99;
    this->name = "name";
    this->gender = 0;
    this->species = "species";
    this-> breed = "breed";
    this->age = 99;
    this->weight = 0.0;
    this->height = 0.0;
    this->colour = "colour";
}

<<<<<<< HEAD
//Animal::~Animal(){}

=======
>>>>>>> ca38f583b8a57816c80298cadfecfda00eb74cfa
int     Animal::getID()                   { return id;  }
QString Animal::getName()                 { return name;  }
QString Animal::getSpecies()              { return species; }
QString Animal::getBreed()                { return breed; }
int Animal::getGender()                   { return gender;  }
QString Animal::getColour()               { return colour;  }
QString Animal::getIntelligence()         { return intelligence;  }
QString Animal::getHumor()                { return humor; }
QString Animal::getObedience()            { return obedience; }
QString Animal::getLoyalty()              { return loyalty; }
QString Animal::getBehaviour()            { return behaviour; }
QString Animal::getTemperment()           { return temperment;  }
QString Animal::getCommunication_skill()  { return communication_skill; }
QString Animal::getCourage()              { return courage; }
QString Animal::getIndependent()          { return independent; }
int     Animal::getAge()                  { return age; }
float   Animal::getHeight()               { return height;  }
float   Animal::getWeight()               { return weight;  }

void Animal::setID(int id)                           { this->id = id; }
void Animal::setName(QString nam)                    { name = nam; }
void Animal::setSpecies(QString spec)                { species = spec; }
void Animal::setBreed(QString bree)                  { breed = bree; }
void Animal::setGender(int gend)                     { gender = gend; }
void Animal::setColour(QString col)                  { colour = col; }
void Animal::setIntelligence(QString intel)          { intelligence = intel; }
void Animal::setHumor(QString hum)                   { humor = hum; }
void Animal::setObedience(QString obedi)             { obedience = obedi; }
void Animal::setLoyalty(QString loyal)               { loyalty = loyal; }
void Animal::setBehaviour(QString behav)             { behaviour = behav; }
void Animal::setTemperment(QString temper)           { temperment = temper; }
void Animal::setCommunication_skill(QString comm_skl){ communication_skill = comm_skl; }
void Animal::setCourage(QString cour)                { courage = cour; }
void Animal::setIndependent(QString indep)           { independent = indep; }
void Animal::setAge(int age)                         { this->age = age; }
void Animal::setHeight(float heig)                   { height = heig; }
void Animal::setWeight(float weig)                   { weight = weig; }
