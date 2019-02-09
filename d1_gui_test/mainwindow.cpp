#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    qDebug() << "AAAAAAHHHH";
    ui->label->setText(inpName);
}

void MainWindow::on_lineEdit_editingFinished()
{
    inpName = ui->lineEdit->text();
}

void MainWindow::on_pushButton_3_clicked()
{
    //add the input to the database
}
//going to fully implement adding animals since its worth 25%
