#include "point.h"
#include <iostream>

using namespace std;

//Point::Point()
//{
//    Point(double a = 0,double b = 0){ x = a; y = b ;}
  //  void Set(double a, double b){ x = a; y = b;}
    //void Show(){ cout<< "(" << x << "," << y << ")" << endl;}

//}

double x;
double y;

Point::Point(double a,double b){
    x = a;
    y = b;
}

void Point::Set(double a,double b){
    x = a;
    y = b;
}

void Point::Show(){
     cout<< "(" << x << "," << y << ")" << endl;
}

void Point::Add(){
    x++;
    y++;
}
