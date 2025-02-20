#include "client.h"

Client::Client(){

    this->id = 99;
    this->fname = "first name";
    this->lname = "last name";
    this->email = "email";
    this->address = "address";
    this->phone = "phone";

}

Client::Client(int id, QString fname, QString lname, QString email, QString address, QString phone, QString numKids, QString leisure, QString salary,
               QString housing, QString allergies, QString lifestyle, QString species, QString indep, QString obedi, QString train, int costOM,
               int timeOM, QString loyal, int di, QString loud, int life, int social){

    this->id = id;
    this->fname = fname;
    this->lname = lname;
    this->email = email;
    this->address = address;
    this->phone = phone;
    this->numKids = numKids;
    this->leisure = leisure;
    this->salary = salary;
    this->housing = housing;
    this->allergies = allergies;
    this->lifestyle = lifestyle;
    pref_species = species;
    pref_independence = indep;
    pref_obedience = obedi;
    pref_training = train;
    pref_costOfMaintenance = costOM;
    pref_timeOfMaintenance = timeOM;
    pref_loyalty = loyal;
    pref_diet = di;
    pref_loudness = loud;
    pref_lifespan = life;
    pref_socialNeeds = social;
}

Client::~Client() {}

bool Client::operator < (Client& c) {
    return id < c.id;
}

bool Client::operator > (Client& c) {
    return id > c.id;
}

int     Client::getID()         {return id;}
QString Client::getFname()      {return fname;}
QString Client::getLname()      {return lname;}
QString Client::getEmail()      {return email;}
QString Client::getAddress()    {return address;}
QString Client::getPhone()      {return phone;}
QString Client::getNumKids()    {return numKids;}
QString Client::getLeisure()    {return leisure;}
QString Client::getSalary()     {return salary;}
QString Client::getHousing()    {return housing;}
QString Client::getAllergies()  {return allergies;}
QString Client::getLifestyle()  {return lifestyle;}

//===============================================================
void Client::setID(int id)                         {this->id = id;}
void Client::setFname(QString fname)               {this->fname = fname;}
void Client::setLname(QString lname)               {this->lname = lname;}
void Client::setEmail(QString email)               {this->email = email;}
void Client::setAddress(QString address)           {this->address = address;}
void Client::setPhone(QString phone)               {this->phone = phone;}
void Client::setNumKids(QString numKids)           {this->numKids = numKids;}
void Client::setLeisure(QString leisure)           {this->leisure = leisure;}
void Client::setSalary(QString salary)             {this->salary = salary;}
void Client::setHousing(QString housing)           {this->housing = housing;}
void Client::setAllergies(QString allergies)       {this->allergies = allergies;}
void Client::setLifestyle(QString lifestyle)       {this->lifestyle = lifestyle;}

QString Client::getPref_species() const
{
    return pref_species;
}

void Client::setPref_species(const QString &value)
{
    pref_species = value;
}

QString Client::getPref_breed() const
{
    return pref_breed;
}

void Client::setPref_breed(const QString &value)
{
    pref_breed = value;
}

QString Client::getPref_independence() const
{
    return pref_independence;
}

void Client::setPref_independence(const QString &value)
{
    pref_independence = value;
}

QString Client::getPref_obedience() const
{
    return pref_obedience;
}

void Client::setPref_obedience(const QString &value)
{
    pref_obedience = value;
}

QString Client::getPref_training() const
{
    return pref_training;
}

void Client::setPref_training(const QString &value)
{
    pref_training = value;
}

int Client::getPref_costOfMaintenance() const
{
    return pref_costOfMaintenance;
}

void Client::setPref_costOfMaintenance(int value)
{
    pref_costOfMaintenance = value;
}

int Client::getPref_timeOfMaintenance() const
{
    return pref_timeOfMaintenance;
}

void Client::setPref_timeOfMaintenance(int value)
{
    pref_timeOfMaintenance = value;
}

QString Client::getPref_loyalty() const
{
    return pref_loyalty;
}

void Client::setPref_loyalty(const QString &value)
{
    pref_loyalty = value;
}

int Client::getPref_diet() const
{
    return pref_diet;
}

void Client::setPref_diet(const int &value)
{
    pref_diet = value;
}

QString Client::getPref_loudness() const
{
    return pref_loudness;
}

void Client::setPref_loudness(const QString &value)
{
    pref_loudness = value;
}

int Client::getPref_lifespan() const
{
    return pref_lifespan;
}

void Client::setPref_lifespan(int value)
{
    pref_lifespan = value;
}

int Client::getPref_socialNeeds() const
{
    return pref_socialNeeds;
}

void Client::setPref_socialNeeds(const int &value)
{
    pref_socialNeeds = value;
}
