#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include "user.h"


namespace Ui {
class Menu;
}

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    user u;
    explicit Menu(QWidget *parent,user &u1);
    ~Menu();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Menu *ui;


};

#endif // MENU_H
