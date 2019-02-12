#include "mainwindow.h"
#include <QApplication>
#include <QtDebug>
#include <QtSql>
#include "sqlfunctions.h"
#include "animal.h"
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    qDebug() << "Starting";

    w.show();
    return a.exec();
}
