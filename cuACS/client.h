#ifndef CLIENT_H
#define CLIENT_H
#include <iomanip>
#include <sstream>
#include <QString>

using namespace std;

class Client{

    public:
        Client();
        Client(int id, QString fname, QString lname, QString email, QString address, QString phone);
        ~Client();

        int getID();
        QString getFname();
        QString getLname();
        QString getEmail();
        QString getAddress();
        QString getPhone();

        void setID(int);
        void setFname(QString fname);
        void setLname(QString lname);
        void setEmail(QString email);
        void setAddress(QString address);
        void setPhone(QString phone);

    protected:
        int id;
        QString fname;
        QString lname;
        QString email;
        QString address;
        QString phone;

};

#endif // CLIENT_H
