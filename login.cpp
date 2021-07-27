#include "login.h"
#include "ui_login.h"
#include<QMessageBox>
#include <QPixmap>
#include<QStatusBar>
#include<QFile>
#include<QTextStream>
#include "user.h"
#include "menu.h"
#include "mainwindow.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/img/img.jpg");
    ui->label_3->setPixmap(pix.scaled(120,200,Qt::KeepAspectRatio));
}

Login::~Login()
{
    delete ui;
}

QString root = "C:/Users/HP/Desktop/Uni/OOP/QT/bankManagement/";

void Login::on_pushButton_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString pass = ui->lineEdit_pass->text();

   QFile file(":/accounts/accounts/Registered/registered.txt");

   if(!file.open(QFile::ReadOnly| QFile::Text)){
     ui->statusbar->showMessage("Cant find file");
   }
   QTextStream in(&file);
   bool loggedIn = false;
       while(!in.atEnd()){
        QString text1 = in.readLine();
        QStringList l1 = text1.split(" ");
        if(l1[0] == username && l1[1] == pass){
            loggedIn = true;
            QFile file2(root+"accounts/"+username+".txt");
            if(!file2.open(QFile::ReadOnly| QFile::Text)){
              ui->statusbar->showMessage("Cant find file");
            }
            QTextStream ind(&file2);
            QString details = ind.readLine();
            QStringList dL = details.split(" ");
             user u1("1000",'S',l1[0],0,0,0,0,0,0,'M');
             u1.updateBalance(dL[0].toDouble(),dL[1].toDouble(),dL[2].toInt(),dL[3].toInt(),dL[4].toInt(),dL[5].toInt(),dL[6]);
             file2.flush();
             file2.close();
              menu = new Menu(this,u1);
            menu->show();

            hide();
            break;
        }
   }
       if(!loggedIn){
            ui->statusbar->showMessage("Wrong Credentials",2500);
       }
//       show();
    file.flush();
    file.close();

}

