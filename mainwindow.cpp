#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(change_Color()));
            timer->start(500);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    login = new Login(this);
    login->show();
    //hide();
}

void MainWindow::change_Color()
{
    if(ui->label->styleSheet()=="color:red"){
ui->label->setStyleSheet("color:blue");
    }
    else {
        ui->label->setStyleSheet("color:red");
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    registers = new Register(this);
    registers->show();
    hide();
}
