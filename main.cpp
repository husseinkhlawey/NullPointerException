#include "mainwindow.h"
#include <QApplication>
#include <QtDebug>
#include <QtSql>
#include "sqlfunctions.cpp"
#include "animal.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    qDebug() << "Starting";

    QSqlDatabase myDatabase = QSqlDatabase::addDatabase("QSQLITE");
    myDatabase.setDatabaseName("/home/student/Desktop/NullPointerException/cuACS/myDatabase");

    if(!myDatabase.open()){
            qDebug() << "Can't open database";
    }
        else{
            qDebug()<<"Opened database";
    }

    buildDatabase();

    qDebug() << "Ending";
    myDatabase.close();
    w.show();
    return a.exec();
}
