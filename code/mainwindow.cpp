#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QDebug>
#include<QPixmap>
#include<QIcon>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton_5->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
     QMessageBox::information(this,"Revathi 212218205042","THIS IS INFORMATION BOX");
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this," Revathi 212218205042","Do you like apple?",QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        QMessageBox::information(this,"APPLE","Yes");
    }
    if(reply == QMessageBox::No)
    {
        QMessageBox::information(this,"NO APPLE","No");
    }

}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Revathi 212218205042","This is a custom message",QMessageBox::Yes | QMessageBox::YesToAll | QMessageBox::No | QMessageBox::NoToAll);
    if(reply == QMessageBox::Yes)
    {
        qDebug() <<"Nothing is displayed";
    }
    if(reply == QMessageBox::YesToAll)
    {
       QMessageBox::warning(this,"Revathi 212218205042","Display the message with warning as YesToAll");
    }
    if(reply == QMessageBox::No)
    {
        qDebug() <<"Nothing is displayed";
    }
    if(reply == QMessageBox::NoToAll)
    {
       QMessageBox::warning(this,"Revathi 212218205042","Don't Display the message with warning as YesToAll");
    }

}

void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::warning(this,"Revathi 212218205042","This is a warning message");
}


void MainWindow::on_pushButton_5_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<"Button Checked--ON--";
        ui->pushButton_5->setIcon(QIcon("C:/Users/Rey S/Documents/CIA2_revathi/on.jpeg"));
        ui->pushButton_5->setIconSize(QSize(100,100));
    }
    else
    {
        qDebug()<<"Button Checked--OFF--";
        ui->pushButton_5->setIcon(QIcon("C:/Users/Rey S/Documents/CIA2_revathi/off.jpeg"));
        ui->pushButton_5->setIconSize(QSize(150,150));
    }
}
