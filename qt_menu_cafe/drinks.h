#ifndef DRINKS_H
#define DRINKS_H

#include <QDialog>
#include <QDialog>
#include <QJsonObject>
#include <QJsonParseError>
#include "mainwindow.h"

namespace Ui {
class drinks;
}

class drinks : public QDialog
{
    Q_OBJECT
public: int resDrinks = 0;
QJsonDocument doc;
    QJsonParseError docError;
    QJsonDocument resDoc;
    QJsonParseError resDocError;
    QString path = "/untitled9/rest.json";

public:
    explicit drinks(QWidget *parent = nullptr);
    ~drinks();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::drinks *ui;
};

#endif // DRINKS_H
