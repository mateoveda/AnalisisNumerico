//
// Created by Tobias on 28/8/2023.
//

#include "Derivadas.h"
#include <cmath>
using namespace std;

Derivadas::Derivadas(){
    x = 1;
}

double Derivadas::der1(double _x){
    x=_x;
    return ((-1)*exp(-x)-1);
}

double Derivadas::der2(double _x){
    x=_x;
    return (-0.874*pow(x,2)+1.750*x+2.627);
}

double Derivadas::der3(double _x){
    x=_x;
    return (-23.330+79.350*x-88.090*pow(x,2)+41.600*pow(x,3)-8.680*pow(x,4)+0.658*pow(x,5));
}

double Derivadas::der4(double _x){
    x=_x;
    return (log(x)-5);
}

double Derivadas::der5(double _x){
    x=_x;
    return ((1-0.6*x)/-x);
}
