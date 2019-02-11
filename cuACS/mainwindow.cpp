#include "mainwindow.h"
#include "ui_mainwindow.h"
<<<<<<< HEAD
#include "storedatabase.h"
#include <QSqlQueryModel>
#include <QSqlQuery>
=======
#include "sqlfunctions.h"
>>>>>>> b348d456ac3be69c3775c03836bbc01f7766812e

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QSqlDatabase myDatabase = QSqlDatabase::addDatabase("QSQLITE");
    myDatabase.setDatabaseName("/home/student/Desktop/NullPointerException/cuACS/myDatabase");

    if(!myDatabase.open()){
            qDebug() << "Can't open database";
    }
        else{
            qDebug()<<"Opened database";
    }

    buildDatabase();
    read_query = readDatabase();
    //model = new QSqlQueryModel();
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

<<<<<<< HEAD
    storeDatabase data;
    QSqlQueryModel *M = new QSqlQueryModel();

    data.opens();

    QSqlQuery *Q = new  QSqlQuery(data.databass);

    Q->prepare("select * from animals");

    Q->exec();

    M->setQuery(*Q);

    ui->listView->setModel(M);

    data.closes();
=======
    ui->listWidget->clear();
    read_query = readDatabase();

    while (read_query.next()){
        ui->listWidget->addItem(read_query.value(1).toString() + " " + read_query.value(3).toString() + " " + read_query.value(4).toString());
    }
    qDebug() << "End of data";

    //qDebug() << "mainwindow:" << read_query.value(1).toString();

    //ui->listWidget->addItem(read_query.value(1).toString());

    /*
    QString text = "AAAAAAAAAAAAAAA";

    model->insertRows(model->rowCount(), 1);
    model->setData(index(rowCount()-1,0), text);
    */
    //QModelIndex index = model->index(model->rowCount()-1, 0);
    //model->setData(0, text);

    //insertRows(rowCount(), 1);

>>>>>>> b348d456ac3be69c3775c03836bbc01f7766812e
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
    read_query = readDatabase();

    while (read_query.next()){
        ui->listWidget->addItem(read_query.value(1).toString() + " " + read_query.value(3).toString() + " " + read_query.value(4).toString());
    }
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
    int t = getNumAnimals();
    qDebug()<<t;
    addValues(t,inpName,inpGender,inpSpecies,inpBreed,inpAge,inpWeight,inpHeight,inpColour);
}
