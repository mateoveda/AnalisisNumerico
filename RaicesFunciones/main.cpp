#include <iostream>
#include "Metodos.h"
using namespace std;

int main(){
    int opciones=0, funcion=0;
    double a,b;
    bool seguir=true;
    Metodos met;
    cout<<"Ejercicio 1: Raices de RaicesFunciones Reales\n";
    cout<<"\n";
    while(seguir){
        cout<<"Menu de la guia de trabajo 1 de Analisis Numerico\n";
        cout<<"Introducir una de las siguientes opciones.\n";
        cout<<"1. Utilizar el metodo de la biseccion.\n";
        cout<<"2. Utilizar el metodo de Punto Fijo.\n";
        cout<<"3. Utilizar el metodo de Newton - Raphson.\n";
        cout<<"4. Utilizar el metodo de la secante.\n";
        cout<<"5. Salir del programa\n";
        cin>>opciones;
        switch (opciones){
            case 1://biseccion
                cout<<"\n";
                cout<<"Introducir el valor a.\n";
                cin>>a;
                cout<<"Introducir el valor b.\n";
                cin>>b;
                cout<<"Introducir el numero de ejercicio (del 1 al 5 de la guia 1)\n";
                cin>>funcion;
                cout<<"Tabla usando del metodo de la biseccion:\n";
                if(funcion<3){
                    met.setTolerancia(0.001);
                }else{
                    met.setTolerancia(0.0001);
                }
                met.Biseccion(a,b,funcion);
                cout<<"\n";
                break;
            case 2:
                //Punto fijo
                cout<<"\n";
                break;
            case 3:
                //Newton - Raphson
                cout<<"\n";
                break;
            case 4:
                //Secante
                cout<<"\n";
                break;
            case 5: //salir
                seguir = false;
                cout<<"Gracias por utilizar el programa - Mateo Josue Velasquez Borda - 2214715 - Ingenieria en Sistemas\n";
                break;
            default:
                cout<<"El valor introducido es incorrecto, por favor seleccione una opcion valida\n";
                cout<<"\n";
                break;
        }
    }
    return 0;
}
