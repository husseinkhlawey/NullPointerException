#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QObject>
#include <QListWidgetItem>
#include "staff.h"
#include "client.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_Client_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_Staff_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_21_clicked();

    void on_listWidget_4_itemClicked(QListWidgetItem *item);

    void on_ALS_listWidget_itemClicked(QListWidgetItem *item);

    void on_APS_Back_clicked();

    void on_listWidget_2_itemClicked(QListWidgetItem *item);

    void on_APS_EditProfile_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_18_clicked();

    void on_listWidget_6_itemClicked(QListWidgetItem *item);

    void on_pushButton_24_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_25_clicked();

    void on_comboBox_2_activated(int index);

    void on_comboBox_activated(int index);

private:
    Ui::MainWindow *ui;

    Staff staff;
    Client client;

    QSqlQuery read_animal_query;
    QSqlQuery read_client_query;

    //for getting user input
    int inpId;
    QString inpName;
    int inpGender;
    QString inpSpecies;
    QString inpBreed;
    int inpAge;
    float inpWeight;
    float inpHeight;
    QString inpColour;
    QString inpindependence;
    QString inpobedience;
    QString inptraining;
    int inpcostOfMaintenance;
    int inptimeOfMaintenance;
    QString inployalty;
    QString inpdiet;
    QString inpLoudness;
    int inplifespan;
    QString inpsocialNeeds;

    QString inpFname;
    QString inpLname;
    QString inpEmail;
    QString inpAddress;
    QString inpPhone;
    QString inpKids;
    QString inplTime;
    QString inpSalary;
    QString inpHouse;
    QString inpAllergies;
    QString inpLifestyle;

    QList<QString> speciesList;
    QList<QList<QString>> breedList;
    QList<QString> genderList;
    QList<QString> colourList;
    QList<QString> dietList;
    QList<QString> hmlList;
    QList<QString> houseList;
    QList<QString> allergiesList;
    QList<QString> lifestyleList;
};

#endif // MAINWINDOW_H
