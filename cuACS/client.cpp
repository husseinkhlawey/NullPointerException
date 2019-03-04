#include "client.h"

Client::Client(){

    this->id = 99;
    this->fname = "first name";
    this->lname = "last name";
    this->email = "email";
    this->address = "address";
    this->phone = "phone";

}

Client::Client(int id, QString fname, QString lname , QString email, QString address, QString phone){

    this->id = id;
    this->fname = fname;
    this->lname = lname;
    this->email = email;
    this->address = address;
    this->phone = phone;

}

int Client::getID(){
    return id;
}
QString Client::getFname(){
    return fname;
}
QString Client::getLname(){
    return lname;
}
QString Client::getEmail(){
    return email;
}
QString Client::getAddress(){
    return address;
}
QString Client::getPhone(){
    return phone;
}

void Client::setID(int id){
    this->id = id;
}
void Client::setFname(QString fname){
    this->fname = fname;
}
void Client::setLname(QString lname){
    this->lname = lname;
}
void Client::setEmail(QString email){
    this->email = email;
}
void Client::setAddress(QString address){
    this->address = address;
}
void Client::setPhone(QString phone){
    this->phone = phone;
}
