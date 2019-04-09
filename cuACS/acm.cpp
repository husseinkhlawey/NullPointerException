#include "acm.h"
#include <QDebug>
#include "sqlfunctions.h"

ACM::ACM(LinkedList<Client> c, LinkedList<Animal> a) { clients = c; animals = a; }

ACM::ACM() {
}

ACM::~ACM() {}

void ACM::printClients() {
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
    qDebug() << "added clients";
    while(read_animal_query.next()) {
        animal = new Animal(read_animal_query.value(0).toInt(),read_animal_query.value(1).toString(),read_animal_query.value(2).toInt(),read_animal_query.value(3).toString(),
                            read_animal_query.value(4).toString(),read_animal_query.value(5).toInt(),read_animal_query.value(6).toFloat(),read_animal_query.value(7).toFloat(),
                            read_animal_query.value(8).toString(),read_animal_query.value(9).toString(),read_animal_query.value(10).toString(),read_animal_query.value(11).toString(),
                            read_animal_query.value(12).toInt(),read_animal_query.value(13).toInt(),read_animal_query.value(14).toString(),read_animal_query.value(15).toInt(),
                            read_animal_query.value(16).toString(),read_animal_query.value(17).toInt(),read_animal_query.value(18).toInt());
        animals += animal;
    }
    qDebug() << "added animals";
    qDebug() << "size animals: " << clients.size();


    qDebug() << "printing clients";
    qDebug() << "size clients: " << clients.size();

    for(int i = 0; i < clients.size(); i++){
        qDebug() << clients[i]->getFname();
    }
    for(int i = 0; i < animals.size(); i++){
        qDebug() << animals[i]->getName();
    }
}

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

    if (c == "Low" && a == "High") {
        points = 4;
    }
    else if ((c == "Medium" && a == "High") || (c == "Low" && a == "Medium")) {
        points = 3;
    }
    else if ((c == "Low" && a == "Low") || (c == "Medium" && a == "Medium") || (c == "High" && a == "High")) {
        points = 2;
    }
    else if ((c == "Medium" && a == "Low") || (c == "High" && a == "Medium")) {
        points = 1;
    }
    else if (c == "High" && a == "Low") {
        points = 0;
    }

    return points;
}
