#include "client.h"

Client::Client(){

    this->id = 99;
    this->fname = "first name";
    this->lname = "last name";
    this->email = "email";
    this->address = "address";
    this->phone = "phone";

}

Client::Client(int id, QString fname, QString lname, QString email, QString address, QString phone, QString numKids, QString leisure, QString salary, QString housing, QString allergies, QString lifestyle){

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
