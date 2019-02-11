#ifndef ANIMAL_H
#define ANIMAL_H

#include <instream>
#include <iomanip>
#include <sstream>
#include <QString>

using namespace std;

class Animal{

  public:

    Animal(QString, QString, QString, QString, QString, QString, QString, QString, QString, QString, QString, QString, QString, QString, int, float, float);

    QString getName();
    QString getSpecies();
    QString getBreed();
    Qstring getGender();
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
    int getAge();
    float getHeight();
    float getWeight();

    void setName(QString);
    void setSpecies(QString);
    void setBreed(QString);
    void setGender(QString);
    void setColour(QString);
    void setIntelligence(QString);
    void setHumor(QString);
    void setObedience(QString);
    void setLoyalty(QString);
    void setBehaviour(QString);
    void setTemperment(QString);
    void setCommunication_skill(QString);
    void setCourage(QString);
    void setIndependent(QString);
    void setAge(int);
    void setHeight(float);
    void setWeight(float);

  protected:

    QString name;
    QString species;
    QString breed;
    QString gender;
    QString colour;
    QString intelligence;
    QString humor;
    QString obedience;
    QString loyalty;
    QString behaviour;
    QString temperment;
    QString communication_skill;
    QString courage;
    QString independent;
    int age;
    float height;
    float weight;

};

#endif
