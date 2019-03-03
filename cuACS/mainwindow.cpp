#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sqlfunctions.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QSqlDatabase myDatabase = QSqlDatabase::addDatabase("QSQLITE");
    myDatabase.setDatabaseName(CUACS_ROOT_DIR"/cuACS_Database.sqlite");

    if(!myDatabase.open()){
            qDebug() << "Can't open database";
    }
        else{
            qDebug()<<"Opened database";
    }

    buildDatabase();
    read_animal_query = readAnimalTable();
    read_client_query = readAnimalTable();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Client_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_Staff_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);

    //refresh animal list
    ui->listWidget->clear();
    read_animal_query = readAnimalTable();

    while (read_animal_query.next()){
        ui->listWidget->addItem(read_animal_query.value(1).toString() + " " + read_animal_query.value(3).toString() + " " + read_animal_query.value(4).toString());
    }
    qDebug() << "End of data";
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_pushButton_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);

    //refresh animal list
    ui->listWidget->clear();
    read_animal_query = readAnimalTable();

    while (read_animal_query.next()){
        ui->listWidget->addItem(read_animal_query.value(1).toString() + " " + read_animal_query.value(3).toString() + " " + read_animal_query.value(4).toString());
    }
    qDebug() << "End of data";
}

void MainWindow::on_pushButton_11_clicked()
{
    //refresh animal list
    inpName = ui->lineEdit->text();
    inpGender = ui->lineEdit_2->text().toInt();
    inpSpecies = ui->lineEdit_3->text();
    inpBreed = ui->lineEdit_4->text();
    inpAge = ui->lineEdit_5->text().toInt();
    inpWeight = ui->lineEdit_6->text().toFloat();
    inpHeight = ui->lineEdit_7->text().toFloat();
    inpColour = ui->lineEdit_8->text();

    //generate animal id
    int t = getNumAnimals();
    qDebug()<<t;
    addAnimals(t,inpName,inpGender,inpSpecies,inpBreed,inpAge,inpWeight,inpHeight,inpColour);
}
