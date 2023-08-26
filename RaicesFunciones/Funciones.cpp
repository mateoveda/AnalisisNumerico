//
// Created by Mateo on 24/8/2023.
//

#include "Funciones.h"
#include <cmath>
using namespace std;

Funciones::Funciones(){
    x = 0;
}

double Funciones::funcion1(double _x){
    x=_x;
    return (exp(-x)-x);
}

double Funciones::funcion2(double _x){
    x=_x;
    return (-0.874*pow(x,2)+1.750*x+2.627);
}

double Funciones::funcion3(double _x){
    x=_x;
    return (-23.330+79.350*x-88.090*pow(x,2)+41.600*pow(x,3)-8.680*pow(x,4)+0.658*pow(x,5));
}

double Funciones::funcion4(double _x){
    x=_x;
    return (log(x)-5);
}

double Funciones::funcion5(double _x){
    x=_x;
    return ((1-0.6*x)/-x);
}
