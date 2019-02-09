#include <QApplication>
#include <QLabel>
#include "mainwindow.h"
#include <QtDebug>

void viewAnimalList(){
    qDebug() << "AAAAAAHHHH";
}

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    MainWindow window;

    QLabel *label = new QLabel("Hello darkness.");
    label->setWindowTitle("My App");
    label->resize(500,300);
    //label->show();

    window.show();

    return app.exec();
}
//https://www.youtube.com/watch?v=Y1c-ieVO-UY&list=PLS1QulWo1RIZiBcTr5urECberTITj7gjA&index=4
