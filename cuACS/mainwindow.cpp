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
    myDatabase.setDatabaseName(CUACS_ROOT_DIR"/cuACS_Database.sqlite");

    if(!myDatabase.open()){
            qDebug() << "Can't open database";
    }
        else{
            qDebug()<<"Opened database";
    }

    buildDatabase();
    read_animal_query = readAnimalTable();
    read_client_query = readClientTable();
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

void MainWindow::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);

    //refresh animal list
    ui->ALS_listWidget->clear();
    read_animal_query = readAnimalTable();

    while (read_animal_query.next()){
        ui->ALS_listWidget->addItem(read_animal_query.value(1).toString() + " " + read_animal_query.value(3).toString() + " " + read_animal_query.value(4).toString());
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
    ui->ALS_listWidget->clear();
    read_animal_query = readAnimalTable();

    while (read_animal_query.next()){
        ui->ALS_listWidget->addItem(read_animal_query.value(1).toString() + " " + read_animal_query.value(3).toString() + " " + read_animal_query.value(4).toString());
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
    inpindependence = ui->lineEdit_14->text();
    inpobedience = ui->lineEdit_15->text();
    inptraining = ui->lineEdit_16->text();
    inpcostOfMaintenance = ui->lineEdit_17->text().toInt();
    inptimeOfMaintenance = ui->lineEdit_18->text().toInt();
    inployalty = ui->lineEdit_19->text();
    inpdiet = ui->lineEdit_20->text();
    inpLoudness = ui->lineEdit_22->text();
    inplifespan = ui->lineEdit_23->text().toInt();
    inpsocialNeeds = ui->lineEdit_21->text();

    //generate animal id
    int t = getNumAnimals();
    qDebug()<<t;
    addAnimals(t,inpName,inpGender,inpSpecies,inpBreed,inpAge,inpWeight,inpHeight,inpColour,inpindependence,inpobedience,inptraining,
               inpcostOfMaintenance,inptimeOfMaintenance,inployalty,inpdiet,inpLoudness,inplifespan,inpsocialNeeds);

    ui->stackedWidget->setCurrentIndex(5);

    //refresh animal list
    ui->ALS_listWidget->clear();
    read_animal_query = readAnimalTable();

    while (read_animal_query.next()){
        ui->ALS_listWidget->addItem(read_animal_query.value(1).toString() + " " + read_animal_query.value(3).toString() + " " + read_animal_query.value(4).toString());
    }
    qDebug() << "End of data";

}

void MainWindow::on_pushButton_3_clicked()
{

    //refresh animal list
    ui->listWidget_2->clear();
    read_animal_query = readAnimalTable();

    while (read_animal_query.next()){
        ui->listWidget_2->addItem(read_animal_query.value(1).toString() + " " + read_animal_query.value(3).toString() + " " + read_animal_query.value(4).toString());
    }
    qDebug() << "End of data";

    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_13_clicked()//back
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_14_clicked()//view client (staff side) listwidget_4
{
    ui->stackedWidget->setCurrentIndex(8);

    //refresh animal list
    ui->listWidget_4->clear();
    read_client_query = readClientTable();

    while (read_client_query.next()){
        ui->listWidget_4->addItem(read_client_query.value(1).toString() + " " + read_client_query.value(2).toString() + " " + read_client_query.value(5).toString());
    }
    qDebug() << "End of data";
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

    //refresh animal list
    ui->listWidget_4->clear();
    read_client_query = readClientTable();

    while (read_client_query.next()){
        ui->listWidget_4->addItem(read_client_query.value(1).toString() + " " + read_client_query.value(2).toString() + " " + read_client_query.value(5).toString());
    }
    qDebug() << "End of data";
}

void MainWindow::on_pushButton_21_clicked()
{
    //refresh animal list
    inpFname = ui->lineEdit_9->text();
    inpLname = ui->lineEdit_10->text();
    inpEmail = ui->lineEdit_11->text();
    inpAddress = ui->lineEdit_12->text();
    inpPhone = ui->lineEdit_13->text();

    //generate animal id
    int t = getNumClients();
    qDebug()<<t;
    addClients(t,inpFname,inpLname,inpEmail,inpAddress,inpPhone);

    ui->stackedWidget->setCurrentIndex(8);

    //refresh animal list
    ui->listWidget_4->clear();
    read_client_query = readClientTable();

    while (read_client_query.next()){
        ui->listWidget_4->addItem(read_client_query.value(1).toString() + " " + read_client_query.value(2).toString() + " " + read_client_query.value(5).toString());
    }
    qDebug() << "End of data";
}

//for future use.
void MainWindow::on_listWidget_activated(const QModelIndex &index){}

void MainWindow::on_listWidget_4_itemClicked(QListWidgetItem *item)
{
    read_client_query = readClientTable();
    QSqlRecord clientRecord = read_client_query.record();
    qDebug() << item->text();

    //check if what user clicked matches current value of read_client_query
    while(read_client_query.next()){
        if(item->text() == read_client_query.value(1).toString() + " " + read_client_query.value(2).toString() + " " + read_client_query.value(5).toString()){
            ui->listWidget_5->clear();
            //display selected client's profile info
            for (int i = 0; i < clientRecord.count(); i++) {
                QString column = clientRecord.fieldName(i);
                ui->listWidget_5->addItem(column + ":      " + read_client_query.value(i).toString());
            }
            //switch to new page
            ui->stackedWidget->setCurrentIndex(9);
            break;
        }
    }
    qDebug() << "While loop end: " + read_client_query.value(1).toString() + " " + read_client_query.value(2).toString() + " " + read_client_query.value(5).toString();
}

void MainWindow::on_ALS_listWidget_itemClicked(QListWidgetItem *item)
{
    read_animal_query = readAnimalTable();
    QSqlRecord animalRecord = read_animal_query.record();
    qDebug() << item->text();

    //check if what user clicked matches current value of read_animal_query
    while(read_animal_query.next()){
        if(item->text() == read_animal_query.value(1).toString() + " " + read_animal_query.value(3).toString() + " " + read_animal_query.value(4).toString()){
            ui->APS_listWidget->clear();
            //display selected animal's profile info
            for (int i = 0; i < animalRecord.count(); i++) {
                QString column = animalRecord.fieldName(i);
                ui->APS_listWidget->addItem(column + ":      " + read_animal_query.value(i).toString());
            }
            //switch to new page
            ui->stackedWidget->setCurrentIndex(6);
            break;
        }
    }
    qDebug() << "While loop end: " + read_animal_query.value(1).toString() + " " + read_animal_query.value(3).toString() + " " + read_animal_query.value(4).toString();
}

void MainWindow::on_APS_Back_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_listWidget_2_itemClicked(QListWidgetItem *item)
{
    read_animal_query = readAnimalTable();
    QSqlRecord animalRecord = read_animal_query.record();
    qDebug() << item->text();

    //check if what user clicked matches current value of read_animal_query
    while(read_animal_query.next()){
        if(item->text() == read_animal_query.value(1).toString() + " " + read_animal_query.value(3).toString() + " " + read_animal_query.value(4).toString()){
            ui->listWidget_3->clear();
            //display selected animal's profile info
            for (int i = 0; i < animalRecord.count(); i++) {
                QString column = animalRecord.fieldName(i);
                ui->listWidget_3->addItem(column + ":      " + read_animal_query.value(i).toString());
            }
            //switch to new page
            ui->stackedWidget->setCurrentIndex(3);
            break;
        }
    }
    qDebug() << "While loop end: " + read_animal_query.value(1).toString() + " " + read_animal_query.value(3).toString() + " " + read_animal_query.value(4).toString();
}
