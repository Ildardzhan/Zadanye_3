
#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
     ui->tableWidget->setItem(1, 0, new QTableWidgetItem("Шашлык"));
     ui->tableWidget->setItem(2, 0, new QTableWidgetItem("Гриль"));
     ui->tableWidget->setItem(3, 0, new QTableWidgetItem("Табака"));
     ui->tableWidget->setItem(4, 0, new QTableWidgetItem("Рыба"));
     ui->tableWidget->setItem(5, 0, new QTableWidgetItem("Мясо"));
     ui->tableWidget->setItem(6, 0, new QTableWidgetItem("Лагман"));
     ui->tableWidget->setItem(7, 0, new QTableWidgetItem("Тефтели"));
     ui->tableWidget->setItem(8, 0, new QTableWidgetItem("Мастава"));
     ui->tableWidget->setItem(9, 0, new QTableWidgetItem("Голубцы"));
     ui->tableWidget->setItem(10, 0, new QTableWidgetItem("Стэйк"));
     ui->tableWidget->setItem(1, 1, new QTableWidgetItem("12000 сум"));
     ui->tableWidget->setItem(2, 1, new QTableWidgetItem("45000 сум"));
     ui->tableWidget->setItem(3, 1, new QTableWidgetItem("55000 сум"));
     ui->tableWidget->setItem(4, 1, new QTableWidgetItem("60000 сум"));
     ui->tableWidget->setItem(5, 1, new QTableWidgetItem("120000 сум"));
     ui->tableWidget->setItem(6, 1, new QTableWidgetItem("20000 сум"));
     ui->tableWidget->setItem(7, 1, new QTableWidgetItem("250000 сум"));
     ui->tableWidget->setItem(8, 1, new QTableWidgetItem("30000 сум"));
     ui->tableWidget->setItem(9, 1, new QTableWidgetItem("28000 сум"));
     ui->tableWidget->setItem(10, 1, new QTableWidgetItem("100000 сум"));

}

