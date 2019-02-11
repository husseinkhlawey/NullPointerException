#include "storedatabase.h"

storeDatabase::storeDatabase(QWidget *parent) : QMainWindow(parent)
{

}

void storeDatabase::closes(){
    databass.close();
}

void storeDatabase::opens(){
    databass = QSqlDatabase::addDatabase("QSQLITE");

    databass.setDatabaseName("/home/student/Desktop/3004 Github/NullPointerException/cuACS/myDatabase");
}
