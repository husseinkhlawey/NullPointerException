#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sqlfunctions.h"
#include "staff.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    //put in DB manager
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

//user is client
void MainWindow::on_pushButton_Client_clicked()
{
    //setup client object
    client = Client();

    //list the clients
    ui->listWidget_6->clear();
    read_client_query = readClientTable();

    while (read_client_query.next()){
        ui->listWidget_6->addItem(read_client_query.value(1).toString() + " " + read_client_query.value(2).toString() + " " + read_client_query.value(5).toString());
    }
    qDebug() << "End of data";
    ui->stackedWidget->setCurrentIndex(13);
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

//user is staff
void MainWindow::on_pushButton_Staff_clicked()
{
    //setup staff object
    staff = Staff();
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_9_clicked()//go to add animal page from animal list
{
    ui->comboBox->clear();
    ui->comboBox_2->clear();
    ui->comboBox_3->clear();
    ui->spinBox->setValue(0);
    ui->comboBox_4->clear();
    ui->comboBox_5->clear();
    ui->comboBox_6->clear();
    ui->comboBox_7->clear();
    ui->comboBox_8->clear();
    ui->comboBox_9->clear();
    ui->comboBox_10->clear();
    ui->spinBox_2->setValue(0);
    ui->lineEdit->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_7->clear();
    ui->lineEdit_17->clear();
    ui->lineEdit_18->clear();
    ui->lineEdit_21->clear();

    speciesList = {"select species", "Cat", "Dog", "Fish", "Bird", "Horse", "Turtle", "Lizard", "Rabbit", "Hamster"};
    genderList = {"select gender", "Male", "Female"};
    colourList = {"select colour", "Red", "Orange", "Yellow", "Green", "Blue", "Purple", "Brown", "White", "Black", "Grey", "Pink", "Multi-Coloured"};
    dietList = {"select diet", "1-2 meals/day", "2-3 meals/day", "3-4 meals/day", "4-5 meals/day", "5-6 meals/day"};
    hmlList = {"High", "Medium", "Low"};

    ui->comboBox_2->addItem("select breed");
    ui->comboBox_5->addItem("select independence");
    ui->comboBox_6->addItem("select obedience");
    ui->comboBox_7->addItem("select training");
    ui->comboBox_8->addItem("select loyalty");
    ui->comboBox_10->addItem("select loudness");

    for (int i = 0; i < speciesList.length(); i++ ){
       ui->comboBox->addItem(speciesList[i]);
    }
    for (int i = 0; i < genderList.length(); i++ ){
       ui->comboBox_3->addItem(genderList[i]);
    }
    for (int i = 0; i < colourList.length(); i++ ){
       ui->comboBox_4->addItem(colourList[i]);
    }
    for (int i = 0; i < hmlList.length(); i++ ){
        ui->comboBox_5->addItem(hmlList[i]);
        ui->comboBox_6->addItem(hmlList[i]);
        ui->comboBox_7->addItem(hmlList[i]);
        ui->comboBox_8->addItem(hmlList[i]);
        ui->comboBox_10->addItem(hmlList[i]);
    }
    for (int i = 0; i < dietList.length(); i++ ){
       ui->comboBox_9->addItem(dietList[i]);
    }

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

void MainWindow::on_pushButton_6_clicked()//go to staff page
{
    ui->comboBox->clear();
    ui->comboBox_2->clear();
    ui->comboBox_3->clear();
    ui->spinBox->setValue(0);
    ui->comboBox_4->clear();
    ui->comboBox_5->clear();
    ui->comboBox_6->clear();
    ui->comboBox_7->clear();
    ui->comboBox_8->clear();
    ui->comboBox_9->clear();
    ui->comboBox_10->clear();
    ui->spinBox_2->setValue(0);
    ui->lineEdit->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_7->clear();
    ui->lineEdit_17->clear();
    ui->lineEdit_18->clear();
    ui->lineEdit_21->clear();

    speciesList = {"select species", "Cat", "Dog", "Fish", "Bird", "Horse", "Turtle", "Lizard", "Rabbit", "Hamster"};
    genderList = {"select gender", "Male", "Female"};
    colourList = {"select colour", "Red", "Orange", "Yellow", "Green", "Blue", "Purple", "Brown", "White", "Black", "Grey", "Pink", "Multi-Coloured"};
    dietList = {"select diet", "1-2 meals/day", "2-3 meals/day", "3-4 meals/day", "4-5 meals/day", "5-6 meals/day"};
    hmlList = {"High", "Medium", "Low"};

    ui->comboBox_2->addItem("select breed");
    ui->comboBox_5->addItem("select independence");
    ui->comboBox_6->addItem("select obedience");
    ui->comboBox_7->addItem("select training");
    ui->comboBox_8->addItem("select loyalty");
    ui->comboBox_10->addItem("select loudness");

    for (int i = 0; i < speciesList.length(); i++ ){
       ui->comboBox->addItem(speciesList[i]);
    }
    for (int i = 0; i < genderList.length(); i++ ){
       ui->comboBox_3->addItem(genderList[i]);
    }
    for (int i = 0; i < colourList.length(); i++ ){
       ui->comboBox_4->addItem(colourList[i]);
    }
    for (int i = 0; i < hmlList.length(); i++ ){
        ui->comboBox_5->addItem(hmlList[i]);
        ui->comboBox_6->addItem(hmlList[i]);
        ui->comboBox_7->addItem(hmlList[i]);
        ui->comboBox_8->addItem(hmlList[i]);
        ui->comboBox_10->addItem(hmlList[i]);
    }
    for (int i = 0; i < dietList.length(); i++ ){
       ui->comboBox_9->addItem(dietList[i]);
    }

    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_pushButton_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);

    //refresh animal list
    ui->ALS_listWidget->clear();
    read_animal_query = readAnimalTable();

    while (read_animal_query.next()){
        ui->ALS_listWidget->addItem(read_animal_query.value(1).toString() + " " + read_animal_query.value(3).toString() + " " + read_animal_query.value(4).toString());
    }
    qDebug() << "End of data";
}

void MainWindow::on_pushButton_11_clicked()//save Animal
{
    //refresh animal list
    inpName = ui->lineEdit->text();

    if (ui->comboBox_3->currentText() == "Male"){
        inpGender = 1;
    }
    else{
        inpGender = 0;
    }
    inpSpecies = ui->comboBox->currentText();
    inpBreed = ui->comboBox_2->currentText();
    inpAge = ui->spinBox->text().toInt();
    inpWeight = ui->lineEdit_6->text().toFloat();
    inpHeight = ui->lineEdit_7->text().toFloat();
    inpColour = ui->comboBox_4->currentText();
    inpindependence = ui->comboBox_5->currentText();
    inpobedience = ui->comboBox_6->currentText();
    inptraining = ui->comboBox_7->currentText();
    inpcostOfMaintenance = ui->lineEdit_17->text().toInt();
    inptimeOfMaintenance = ui->lineEdit_18->text().toInt();
    inployalty = ui->comboBox_8->currentText();
    inpdiet = ui->comboBox_9->currentText();
    inpLoudness = ui->comboBox_10->currentText();
    inplifespan = ui->spinBox_2->text().toInt();
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

void MainWindow::on_pushButton_15_clicked()//go to add client page from staff pagee
{
    ui->lineEdit_9->clear();
    ui->lineEdit_10->clear();
    ui->lineEdit_11->clear();
    ui->lineEdit_12->clear();
    ui->lineEdit_13->clear();
    ui->spinBox_3->setValue(0);
    ui->lineEdit_43->clear();
    ui->lineEdit_44->clear();
    ui->comboBox_11->clear();
    ui->comboBox_13->clear();
    ui->comboBox_12->clear();

    houseList = {"select house type", "Apartment", "Bungalow", "Townhouse", "Semi-Detached", "Detached", "Mansion"};
    allergiesList = {"select allergies", "None", "Fur"};
    lifestyleList = {"select lifestyle", "Extremely inactive", "Sedentary", "Moderately active", "Vigorously active", "Extremely active"};

    for(int i = 0; i < houseList.length(); i++){
        ui->comboBox_11->addItem(houseList[i]);
    }
    for(int i = 0; i < allergiesList.length(); i++){
        ui->comboBox_13->addItem(allergiesList[i]);
    }
    for(int i = 0; i < lifestyleList.length(); i++){
        ui->comboBox_12->addItem(lifestyleList[i]);
    }

    ui->stackedWidget->setCurrentIndex(10);
}

void MainWindow::on_pushButton_17_clicked()
{
    ui->lineEdit_9->clear();
    ui->lineEdit_10->clear();
    ui->lineEdit_11->clear();
    ui->lineEdit_12->clear();
    ui->lineEdit_13->clear();
    ui->spinBox_3->setValue(0);
    ui->lineEdit_43->clear();
    ui->lineEdit_44->clear();
    ui->comboBox_11->clear();
    ui->comboBox_13->clear();
    ui->comboBox_12->clear();

    houseList = {"select house type", "Apartment", "Bungalow", "Townhouse", "Semi-Detached", "Detached", "Mansion"};
    allergiesList = {"select allergies", "None", "Fur"};
    lifestyleList = {"select lifestyle", "Extremely inactive", "Sedentary", "Moderately active", "Vigorously active", "Extremely active"};

    for(int i = 0; i < houseList.length(); i++){
        ui->comboBox_11->addItem(houseList[i]);
    }
    for(int i = 0; i < allergiesList.length(); i++){
        ui->comboBox_13->addItem(allergiesList[i]);
    }
    for(int i = 0; i < lifestyleList.length(); i++){
        ui->comboBox_12->addItem(lifestyleList[i]);
    }

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
    ui->stackedWidget->setCurrentIndex(4);

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
    inpFname = ui->lineEdit_9->text();
    inpLname = ui->lineEdit_10->text();
    inpEmail = ui->lineEdit_11->text();
    inpAddress = ui->lineEdit_12->text();
    inpPhone = ui->lineEdit_13->text();
    inpKids = ui->spinBox_3->text();
    inplTime = ui->lineEdit_43->text();
    inpSalary = ui->lineEdit_44->text();
    inpHouse = ui->comboBox_11->currentText();
    inpAllergies = ui->comboBox_13->currentText();
    inpLifestyle = ui->comboBox_12->currentText();

    //generate animal id
    int t = getNumClients();
    qDebug()<<t;
    addClients(t,inpFname,inpLname,inpEmail,inpAddress,inpPhone, inpKids,inplTime,inpSalary,inpHouse,inpAllergies,inpLifestyle);

    ui->stackedWidget->setCurrentIndex(8);

    //refresh client list
    ui->listWidget_4->clear();
    read_client_query = readClientTable();

    while (read_client_query.next()){
        ui->listWidget_4->addItem(read_client_query.value(1).toString() + " " + read_client_query.value(2).toString() + " " + read_client_query.value(5).toString());
    }
    qDebug() << "End of data";
}

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

void MainWindow::on_APS_EditProfile_clicked()//edit animal (Staff)
{
    read_animal_query = readAnimalTable();
    QSqlRecord animalRecord = read_animal_query.record();
    QString item = ui->APS_listWidget->item(0)->text();
    QString substring = item.mid(9);

    while(read_animal_query.next()){
        if(substring == read_animal_query.value(0).toString()){
            ui->lineEdit_29->setText(read_animal_query.value(1).toString());
            ui->lineEdit_34->setText(read_animal_query.value(2).toString());
            ui->lineEdit_25->setText(read_animal_query.value(3).toString());
            ui->lineEdit_41->setText(read_animal_query.value(4).toString());
            ui->lineEdit_38->setText(read_animal_query.value(5).toString());
            ui->lineEdit_40->setText(read_animal_query.value(6).toString());
            ui->lineEdit_36->setText(read_animal_query.value(7).toString());
            ui->lineEdit_30->setText(read_animal_query.value(8).toString());
            ui->lineEdit_24->setText(read_animal_query.value(9).toString());
            ui->lineEdit_32->setText(read_animal_query.value(10).toString());
            ui->lineEdit_28->setText(read_animal_query.value(11).toString());
            ui->lineEdit_33->setText(read_animal_query.value(12).toString());
            ui->lineEdit_37->setText(read_animal_query.value(13).toString());
            ui->lineEdit_26->setText(read_animal_query.value(14).toString());
            ui->lineEdit_39->setText(read_animal_query.value(15).toString());
            ui->lineEdit_31->setText(read_animal_query.value(16).toString());
            ui->lineEdit_27->setText(read_animal_query.value(17).toString());
            ui->lineEdit_35->setText(read_animal_query.value(18).toString());
            break;
        }
    }
    ui->stackedWidget->setCurrentIndex(11);
}

void MainWindow::on_pushButton_22_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_pushButton_23_clicked()//save edited animal
{

    QString item = ui->APS_listWidget->item(0)->text();
    QString substring = item.mid(9);

//    inpId = substring.toInt();
//    inpName = ui->lineEdit_29->text();
//    inpGender = ui->lineEdit_34->text().toInt();
//    inpSpecies = ui->lineEdit_25->text();
//    inpBreed = ui->lineEdit_41->text();

//    inpAge = ui->lineEdit_38->text().toInt();
//    inpWeight = ui->lineEdit_40->text().toFloat();
//    inpHeight = ui->lineEdit_36->text().toFloat();
//    inpColour = ui->lineEdit_30->text();

//    inpindependence = ui->lineEdit_24->text();
//    inpobedience = ui->lineEdit_32->text();
//    inptraining = ui->lineEdit_28->text();
//    inpcostOfMaintenance = ui->lineEdit_33->text().toInt();
//    inptimeOfMaintenance = ui->lineEdit_37->text().toInt();

//    inployalty = ui->lineEdit_26->text();
//    inpdiet = ui->lineEdit_39->text();
//    inpLoudness = ui->lineEdit_31->text();
//    inplifespan = ui->lineEdit_27->text().toInt();
//    inpsocialNeeds = ui->lineEdit_35->text();


    qDebug()<<inpId;
    editAnimals(substring,ui->lineEdit_29->text(),ui->lineEdit_34->text(),ui->lineEdit_25->text(),ui->lineEdit_41->text(),ui->lineEdit_38->text(),ui->lineEdit_40->text()
                ,ui->lineEdit_36->text(),ui->lineEdit_30->text(),ui->lineEdit_24->text(),ui->lineEdit_32->text(),ui->lineEdit_28->text(),
               ui->lineEdit_33->text(),ui->lineEdit_37->text(),ui->lineEdit_26->text(),ui->lineEdit_39->text(),ui->lineEdit_31->text(),ui->lineEdit_27->text(),ui->lineEdit_35->text());

    ui->stackedWidget->setCurrentIndex(5);

    //refresh animal list
    ui->ALS_listWidget->clear();
    read_animal_query = readAnimalTable();

    while (read_animal_query.next()){
        ui->ALS_listWidget->addItem(read_animal_query.value(1).toString() + " " + read_animal_query.value(3).toString() + " " + read_animal_query.value(4).toString());
    }
    qDebug() << "End of data";
}

void MainWindow::on_pushButton_18_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_listWidget_6_itemClicked(QListWidgetItem *item)
{
    read_client_query = readClientTable();
    QSqlRecord clientRecord = read_client_query.record();

    qDebug() << item->text();

    //check if what user clicked matches current value of read_client_query
    while(read_client_query.next()){
        if(item->text() == read_client_query.value(1).toString() + " " + read_client_query.value(2).toString() + " " + read_client_query.value(5).toString()){
            ui->listWidget_7->clear();
            //display selected client's profile info
            for (int i = 0; i < clientRecord.count(); i++) {
                QString column = clientRecord.fieldName(i);
                ui->listWidget_7->addItem(column + ":      " + read_client_query.value(i).toString());
            }
            //switch to new page
            ui->stackedWidget->setCurrentIndex(14);
            break;
        }
    }
    qDebug() << "While loop end: " + read_client_query.value(1).toString() + " " + read_client_query.value(2).toString() + " " + read_client_query.value(5).toString();
}

void MainWindow::on_pushButton_24_clicked()
{
    //read_client_query is on the current client
    editClients(read_client_query.value(0).toString(),ui->lineEdit_49->text(), ui->lineEdit_58->text(), ui->lineEdit_57->text(), ui->lineEdit_48->text(), ui->lineEdit_52->text(), ui->lineEdit_51->text(),
                ui->lineEdit_55->text(),ui->lineEdit_54->text(), ui->lineEdit_53->text(), ui->lineEdit_56->text(), ui->lineEdit_50->text());

    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(13);
}

//client clicks edit profile
void MainWindow::on_pushButton_26_clicked()
{
    //read_client_query is on the current client
    ui->lineEdit_49->setText(read_client_query.value(1).toString());
    ui->lineEdit_58->setText(read_client_query.value(2).toString());
    ui->lineEdit_57->setText(read_client_query.value(3).toString());
    ui->lineEdit_48->setText(read_client_query.value(4).toString());
    ui->lineEdit_52->setText(read_client_query.value(5).toString());
    ui->lineEdit_51->setText(read_client_query.value(6).toString());
    ui->lineEdit_55->setText(read_client_query.value(7).toString());
    ui->lineEdit_54->setText(read_client_query.value(8).toString());
    ui->lineEdit_53->setText(read_client_query.value(9).toString());
    ui->lineEdit_56->setText(read_client_query.value(10).toString());
    ui->lineEdit_50->setText(read_client_query.value(11).toString());

    ui->stackedWidget->setCurrentIndex(12);
}

void MainWindow::on_pushButton_25_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

//void MainWindow::on_comboBox_2_activated(int index)
//{
//    ui->comboBox_2->clear();
//    breedList = {{"select item"},
//                 {"select item", "Persian", "Maine Coon", "Siamese", "American Shorthair", "Abyssinian", "Ragdoll", "Burmese", "Himalayan", "Sphynx"},
//                 {"select item", "Bulldog", "Poodle", "German Shepherd", "Beagle", "Chihuahua", "Greyhound", "Golden Retriever", "Rottweiler", "Pomeranian"},
//                 {"select item", "Neon Tetra", "Guppies", "Oscar", "Mollies", "Zebra Danios", "Platies", "Cherry Barb", "Goldfish", "Swordtail"},
//                 {"select item", "Parrot", "Cockatiel", "Budgerigar", "Caique", "Conure", "Finch", "Canary"},
//                 {"select item", "Arabian", "Quarter", "Thoroughbred", "Tennessee Walker", "Morgan", "Paint", "Appaloosa", "Miniature Horse", "Warmblood"},
//                 {"select item", "Red-Eared Slider", "Eastern Box", "Western Painted", "Map", "Wood"},
//                 {"select item", "Leopard Gecko", "Red Ackie", "Bearded Dragon", "Crested Gecko"},
//                 {"select item", "Mini Rex", "Holland Lop", "Dutch Lop", "Dwarf Hotot", "Mini Lop", "Mini Satin", "Netherland Dwarf", "Polish", "Lionhead"},
//                 {"select item", "Syrian", "Dwarf", "Chinese"}};

//    for (int j = 0; j < breedList[index].length(); j++ ){
//       ui->comboBox_2->addItem(breedList[index][j]);
//    }
//}

void MainWindow::on_comboBox_activated(int index)
{
    ui->comboBox_2->clear();
    breedList = {{"select breed"},
                 {"select breed", "Persian", "Maine Coon", "Siamese", "American Shorthair", "Abyssinian", "Ragdoll", "Burmese", "Himalayan", "Sphynx"},
                 {"select breed", "Bulldog", "Poodle", "German Shepherd", "Beagle", "Chihuahua", "Greyhound", "Golden Retriever", "Rottweiler", "Pomeranian"},
                 {"select breed", "Neon Tetra", "Guppies", "Oscar", "Mollies", "Zebra Danios", "Platies", "Cherry Barb", "Goldfish", "Swordtail"},
                 {"select breed", "Parrot", "Cockatiel", "Budgerigar", "Caique", "Conure", "Finch", "Canary"},
                 {"select breed", "Arabian", "Quarter", "Thoroughbred", "Tennessee Walker", "Morgan", "Paint", "Appaloosa", "Miniature Horse", "Warmblood"},
                 {"select breed", "Red-Eared Slider", "Eastern Box", "Western Painted", "Map", "Wood"},
                 {"select breed", "Leopard Gecko", "Red Ackie", "Bearded Dragon", "Crested Gecko"},
                 {"select breed", "Mini Rex", "Holland Lop", "Dutch Lop", "Dwarf Hotot", "Mini Lop", "Mini Satin", "Netherland Dwarf", "Polish", "Lionhead"},
                 {"select breed", "Syrian", "Dwarf", "Chinese"}};

    for (int j = 0; j < breedList[index].length(); j++ ){
       ui->comboBox_2->addItem(breedList[index][j]);
    }
}

//lauch ACM
void MainWindow::on_pushButton_27_clicked()
{
    staff.launchACM();
    ui->stackedWidget->setCurrentIndex(24);
}
