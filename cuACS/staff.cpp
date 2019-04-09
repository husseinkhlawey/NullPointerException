#include "staff.h"
#include "QDebug"

Staff::Staff(LinkedList<Client> c, LinkedList<Animal> a) {
    acm = ACM(c, a);
}

Staff::~Staff() {}

Staff::Staff() { acm = ACM(); }

void Staff::buildDB() {
    //calls buildDatabase();
    qDebug() << "Staff building db";
}

LinkedList<Match>& Staff::launchACM() {
    return acm.makeMatches();
}
