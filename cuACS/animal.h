#ifndef ANIMAL_H
#define ANIMAL_H

#include <iomanip>
#include <sstream>
#include <QString>

using namespace std;

class Animal{

  public:

    Animal();
    Animal(int, QString, int, QString, QString, int, float, float, QString,
                    QString, QString, QString, int, int, QString,
                    QString, QString, int, QString);
    Animal(int id, QString name, int gender, QString species, QString breed, int age, float weight, float height, QString colour);
    ~Animal();

    int     getID();
    QString getName();
    int     getGender();
    QString getSpecies();
    QString getBreed();
    int     getAge();
    float   getWeight();
    float   getHeight();
    QString getColour();
    QString getIndependence();
    QString getObedience();
    QString getTraining();
    int     getCostOfMaintenance();
    int     getTimeOfMaintenance();
    QString getLoyalty();
    QString getDiet();
    QString getLoudness();
    int getLifespan();
    QString getSocialNeeds();


    void setID(int);
    void setName(QString);
    void setGender(int);
    void setSpecies(QString);
    void setBreed(QString);
    void setAge(int);
    void setWeight(float);
    void setHeight(float);
    void setColour(QString);
    void setIndependence(QString);
    void setObedience(QString);
    void setTraining(QString);
    void setCostOfMaintenance(int);
    void setTimeOfMaintenance(int);
    void setLoyalty(QString);
    void setDiet(QString);
    void setLoudness(QString);
    void setLifespan(int);
    void setSocialNeeds(QString);





  protected:

    int     id;
    QString name;
    int     gender;
    QString species;
    QString breed;
    int     age;
    float   weight;
    float   height;
    QString colour;
    QString independence;
    QString obedience;
    QString training;
    int     costOfMaintenance;
    int     timeOfMaintenance;
    QString loyalty;
    QString diet;
    QString loudness;
    int     lifespan;
    QString socialNeeds;
};

#endif // ANIMAL_H
