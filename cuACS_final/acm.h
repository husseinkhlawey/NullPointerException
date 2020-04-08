/*
	Animal - Client Matching Algorithm
*/

#ifndef ACM_H
#define ACM_H

#include "linkedlist.h"
#include "animal.h"
#include "client.h"
#include "match.h"
#include <QtSql>

class ACM
{

public:
    ACM(LinkedList<Client>, LinkedList<Animal>);
    ACM();
    ~ACM();

    LinkedList<Match>& makeMatches();
    int calcScore(Client* c, Animal* a);
    int calcLMH(QString c, QString a);
    int calcCompare();
    int eliminate();
    int calcTally();
    void printLists();
    void printMatches();
    void clearLists();

    LinkedList<Animal> animals;
    LinkedList<Client> clients;
    LinkedList<Match> matches;
    LinkedList<Match> badMatches;
    LinkedList<Match> goodMatches;
    LinkedList<Match> greatMatches;

    QSqlQuery read_animal_query;
    QSqlQuery read_client_query;
};

#endif // ACM_H
