#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QJsonObject>
#include <QJsonParseError>
#include <QMainWindow>
#include <QtWidgets>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QJsonDocument doc;
        QJsonParseError docError;
        QJsonDocument resDoc;
        QJsonParseError resDocError;
        QString path = "untitled9/rest.json";
        int res = 0;
        QString name;


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void update();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
