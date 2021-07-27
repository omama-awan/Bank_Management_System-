#ifndef USER_H
#define USER_H
#include "person.h"
#include <QMainWindow>
using namespace std;

class user : public person
{
private:
    char aType;
    QString lTrans;
    double pBalance;
    double cBalance;
    double Ysal;
    double loan;
    int lD,lM,lY;
    QString aID;
public:
    user();
    user(QString aID,char aType,QString name,int bD,int bM,int bY,int jD,int jM,int jY,char gender);
    void updateBalance(double pB,double cB,double nLoan,int nLD,int nLM,int nLY,QString nLTrans);
    char getaType();
        QString getlTrans();
        double getcBalance();
        double getpBalance();
        double getYsal();
        double getloan();
        int getlD();
        int getiM();
        int getlY();
         QString getID();


};

#endif // USER_H
