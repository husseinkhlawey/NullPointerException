#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QObject>
#include <QListWidgetItem>

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

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_20_clicked();

    void on_listWidget_activated(const QModelIndex &index);

    void on_pushButton_21_clicked();

    void on_listWidget_4_itemClicked(QListWidgetItem *item);

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_APS_listWidget_itemClicked(QListWidgetItem *item);

    void on_ALS_listWidget_itemClicked(QListWidgetItem *item);

    void on_APS_Back_clicked();

    void on_listWidget_2_itemClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
    QSqlQuery read_animal_query;
    QSqlQuery read_client_query;

    //for getting user input
    QString inpName;
    int inpGender;
    QString inpSpecies;
    QString inpBreed;
    int inpAge;
    float inpWeight;
    float inpHeight;
    QString inpColour;

    QString inpFname;
    QString inpLname;
    QString inpEmail;
    QString inpAddress;
    QString inpPhone;
};

#endif // MAINWINDOW_H
