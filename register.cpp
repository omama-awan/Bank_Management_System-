#include "register.h"
#include "ui_register.h"
#include<QMessageBox>
#include <QPixmap>
#include<QStatusBar>
#include<QFile>
#include<QTextStream>

QString roots = "C:/Users/HP/Desktop/Uni/OOP/QT/bankManagement/";

Register::Register(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/img/img.jpg");
    ui->label_3->setPixmap(pix.scaled(120,200,Qt::KeepAspectRatio));
}

Register::~Register()
{
    delete ui;
}

void Register::on_pushButton_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString pass = ui->lineEdit_pass->text();

    if(pass.length() ==4){
    QFile file(":/accounts/accounts/Registered/registered.txt");

    if(!file.open(QFile::ReadOnly| QFile::Text)){
      ui->statusbar->showMessage("Cant find file");
    }
    QTextStream in(&file);
    bool idFound = false;
        while(!in.atEnd()){
         QString text1 = in.readLine();
         QStringList l1 = text1.split(" ");
         if(l1[0] == username){
             idFound = true;
             break;
         }
        }
       file.close();
        if(idFound == false){
             QFile file2(roots+"accounts/Registered/registered.txt");
            if(!file2.open(QFile::WriteOnly| QFile::Append)){
                ui->statusbar->showMessage("Cant find file to append");
            }
            QTextStream out(&file2);
            out << username.toUtf8()<< " "<<pass.toUtf8()<<"\n";
            file2.close();
            QFile file3(roots+"accounts/"+username+".txt");
            if(!file3.open(QFile::WriteOnly| QFile::Text)){
                ui->statusbar->showMessage("Cant make file");
            }
            QTextStream out2(&file3);
            out2<< "0 0 0 0 0 0 NA "<<endl;

        }
    }
    else{
         ui->statusbar->showMessage("Password too small");
    }
}

void Register::on_pushButton_3_clicked()
{
    parentWidget()->show();
}
