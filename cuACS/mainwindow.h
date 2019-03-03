#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>

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
};

#endif // MAINWINDOW_H
