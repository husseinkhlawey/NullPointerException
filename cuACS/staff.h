#ifndef STAFF_H
#define STAFF_H

#include "acm.h"
#include "linkedlist.h"
#include "match.h"

class Staff {

public:
    Staff();
    ~Staff();

    //need to implement all staff features
    void buildDB();
    LinkedList<Match>& launchACM();

protected:
    ACM acm;
};

#endif // STAFF_H
