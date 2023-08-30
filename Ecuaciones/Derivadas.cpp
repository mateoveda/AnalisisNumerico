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
    return (-0.874*2*x+1.750);
}

double Derivadas::der3(double _x){
    x=_x;
    return (-23.330+79.350-88.090*2*x+41.600*3*pow(x,2)-8.680*4*pow(x,3)+0.658*5*pow(x,4));
}

double Derivadas::der4(double _x){
    x=_x;
    return (1/x);
}

double Derivadas::der5(double _x){
    x=_x;
    return (1/pow(x,2));
}
