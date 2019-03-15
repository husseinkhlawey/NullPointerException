#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sqlfunctions.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Start at Main Page
    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}


//Main Page=====================================================
//Client Button
void MainWindow::on_client_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

//Staff Button
void MainWindow::on_staff_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

//Client Page==================================================
//View Animals Button
void MainWindow::on_viewAnimal_Client_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

//Back Button
void MainWindow::on_back_Client_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

//Animal List (Client) Page====================================
//Back Button
void MainWindow::on_back_animalList_Client_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

//Animal Profile (Client) Page=================================
//Back Button
void MainWindow::on_back_animalProfile_Client_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

//Staff Page===================================================
//View Animals Button
void MainWindow::on_viewAnimal_Staff_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

//Add Animal Button
void MainWindow::on_addAnimal_Staff_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

//View Clients Button
void MainWindow::on_viewClient_Staff_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}

//Add Client Button
void MainWindow::on_addClient_Staff_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}

//Back Button
void MainWindow::on_Back_Staff_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

//Animal List (Staff) Page=======================================
//Add Animal Button
void MainWindow::on_addAnimal_animalList_Staff_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

//Back Button
void MainWindow::on_Back_animalList_Staff_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

//Animal Profile (Staff) Page====================================
//Edit Profile Button
void MainWindow::on_editAnimal_animalProfile_Staff_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

//Back Button
void MainWindow::on_Back_animalProfile_Staff_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

//Add Animal Page=================================================
//Back Button
void MainWindow::on_back_addAnimal_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

//Client List (Staff) Page========================================
//Add Client Button
void MainWindow::on_addClient_clientList_Staff_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}

//Back Button
void MainWindow::on_Back_clientList_Staff_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

//Client Profile (Staff) Page======================================
//Edit Profile Button
void MainWindow::on_editClient_clientProfile_Staff_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}

//Back Button
void MainWindow::on_Back_clientProfile_Staff_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}

//Add Client Page===================================================
//Back Button
void MainWindow::on_back_addClient_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}
