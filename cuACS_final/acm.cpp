/*
	Animal - Client Matching Algorithm
*/

#include "acm.h"
#include <QDebug>
#include "sqlfunctions.h"

ACM::ACM(LinkedList<Client> c, LinkedList<Animal> a) { clients = c; animals = a; }

ACM::ACM() {}

ACM::~ACM() {}

void ACM::printLists() {
    read_animal_query = readAnimalTable();
    read_client_query = readClientTable();

    Client* client;
    Animal* animal;

    while(read_client_query.next()){
            client = new Client(read_client_query.value(0).toInt(),read_client_query.value(1).toString(),read_client_query.value(2).toString(),read_client_query.value(3).toString(),read_client_query.value(4).toString(),
                            read_client_query.value(5).toString(),read_client_query.value(6).toString(),read_client_query.value(7).toString(),read_client_query.value(8).toString(),
                            read_client_query.value(9).toString(),read_client_query.value(10).toString(),read_client_query.value(11).toString(),read_client_query.value(12).toString(),
                            read_client_query.value(13).toString(),read_client_query.value(14).toString(),read_client_query.value(15).toString(),read_client_query.value(16).toInt(),
                            read_client_query.value(17).toInt(),read_client_query.value(18).toString(),read_client_query.value(19).toInt(),read_client_query.value(20).toString(),
                            read_client_query.value(21).toInt(),read_client_query.value(22).toInt());
            clients += client;
    }
    qDebug() << "added clients ACM";

    while(read_animal_query.next()) {
        animal = new Animal(read_animal_query.value(0).toInt(),read_animal_query.value(1).toString(),read_animal_query.value(2).toInt(),read_animal_query.value(3).toString(),
                            read_animal_query.value(4).toString(),read_animal_query.value(5).toInt(),read_animal_query.value(6).toFloat(),read_animal_query.value(7).toFloat(),
                            read_animal_query.value(8).toString(),read_animal_query.value(9).toString(),read_animal_query.value(10).toString(),read_animal_query.value(11).toString(),
                            read_animal_query.value(12).toInt(),read_animal_query.value(13).toInt(),read_animal_query.value(14).toString(),read_animal_query.value(15).toInt(),
                            read_animal_query.value(16).toString(),read_animal_query.value(17).toInt(),read_animal_query.value(18).toInt());
        animals += animal;
    }
    qDebug() << "added animals ACM";

    qDebug() << "size clients: " << clients.size();
    qDebug() << "size animals: " << animals.size();
    qDebug() << "printing clients";
    for(int i = 0; i < clients.size(); i++){
        qDebug() << clients[i]->getFname();
    }
    qDebug() << "printing animals";
    for(int i = 0; i < animals.size(); i++){
        qDebug() << animals[i]->getName();
    }
}

void ACM::printMatches()
{
    qDebug() << "size great: " << greatMatches.size();
    for(int i = 0; i < greatMatches.size(); i++){
        qDebug() << greatMatches[i]->getClient() << " " << greatMatches[i]->getAnimal() << " " << greatMatches[i]->getScore();
    }
    qDebug() << "size good: " << goodMatches.size();
    for(int i = 0; i < goodMatches.size(); i++){
        qDebug() << goodMatches[i]->getClient() << " " << goodMatches[i]->getAnimal() << " " << goodMatches[i]->getScore();
    }
    qDebug() << "size bad: " << badMatches.size();
    for(int i = 0; i < badMatches.size(); i++){
        qDebug() << badMatches[i]->getClient() << " " << badMatches[i]->getAnimal() << " " << badMatches[i]->getScore();
    }
}

void ACM::clearLists()
{
    Match* match = 0;
    Animal* animal = 0;
    Client* client = 0;

    while(greatMatches.size() > 0) {
        match = greatMatches[0];
        greatMatches -= match;
    }
    while(goodMatches.size() > 0) {
        match = goodMatches[0];
        goodMatches -= match;
    }
    while(badMatches.size() > 0) {
        match = badMatches[0];
        badMatches -= match;
    }

    while(animals.size() > 0) {
        animal = animals[0];
        animals -= animal;
    }
    while(clients.size() > 0) {
        client = clients[0];
        clients -= client;
    }

    qDebug() << "########################";
    qDebug() << "size great: " << greatMatches.size();
    for(int i = 0; i < greatMatches.size(); i++){
        qDebug() << greatMatches[i]->getClient() << " " << greatMatches[i]->getAnimal() << " " << greatMatches[i]->getScore();
    }
    qDebug() << "size good: " << goodMatches.size();
    for(int i = 0; i < goodMatches.size(); i++){
        qDebug() << goodMatches[i]->getClient() << " " << goodMatches[i]->getAnimal() << " " << goodMatches[i]->getScore();
    }
    qDebug() << "size bad: " << badMatches.size();
    for(int i = 0; i < badMatches.size(); i++){
        qDebug() << badMatches[i]->getClient() << " " << badMatches[i]->getAnimal() << " " << badMatches[i]->getScore();
    }
}

LinkedList<Match>& ACM::makeMatches() {

    qDebug() << "Starting ACM";

    int highScore = 0, newScore = 0 ;
    Client* potClient = 0;
    Match* newMatch;

    //for each animal
    for(int i = 0; i < animals.size(); i++) {

        //go through each client
        for(int j = 0; j < clients.size(); j++) {

            newScore = calcScore(clients[j], animals[i]);
            if(newScore > highScore) {
                highScore = newScore;
                potClient = clients[j];
                qDebug() << "found better animal";

            }

        } //compared all clients with animal

        //found best one, check match quality then add

        if (highScore != 0) {

            if (highScore > 29) {
                qDebug() << "adding to great";
                newMatch = new Match(potClient->getFname(), animals[i]->getName(), "Great", highScore);
                greatMatches += newMatch;
                clients -= potClient;
            }
            else if (highScore > 15) {
                qDebug() << "adding to good";
                newMatch = new Match(potClient->getFname(), animals[i]->getName(), "Good", highScore);
                goodMatches += newMatch;
                clients -= potClient;
            }
            else {
                qDebug() << "adding to bad";
                newMatch = new Match(potClient->getFname(), animals[i]->getName(), "Bad", highScore);
                badMatches += newMatch;
                clients -= potClient;
            }
        }

        //reset
        highScore = 0;
        newScore = 0;

    } //matched all animals

    qDebug() << "Ending ACM";
    return matches;
}

int ACM::calcScore(Client * c, Animal * a) {
    qDebug() << "calcing score";

    int score = 0;

    //elimination
    if (c->getPref_species() != a->getSpecies()){
        return 0;
    }
    else if (c->getAllergies() == "fur") {
        if (a->getSpecies() == "Dog" || a->getSpecies() == "Cat" || a->getSpecies() == "Hamster" || a->getSpecies() == "Rabbit") {
            return 0;
        }
    }
    score += calcLMH(c->getPref_independence(), a->getIndependence());
    score += calcLMH(c->getPref_obedience(), a->getObedience());
    score += calcLMH(c->getPref_training(), a->getTraining());
    score += calcLMH(c->getPref_loyalty(), a->getLoyalty());
    score += calcLMH(c->getPref_loudness(), a->getLoudness());

    //cost of maintenance
    if (c->getPref_costOfMaintenance() > a->getCostOfMaintenance() - 25 && c->getPref_costOfMaintenance() < a->getCostOfMaintenance() + 25){
        score += 3;
    }
    else if (c->getPref_costOfMaintenance() > a->getCostOfMaintenance() + 25) {
        score += 5;
    }
    //(c->getPref_costOfMaintenance() < a->getCostOfMaintenance() - 25)
    else {
        score += 1;
    }

    //time of maintenance
    if (c->getPref_timeOfMaintenance() > a->getTimeOfMaintenance() - 6 && c->getPref_timeOfMaintenance() < a->getTimeOfMaintenance() + 6){
        score += 3;
    }
    else if (c->getPref_timeOfMaintenance() > a->getTimeOfMaintenance() + 6) {
        score += 5;
    }
    else {
        score += 1;
    }

    //diet
    if (c->getPref_diet() > a->getDiet() - 1 && c->getPref_diet() < a->getDiet() + 1){
        score += 3;
    }
    else if (c->getPref_diet() > a->getDiet() + 1) {
        score += 5;
    }
    else {
        score += 1;
    }

    //lifespan
    if (c->getPref_lifespan() > a->getLifespan() - 2 && c->getPref_lifespan() < a->getLifespan() + 2){
        score += 3;
    }
    else if (c->getPref_lifespan() > a->getLifespan() + 2) {
        score += 5;
    }
    else {
        score += 1;
    }

    //social needs
    if (c->getPref_socialNeeds() > a->getSocialNeeds() - 3 && c->getPref_socialNeeds() < a->getSocialNeeds() + 3){
        score += 3;
    }
    else if (c->getPref_socialNeeds() > a->getSocialNeeds() + 3) {
        score += 5;
    }
    else {
        score += 1;
    }
    return score;
}

int ACM::calcLMH(QString c, QString a){
    int points = 0;

    if (c == "low" && a == "high") {
        points = 4;
        qDebug() << "gave points";
    }
    else if ((c == "medium" && a == "high") || (c == "low" && a == "medium")) {
        points = 3;
        qDebug() << "gave points";
    }
    else if ((c == "low" && a == "low") || (c == "medium" && a == "medium") || (c == "high" && a == "high")) {
        points = 2;
        qDebug() << "gave points";
    }
    else if ((c == "medium" && a == "low") || (c == "high" && a == "medium")) {
        points = 1;
        qDebug() << "gave points";
    }
    else if (c == "high" && a == "low") {
        points = 0;
        qDebug() << "gave points";
    }

    return points;
}
