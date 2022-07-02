#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QFile>
#include <QtCore>
#include <QtGui>
#include <QMessageBox>
#include <QComboBox>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->screens->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->userlab->setText("Enter Admin User Name");
    ui->passlab->setText("Enter Admin Password ");
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->userlab->setText("Enter Manager User Name");
    ui->passlab->setText("Enter Manager Password ");
}

void MainWindow::on_pushButton_clicked()
{
    ui->centralWidget->close();
    this->close();
}


void MainWindow::checkUser()
{

    QString admin = "kevin";
    QString adminPass = "12345";
    QString manger = "timm";
    QString mangerPass = "12345";

    if(ui->username->text()== admin)
    {
        if(ui->password->text()== adminPass)
        {
            ui->screens->setCurrentIndex(1);
        }
    }
        if(ui->username->text() == manger)
        {
            if(ui->password->text()== mangerPass)
            {
                ui->screens->setCurrentIndex(2);
            }
        }




}

void MainWindow::on_password_returnPressed()
{
    checkUser();
}


void MainWindow::readFromFile()
{
    QFile file("./assets/day1.txt");
    QTextStream stream(&file);
    QString line;

   QTableWidgetItem *stuff = new QTableWidgetItem;


    if(file.open(QIODevice::ReadOnly |QIODevice::Text)){
        line = stream.readLine();
       // while(!line.isNull()){


            stuff->setText(line);
            ui->table->setItem(0,0,stuff);

           // line = stream.readLine();
       // }
        file.close();
    }


}



void MainWindow::on_pushButton_4_clicked()
{
    readFromFile();
}
