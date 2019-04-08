#ifndef MATCH_H
#define MATCH_H

#include "client.h"
#include "animal.h"

class Match
{

public:
    Match() {}
    Match(Client c, Animal a, QString r, int s): client(c), animal(a), rating(r), score(s) {}
    ~Match() {}

    //used for storing in sorted order cause why not
    bool operator < (Match& m) {
        return score < m.score;
    }

    bool operator > (Match& m) {
        return score > m.score;
    }

    Client getClient() {
        return client;
    }

    Animal getAnimal() {
        return animal;
    }

    QString getRating() {
        return rating;
    }

    int getScore() {
        return score;
    }
protected:
    Client client;
    Animal animal;
    QString rating;
    int score;
};

#endif // MATCH_H
