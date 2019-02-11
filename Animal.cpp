#include "Animal.h"

Animal::Animal(QString nam, QString spec, QString bree, QString gend, QString col, QString intel, QString hum, QString obedi, QString loyal,
        QString behav, QString temper, QString comm_skl, QString cour, QString indep, int age, float heig, float weig){

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
          age                   = age;
          height                = heig;
          weight                = weig;

        }

QString Animal::getName()                 { return name;  }
QString Animal::getSpecies()              { return species; }
QString Animal::getBreed()                { return breed; }
Qstring Animal::getGender()               { return gender;  }
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

void setName(QString nam)                    { name = nam; }
void setSpecies(QString spec)                { species = spec; }
void setBreed(QString bree)                  { breed = bree; }
void setGender(QString gend)                 { gender = gend; }
void setColour(QString col)                  { colour = col; }
void setIntelligence(QString intel)          { intelligence = intel; }
void setHumor(QString hum)                   { humor = hum; }
void setObedience(QString obedi)             { obedience = obedi; }
void setLoyalty(QString loyal)               { loyalyt = loyal; }
void setBehaviour(QString behav)             { behaviour = behav; }
void setTemperment(QString temper)           { temperment = temper }
void setCommunication_skill(QString comm_skl){ communication_skill = comm_skl; }
void setCourage(QString cour)                { courage = cour; }
void setIndependent(QString indep)           { independent = indep; }
void setAge(int age)                         { age = age; }
void setHeight(float heig)                   { height = heig; }
void setWeight(float weig)                   { weight = weig; }
