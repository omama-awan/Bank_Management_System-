#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "login.h"
#include "register.h"
#include"user.h"
#include<QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

public slots:
    void change_Color();

private:
    Ui::MainWindow *ui;
    Login *login;
    QTimer *timer;
    Register *registers;
};

#endif // MAINWINDOW_H
