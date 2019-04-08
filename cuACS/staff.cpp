#include "staff.h"
#include "QDebug"

Staff::Staff() {}

Staff::~Staff() {}

void Staff::buildDB() {
    //calls buildDatabase();
    qDebug() << "Staff building db";
}

LinkedList<Match>& Staff::launchACM() {
    return acm.makeMatches();
}
