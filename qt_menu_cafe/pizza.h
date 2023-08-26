#ifndef PIZZA_H
#define PIZZA_H

#include <QDialog>
#include <QJsonObject>
#include <QJsonParseError>
#include "mainwindow.h"

namespace Ui {
class Pizza;
}

class Pizza : public QDialog
{
    Q_OBJECT
    public: int resPizza = 0;
    QJsonDocument doc;
        QJsonParseError docError;
        QJsonDocument resDoc;
        QJsonParseError resDocError;
        QString path = "/untitled9/rest.json";

public:
    explicit Pizza(QWidget *parent = nullptr);
    ~Pizza();

private slots:
    void on_pepperoniButton_clicked();

    void on_margoButton_clicked();

    void on_burgerButton_clicked();

private:
    Ui::Pizza *ui;
};

#endif // PIZZA_H
