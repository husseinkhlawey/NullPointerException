#include "acm.h"

ACM::ACM() {  }

ACM::~ACM() {}

LinkedList<Match>& ACM::makeMatches() {

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

    return matches;
}

int ACM::calcScore(Client * c, Animal * a) {
    return 0;
}
