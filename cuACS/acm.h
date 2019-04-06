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

private:
    LinkedList<Animal> animals;
    LinkedList<Client> clients;
    LinkedList<Match>  matches;
};

#endif // ACM_H
