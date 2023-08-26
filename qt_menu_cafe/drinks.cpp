#include "drinks.h"
#include "ui_drinks.h"
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

drinks::drinks(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::drinks)
{
    ui->setupUi(this);
    QFile *file=new QFile(path);
        if(file->open(QIODevice::ReadOnly | QFile::Text)){
            doc = QJsonDocument::fromJson(QByteArray(file->readAll()),&docError);
        }
        file->close();
}

drinks::~drinks()
{
    delete ui;
}

void drinks::on_pushButton_clicked()
{
    resDrinks = doc.object().value("drinks").toObject().value("mtndew").toInt();
}


void drinks::on_pushButton_2_clicked()
{
    resDrinks = doc.object().value("drinks").toObject().value("cola").toInt();
}


void drinks::on_pushButton_3_clicked()
{
    resDrinks = doc.object().value("drinks").toObject().value("mors").toInt();
}

