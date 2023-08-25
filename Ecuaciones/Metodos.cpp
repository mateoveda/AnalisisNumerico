//
// Created by Mateo on 24/8/2023.
//

#include <iostream>
#include <cmath>
#include <iomanip>
#include "Metodos.h"
using namespace std;

Metodos::Metodos(){
    a = 0;
    b = 0;
    c = 0;
    tolerancia = 0.000001;
    error = 1;
}

void Metodos::setTolerancia(double Tolerancia){
    tolerancia = Tolerancia;
}

double Metodos::elegirFuncion(int caso, double _x) {
    double aux;
    switch(caso){
        case 1:
            aux = evaluar.funcion1(_x);
            break;
        case 2:
            aux = evaluar.funcion2(_x);
            break;
        case 3:
            aux = evaluar.funcion3(_x);
            break;
        case 4:
            aux = evaluar.funcion4(_x);
            break;
        case 5:
            aux = evaluar.funcion5(_x);
            break;
        default:
            aux = 0;
            break;
    }
    return aux;
}

void Metodos::Biseccion(double _a, double _b, int ejercicio){
    double aux=0;
    a = _a;
    b = _b;
    error = 100;
    c = (a+b)/2;
    cout << setw(5) << "a"
         << setw(12) << "b"
         << setw(12) << "c"
         << setw(16) << "f(a)"
         << setw(16) << "f(c)"
         << setw(18) << "f(a)*f(c)"
         << setw(12) << fixed << setprecision(6) << "error" << endl;

    cout << setw(5) << a
         << setw(12) << b
         << setw(12) << (c)
         << setw(16) << (elegirFuncion(ejercicio, a))
         << setw(16) << (elegirFuncion(ejercicio, c))
         << setw(18) << (elegirFuncion(ejercicio, a) * elegirFuncion(ejercicio, c))
         << setw(12) << fixed << setprecision(6) << "-" << endl;
    if(elegirFuncion(ejercicio,a)*elegirFuncion(ejercicio,c)<0){
        b=c;
    }else{
        a=c;
    }
    while(error>tolerancia){
        aux=c;
        c = (a+b)/2;
        error=fabs(aux-c);
        cout << setw(5) << a
             << setw(12) << b
             << setw(12) << c
             << setw(16) << elegirFuncion(ejercicio, a)
             << setw(16) << elegirFuncion(ejercicio, c)
             << setw(18) << elegirFuncion(ejercicio, a) * elegirFuncion(ejercicio, c)
             << setw(12) << fixed << setprecision(6) << error << endl;
        if(elegirFuncion(ejercicio,a)*elegirFuncion(ejercicio,c)<0){
            b=c;
        }else{
            a=c;
        }
    }
    cout << "\n Raiz encontrada: " << c << endl;
}

/*
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double funcion(double x) {
    return x * x - 4;
}

bool tieneCambioDeSigno(double a, double b) {
    return funcion(a) * funcion(b) <= 0;
}

void metodoBiseccion(double a, double b, double tolerancia, int iteracion = 1) {
    double c = (a + b) / 2;

    double valorFuncionEnC = funcion(c);
    double error = (b - a) / 2;

    cout << setw(5) << iteracion
         << setw(12) << a
         << setw(12) << b
         << setw(12) << c
         << setw(15) << funcion(a)
         << setw(15) << valorFuncionEnC
         << setw(15) << funcion(a) * valorFuncionEnC
         << fixed << setprecision(6) << setw(15) << error << endl;

    if (abs(valorFuncionEnC) < tolerancia || error < tolerancia) {
        cout << "\nRaiz encontrada: " << c << endl;
        return;
    }

    if (tieneCambioDeSigno(a, c)) {
        metodoBiseccion(a, c, tolerancia, iteracion + 1);
    } else if (tieneCambioDeSigno(c, b)) {
        metodoBiseccion(c, b, tolerancia, iteracion + 1);
    } else {
        cout << "No se encontro raiz en el intervalo [" << a << ", " << b << "]" << endl;
    }
}

int main() {
    double a, b, tolerancia;

    cout << "Ingrese el extremo izquierdo: " << endl;
    cin >> a;
    cout << "Ingrese el extremo derecho: " << endl;
    cin >> b;
    cout << "Ingrese la tolerancia: " << endl;
    cin >> tolerancia;

    if (!tieneCambioDeSigno(a, b)) {
        cout << "No se encontro raiz en el intervalo [" << a << ", " << b << "]" << endl;
    } else {
        metodoBiseccion(a, b, tolerancia);
    }

    return 0;
}
 */