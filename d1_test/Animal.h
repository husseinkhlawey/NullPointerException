#ifndef ANIMAL_H
#define ANIMAL_H

//#include <QString>
using namespace std;

class Animal
{
  public:
    Animal(QString, QString, QString, int, QString, QString){}
    //Animal(QString="", QString="", QString="", int=0, QString="", QString="");
    //Animal();

    QString name;
    QString species;
    QString breed;
    QString weight;
    QString height;
    QString colour;

    /*
    void printInfo(){
        qDebug()<<"printing dummyAnl";
        qDebug() << dummyAnl->name;
        qDebug() << dummyAnl->species;
        qDebug() << dummyAnl->breed;
        qDebug() << dummyAnl->weight;
        qDebug() << dummyAnl->height;
        qDebug() << dummyAnl->colour;
    }*/
};

#endif // ANIMAL_H
