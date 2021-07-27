#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "menu.h"


namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_pushButton_clicked();
private:
    Ui::Login *ui;
    Menu *menu;
};



#endif // LOGIN_H
