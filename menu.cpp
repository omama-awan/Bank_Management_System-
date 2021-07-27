#include "menu.h"
#include "user.h"
#include "login.h"
#include "ui_menu.h"


Menu::Menu(QWidget *parent,user &u1) :
    QMainWindow(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    u = u1;
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_clicked()
{
   ui->label->setNum(u.getcBalance());
}


void Menu::on_pushButton_2_clicked()
{
    parentWidget()->show();
    hide();
}
