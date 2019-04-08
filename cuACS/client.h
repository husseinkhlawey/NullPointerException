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


        QString getPref_species() const;
        void setPref_species(const QString &value);

        QString getPref_breed() const;
        void setPref_breed(const QString &value);

        QString getPref_independence() const;
        void setPref_independence(const QString &value);

        QString getPref_obedience() const;
        void setPref_obedience(const QString &value);

        QString getPref_training() const;
        void setPref_training(const QString &value);

        int getPref_costOfMaintenance() const;
        void setPref_costOfMaintenance(int value);

        int getPref_timeOfMaintenance() const;
        void setPref_timeOfMaintenance(int value);

        QString getPref_loyalty() const;
        void setPref_loyalty(const QString &value);

        QString getPref_diet() const;
        void setPref_diet(const QString &value);

        QString getPref_loudness() const;
        void setPref_loudness(const QString &value);

        int getPref_lifespan() const;
        void setPref_lifespan(int value);

        QString getPref_socialNeeds() const;
        void setPref_socialNeeds(const QString &value);

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

        QString pref_species;
        QString pref_breed;
        QString pref_independence;
        QString pref_obedience;
        QString pref_training;
        int     pref_costOfMaintenance;
        int     pref_timeOfMaintenance;
        QString pref_loyalty;
        QString pref_diet;
        QString pref_loudness;
        int     pref_lifespan;
        QString pref_socialNeeds;

};

#endif // CLIENT_H
