#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QVector>
#include <QFile>
#include <QTextStream>

#include "header.h"
#include "customer.h"

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

    void on_btn_Home_clicked();

    void on_btn_Products_clicked();

    void on_btn_About_Us_clicked();

    void on_btn_Contact_Us_clicked();

    void on_btn_Help_clicked();

    void on_btn_LogIn_clicked();

    void on_btn_Exit_LogIn_clicked();

    void on_CB_Intrest_Level_activated(const QString &arg1);

    void on_pushButton_clicked();

    void AddMember(QVector <Customer> *customerList);

private:
    Ui::MainWindow *ui;
    QVector <Customer> customerList;
};

#endif // MAINWINDOW_H
