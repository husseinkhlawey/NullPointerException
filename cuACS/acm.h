#ifndef ACM_H
#define ACM_H

#include "linkedlist.h"
#include "animal.h"
#include "client.h"
#include "match.h"

class ACM
{

public:
    ACM();
    ~ACM();

    LinkedList<Match>& makeMatches();
    int calcScore(Client* c, Animal* a);
    int calcLMH(QString c, QString a);
    int calcTally();

private:
    LinkedList<Animal> animals;
    LinkedList<Client> clients;
    LinkedList<Match> matches;
    LinkedList<Match> badMatches;
    LinkedList<Match> goodMatches;
    LinkedList<Match> greatMatches;
};

#endif // ACM_H
