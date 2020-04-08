#ifndef MATCH_H
#define MATCH_H

#include "client.h"
#include "animal.h"

class Match
{

public:
    Match() {}
    Match(QString c, QString a, QString r, int s): client(c), animal(a), rating(r), score(s) {}
    ~Match() {}

    QString toString()
    {
        return client + " and " + animal;
    }

    //used for storing in sorted order cause why not
    bool operator < (Match& m) {
        return score < m.score;
    }

    bool operator > (Match& m) {
        return score > m.score;
    }

    QString getClient() {
        return client;
    }

    QString getAnimal() {
        return animal;
    }

    QString getRating() {
        return rating;
    }

    int getScore() {
        return score;
    }
protected:
    QString client;
    QString animal;
    QString rating;
    int score;
};

#endif // MATCH_H
