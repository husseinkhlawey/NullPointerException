#ifndef ANIMAL_H
#define ANIMAL_H

#include <instream>
#include <iomanip>
#include <sstream>
#include <QString>

using namespace std;

class Animal{

  public:

    Animal(QString, QString, QString, QString, QString, QString, QString, QString, QString, QString,
            QString, QString, QString, int, float, float);

    QString getName();
    QString getSpecies();
    QString getBreed();
    QString getColour();
    QString getIntelligence();
    QString getHumor();
    QString getObedience();
    QString getLoyalty();
    QString getBehaviour();
    QString getTemperment();
    QString getCommunication_skill();
    QString getCourage();
    QString getIndependent();
    int getAage();
    float getHeight();
    float getWeight();

  protected:
    QString name;
    QString species;
    QString breed;
    QString colour;
    QString intelligence;
    QString humor;
    QString obedience;
    QString loyalty;
    QString behaviour;
    QString temperment;
    QString communication_skill
    QString courage
    QString independent
    int age;
    float height;
    float weight;


};

#endif
