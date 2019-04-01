#ifndef MATCH_H
#define MATCH_H

#include "client.h"
#include "animal.h"

class Match
{

public:
    Match() {}
    Match(Client c, Animal a, QString r): client(c), animal(a), rating(r) {}
    ~Match() {}

    Client getClient() {
        return client;
    }

    Animal getAnimal() {
        return animal;
    }
    QString getRating() {
        return rating;
    }

private:
    Client client;
    Animal animal;
    QString rating;
};

#endif // MATCH_H
