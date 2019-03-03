#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sqlfunctions.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentIndex(0);

    QSqlDatabase myDatabase = QSqlDatabase::addDatabase("QSQLITE");
    myDatabase.setDatabaseName(CUACS_ROOT_DIR"_Database");

    if(!myDatabase.open()){
            qDebug() << "Can't open database";
    }
        else{
            qDebug()<<"Opened database";
    }

    buildDatabase();
    read_query = readDatabase();
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
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);

    //refresh animal list
    ui->listWidget->clear();
    read_query = readDatabase();

    while (read_query.next()){
        ui->listWidget->addItem(read_query.value(1).toString() + " " + read_query.value(3).toString() + " " + read_query.value(4).toString());
    }
    qDebug() << "End of data";
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_pushButton_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);

    //refresh animal list
    ui->listWidget->clear();
    read_query = readDatabase();

    while (read_query.next()){
        ui->listWidget->addItem(read_query.value(1).toString() + " " + read_query.value(3).toString() + " " + read_query.value(4).toString());
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
    addValues(t,inpName,inpGender,inpSpecies,inpBreed,inpAge,inpWeight,inpHeight,inpColour);

}

void MainWindow::on_pushButton_3_clicked()
{

    //refresh animal list
    ui->listWidget_2->clear();
    read_query = readDatabase();

    while (read_query.next()){
        ui->listWidget_2->addItem(read_query.value(1).toString() + " " + read_query.value(3).toString() + " " + read_query.value(4).toString());
    }
    qDebug() << "End of data";

    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_13_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_pushButton_14_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}

void MainWindow::on_pushButton_15_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}

void MainWindow::on_pushButton_17_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}

void MainWindow::on_pushButton_16_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_19_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}

void MainWindow::on_pushButton_20_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}
