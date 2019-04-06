#include "animal.h"

Animal::Animal(int id, QString nam, int gend, QString spec, QString bree, int age, float weig, float heig, QString col,
                QString indep, QString obedi, QString trai, int costOM, int timeOM, QString loyal,
                QString di, QString loud, int life, QString social){

          this->id              = id;
          name                  = nam;
          gender                = gend;
          species               = spec;
          breed                 = bree;
          this->age             = age;
          weight                = weig;
          height                = heig;
          colour                = col;
          independence          = indep;
          obedience             = obedi;
          training              = train;
          costOfMaintenance     = costOM;
          timeOfMaintenance     = timeOM;
          loyalty               = loyal;
          diet                  = di;
          loudness              = loud;
          lifespan              = life;
          socialNeeds           = social;
        }

Animal::Animal(int id, QString name, int gender, QString species, QString breed, int age, float weight, float height, QString colour){
    this->id        = id;
    this->name      = name;
    this->gender    = gender;
    this->species   = species;
    this->breed     = breed;
    this->age       = age;
    this->weight    = weight;
    this->height    = height;
    this->colour    = colour;
}

Animal::Animal(){
    this->id        = 99;
    this->name      = "name";
    this->gender    = 0;
    this->species   = "species";
    this->breed     = "breed";
    this->age       = 99;
    this->weight    = 0.0;
    this->height    = 0.0;
    this->colour    = "colour";
}

Animal::~Animal() {}

int     Animal::getID()                   { return id;  }
QString Animal::getName()                 { return name;  }
int     Animal::getGender()               { return gender;  }
QString Animal::getSpecies()              { return species; }
QString Animal::getBreed()                { return breed; }
int     Animal::getAge()                  { return age; }
float   Animal::getWeight()               { return weight;  }
float   Animal::getHeight()               { return height;  }
QString Animal::getColour()               { return colour;  }
QString Animal::getIndependence()         { return independence; }
QString Animal::getObedience()            { return obedience; }
QString Animal::getTraining()             { return training; }
QString Animal::getCostOfMaintenance()    { return costOfMaintenance; }
QString Animal::getTimeOfMaintenance()    { return timeOfMaintenance; }
QString Animal::getLoyalty()              { return loyalty; }
QString Animal::getDiet()                 { return diet; }
QString Animal::getLifespan()             { return lifespan; }
QString Animal::getSocialNeeds()          { return socialNeeds; }

//=================================================
void Animal::setID(int id)                           { this->id = id; }
void Animal::setName(QString nam)                    { name = nam; }
void Animal::setGender(int gend)                     { gender = gend; }
void Animal::setSpecies(QString spec)                { species = spec; }
void Animal::setBreed(QString bree)                  { breed = bree; }
void Animal::setAge(int age)                         { this->age = age; }
void Animal::setWeight(float weig)                   { weight = weig; }
void Animal::setHeight(float heig)                   { height = heig; }
void Animal::setColour(QString col)                  { colour = col; }
void Animal::setIndependence(QString indep)          { independence = indep; }
void Animal::setObedience(QString obedi)             { obedience = obedi; }
void Animal::setTraining(QString train)              { training = train; }
void Animal::setCostOfMaintenance(QString costOM)    { costOfMaintenance = costOM; }
void Animal::setTimeOfMaintenance(QString timeOM)    { timeOfMaintenance = timeOM; }
void Animal::setLoyalty(QString loyal)               { loyalty = loyal; }
void Animal::setDiet(QString di)                     { diet = di; }
void Animal::setLoudness(QString loud)               { loudness = loud; }
void Animal::setLifespan(QString life)               { lifespan = life; }
void Animal::setSocialNeeds(QString social)          { socialNeeds = social; }
