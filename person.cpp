#include "person.h"

person::person(QString name, int bD, int bM, int bY, int jD, int jM, int jY, char gender):bD(bD),bM(bM),bY(bY),jD(jD),jM(jM),jY(jY){
    this->name = name;
    this->gender = gender;
}
person::person():bD(0),bM(0),bY(0),jD(0),jM(0),jY(0){}
QString person:: getName(){
    return name;
}
int person:: getBD(){
    return bD;
}
int person:: getBM(){
    return bM;
}
int person:: getBY(){
    return bY;
}
int person:: getJD(){
    return jD;
}
int person:: getJM(){
    return jM;
}
int person:: getJY(){
    return jY;
}
int person::getGender(){
    return gender;
}
