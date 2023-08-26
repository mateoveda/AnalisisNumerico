//
// Created by Mateo on 24/8/2023.
//

#ifndef ECUACIONES_METODOS_H
#define ECUACIONES_METODOS_H


#include <iostream>
#include "Funciones.h"
using namespace std;

class Metodos {
private:
    Funciones evaluar;
    double a,b,c,tolerancia,error;
public:
    Metodos();
    void setTolerancia(double);
    double elegirFuncion(int, double);
    void Biseccion(double, double ,int);
    void PuntoFijo(double, double ,int);
};


#endif //ECUACIONES_METODOS_H
