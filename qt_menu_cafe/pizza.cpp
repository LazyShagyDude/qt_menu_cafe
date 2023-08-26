#include "pizza.h"
#include "ui_pizza.h"
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

Pizza::Pizza(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pizza)
{
    ui->setupUi(this);
    QFile *file=new QFile(path);
        if(file->open(QIODevice::ReadOnly | QFile::Text)){
            doc = QJsonDocument::fromJson(QByteArray(file->readAll()),&docError);
        }
        file->close();
}

Pizza::~Pizza()
{
    delete ui;
}

void Pizza::on_pepperoniButton_clicked()
{
        resPizza = doc.object().value("pizza").toObject().value("pepperoni").toInt();
}


void Pizza::on_margoButton_clicked()
{
    resPizza = doc.object().value("pizza").toObject().value("margarita").toInt();
}


void Pizza::on_burgerButton_clicked()
{
    resPizza = doc.object().value("pizza").toObject().value("burger").toInt();
}

