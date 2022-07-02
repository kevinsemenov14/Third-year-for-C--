#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    PopulateList(&customerList);
    cout << customerList.size() << endl;
    ui->stWid_Main->setCurrentWidget(ui->stWid_Main_Page);
    ui->stWid_Customer_Pages->setCurrentWidget(ui->stWid_Home_Page);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_btn_Home_clicked()
{
    ui->stWid_Customer_Pages->setCurrentWidget(ui->stWid_Home_Page);
}

void MainWindow::on_btn_Products_clicked()
{
    ui->stWid_Customer_Pages->setCurrentWidget(ui->stWid_Product_Page);
}

void MainWindow::on_btn_About_Us_clicked()
{
    ui->stWid_Customer_Pages->setCurrentWidget(ui->stWid_About_Us_Page);
}

void MainWindow::on_btn_Contact_Us_clicked()
{
    ui->stWid_Customer_Pages->setCurrentWidget(ui->stWid_Contact_Us_Page);
}

void MainWindow::on_btn_Help_clicked()
{
    ui->stWid_Customer_Pages->setCurrentWidget(ui->stWid_Help_Page);
}

void MainWindow::on_btn_LogIn_clicked()
{
    ui->stWid_Main->setCurrentWidget(ui->stWid_Admin_Page);
    ui->Customer_Table->setRowCount(customerList.size());

    QTableWidgetItem *obj;

    for(int i = 0; i < customerList.size(); ++i){

            for(int j = 0; j < ui->Customer_Table->rowCount() + 1; ++j){
                switch(j){
                case 0: obj = new QTableWidgetItem(customerList[i].getCompanyName());
                        break;
                case 1: obj = new QTableWidgetItem(customerList[i].getCompanyStreetAddress());
                        break;
                case 2: obj = new QTableWidgetItem(customerList[i].getCompanyCity());
                        break;
                case 3: obj = new QTableWidgetItem(customerList[i].getCompanyState());
                        break;
                case 4: obj = new QTableWidgetItem(QString::number(customerList[i].getCompanyZipCode()));
                        break;
                case 5: if(customerList[i].getCompanyIntrest() == VERY_INTRESTED){
                            obj = new QTableWidgetItem("Very Intrested");
                        }
                        else if(customerList[i].getCompanyIntrest() == SOMEWHAT_INTRESTED){
                            obj = new QTableWidgetItem("Some What Intrested");
                        }
                        else{
                            obj = new QTableWidgetItem("Not Intrested");
                        }
                        // obj = new QTableWidgetItem(customerList[i].);
                        break;
                case 6: if(customerList[i].getIsKey()){
                            obj = new QTableWidgetItem("Yes");
                        }
                        else{
                            obj = new QTableWidgetItem("No");
                        }
                        // obj = new QTableWidgetItem(customerList[i].);
                        break;
                }
                ui->Customer_Table->setItem(i, j, obj);
            }
        }
}

void MainWindow::on_btn_Exit_LogIn_clicked()
{
    ui->stWid_Main->setCurrentWidget(ui->stWid_Main_Page);
}

void MainWindow::on_CB_Intrest_Level_activated(const QString &arg1)
{

}

void MainWindow::on_pushButton_clicked()
{
    AddMember(&customerList);
    cout << customerList.size();
    cout << customerList[customerList.size()].getCompanyName().toStdString();
}
