#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_client_clicked();

    void on_staff_clicked();

    void on_viewAnimal_Client_clicked();

    void on_back_Client_clicked();

    void on_back_animalList_Client_clicked();

    void on_back_animalProfile_Client_clicked();

    void on_viewAnimal_Staff_clicked();

    void on_addAnimal_Staff_2_clicked();

    void on_viewClient_Staff_clicked();

    void on_addClient_Staff_2_clicked();

    void on_Back_Staff_clicked();

    void on_addAnimal_animalList_Staff_clicked();

    void on_Back_animalList_Staff_clicked();

    void on_editAnimal_animalProfile_Staff_clicked();

    void on_Back_animalProfile_Staff_clicked();

    void on_addClient_clientList_Staff_clicked();

    void on_Back_clientList_Staff_clicked();

    void on_editClient_clientProfile_Staff_clicked();

    void on_Back_clientProfile_Staff_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
