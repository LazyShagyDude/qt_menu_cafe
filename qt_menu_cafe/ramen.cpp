#include "ramen.h"
#include "ui_ramen.h"
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

ramen::ramen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ramen)
{
    ui->setupUi(this);
    QFile *file=new QFile(path);
        if(file->open(QIODevice::ReadOnly | QFile::Text)){
            doc = QJsonDocument::fromJson(QByteArray(file->readAll()),&docError);
        }
        file->close();
}

ramen::~ramen()
{
    delete ui;
}

void ramen::on_pushButton_clicked()
{
    resRamen = doc.object().value("ramen").toObject().value("udon").toInt();
}


void ramen::on_pushButton_2_clicked()
{
    resRamen = doc.object().value("ramen").toObject().value("kim-chi").toInt();
}


void ramen::on_pushButton_3_clicked()
{
    resRamen = doc.object().value("ramen").toObject().value("Soya").toInt();
}

