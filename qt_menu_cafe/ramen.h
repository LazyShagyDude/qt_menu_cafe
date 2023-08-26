#ifndef RAMEN_H
#define RAMEN_H

#include <QDialog>
#include <QJsonObject>
#include <QJsonParseError>
#include "mainwindow.h"
namespace Ui {
class ramen;
}

class ramen : public QDialog
{
    Q_OBJECT
public: int resRamen = 0;
QJsonDocument doc;
    QJsonParseError docError;
    QJsonDocument resDoc;
    QJsonParseError resDocError;
    QString path = "/untitled9/rest.json";

public:
    explicit ramen(QWidget *parent = nullptr);
    ~ramen();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::ramen *ui;
};

#endif // RAMEN_H
