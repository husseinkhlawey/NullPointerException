#ifndef STAFF_H
#define STAFF_H

#include "acm.h"
#include "linkedlist.h"
#include "match.h"

class Staff {

public:
    Staff();
    Staff(LinkedList<Client> c, LinkedList<Animal> a);
    ~Staff();

    //need to implement all staff features
    void buildDB();
    LinkedList<Match>& launchACM();

protected:
    ACM acm;
};

#endif // STAFF_H
