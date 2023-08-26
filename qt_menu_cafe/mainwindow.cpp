#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>
#include <QJsonDocument>
#include <iostream>
#include <QDebug>
#include <QString>
#include "pizza.h"
#include "ramen.h"
#include "drinks.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QFile *file=new QFile(path);
        if(file->open(QIODevice::ReadOnly | QFile::Text)){
            doc = QJsonDocument::fromJson(QByteArray(file->readAll()),&docError);
        }
        file->close();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::update(){
    QString str1 = QString("Всего: %1 монет")
            .arg(res);
    ui->resultat->setText(str1);
}

void MainWindow::on_pushButton_clicked()
{
    Pizza form1;
    form1.setModal(true);
    form1.exec();
    res += form1.resPizza;
    update();
}


void MainWindow::on_pushButton_2_clicked()
{
    ramen form1;
    form1.setModal(true);
    form1.exec();
    res += form1.resRamen;
    update();
}


void MainWindow::on_pushButton_3_clicked()
{
    drinks form1;
    form1.setModal(true);
    form1.exec();
    res += form1.resDrinks;
    update();
}

