#include "user.h"

user::user(QString aID,char aType,QString name,int bD,int bM,int bY,int jD,int jM,int jY,char gender):person(name, bD, bM, bY, jD, jM, jY, gender)
{
    this->aID = aID;
    this->aType = aType;
}

void user:: updateBalance(double pB,double cB,double nLoan,int nLD,int nLM,int nLY,QString nLTrans){
    this->pBalance = pB;
    this->cBalance = cB;
    this->loan =nLoan;
    this->lD = nLD;
    this->lM = nLM;
    this->lY = nLY;
    this->lTrans = nLTrans;
}

user::user(){}
char user:: getaType(){
        return aType;
    }
    QString user:: getlTrans(){
        return lTrans;
    }
    double user:: getcBalance(){
        return cBalance;
    }
    double user:: getpBalance(){
        return pBalance;
    }
    double user:: getYsal(){
        return Ysal;
    }
    double user:: getloan(){
        return loan;
    }
    int user:: getlD(){
        return lD;
    }
    int user:: getiM(){
        return lM;
    }
    int user:: getlY(){
        return lY;
    }
     QString user:: getID(){
        return aID;
    }
