#ifndef CLIENT_H
#define CLIENT_H
#include <iomanip>
#include <sstream>
#include <QString>

using namespace std;

class Client{

    public:
        Client();
        Client(int id, QString fname, QString lname, QString email, QString address, QString phone, QString numKids, QString leisure, QString salary, QString housing, QString allergies, QString lifestyle);
        ~Client();

        bool operator < (Client&);
        bool operator > (Client&);

        int     getID();
        QString getFname();
        QString getLname();
        QString getEmail();
        QString getAddress();
        QString getPhone();
        QString getNumKids();
        QString getLeisure();
        QString getSalary();
        QString getHousing();
        QString getAllergies();
        QString getLifestyle();

        void setID(int);
        void setFname(QString fname);
        void setLname(QString lname);
        void setEmail(QString email);
        void setAddress(QString address);
        void setPhone(QString phone);
        void setNumKids(QString);
        void setLeisure(QString);
        void setSalary(QString);
        void setHousing(QString);
        void setAllergies(QString);
        void setLifestyle(QString);


    protected:
        int id;
        QString fname;
        QString lname;
        QString email;
        QString address;
        QString phone;
        QString numKids;
        QString leisure;
        QString salary;
        QString housing;
        QString allergies;
        QString lifestyle;

};

#endif // CLIENT_H
