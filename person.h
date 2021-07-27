#ifndef PERSON_H
#define PERSON_H

#include <QMainWindow>
using namespace std;

class person
{
private:
        QString name,ID;
        int bD,bM,bY,jD,jM,jY;
       char gender;
public:
       person();
    person(QString name,int bD,int bM,int bY,int jD,int jM,int jY,char gender);
    QString getName();
    int getBD();
    int getBM();
    int getBY();
    int getJD();
    int getJM();
    int getJY();
    int getGender();
    virtual QString getID()=0;
};

#endif // PERSON_H
