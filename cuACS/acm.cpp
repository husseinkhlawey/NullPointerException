#include "acm.h"
#include <QDebug>

ACM::ACM() {  }

ACM::~ACM() {}

LinkedList<Match>& ACM::makeMatches() {

    qDebug() << "Starting ACM";

    int highScore = 0, newScore = 0 ;
    Animal* potAnml = 0;
    Match* newMatch = 0;

    //for each client
    for(int i = 0; i < clients.size(); i++) {

        //go through each animal
        for(int j = 0; j < animals.size(); j++) {

            newScore = calcScore(clients[i], animals[j]);
            if(newScore > highScore) {
                highScore = newScore;
                potAnml = animals[j];
            }
        } //compared all animals with client

        //found best one, check match quality then add
        if (highScore > 80) {
            newMatch = new Match(*clients[i], *potAnml, "Great", highScore);
            greatMatches += newMatch;
            //animals -= potAnml; //decide later
        }
        else if (highScore > 60) {
            newMatch = new Match(*clients[i], *potAnml, "Great", highScore);
            goodMatches += newMatch;
            //animals -= potAnml;
        }
        else {
            newMatch = new Match(*clients[i], *potAnml, "Great", highScore);
            greatMatches += newMatch;
            //animals -= potAnml;
        }

        //reset
        highScore = 0;
        newScore = 0;
        potAnml = 0;

    } //matched all clients

    qDebug() << "Ending ACM";
    return matches;
}

int ACM::calcScore(Client * c, Animal * a) {
    int score = 0;
    c->getPref_species();

    score += calcLMH(c->getPref_independence(), a->getIndependence());
    score += calcLMH(c->getPref_obedience(), a->getObedience());
    score += calcLMH(c->getPref_training(), a->getTraining());
    score += calcLMH(c->getPref_loyalty(), a->getLoyalty());
    score += calcLMH(c->getPref_loudness(), a->getLoudness());

    return 0;
}

int ACM::calcLMH(QString c, QString a){
    return 0;
}
