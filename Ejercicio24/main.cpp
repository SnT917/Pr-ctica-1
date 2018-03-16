#include <iostream>
#include <stdio.h>
using namespace std;

//Ejercicio 24. Escriba un programa que pida una número entero e imprima un cuadrado de dicho
//tamaño, los bordes del cuadrado deben estar hechos con el carácter `+' y el interior debe estar vacío.
//Ej: si se ingresa 4 se debe imprimir:
//++++
//+ +
//+ +
//++++

int main()
{

    int num, a, b; //Declaramos los valores del tamaño, de las columnas y de las filas.

    cout<<"Ingrese el tamaño para el cuadrado: ";
    cin>>num;

    for(b=1; b <= num; b++){ //Dos for internos, encargados de hacer las filas y las columnas.
        for(a=1; a<= num; a++){
            if(b==1 || b== num){ //Condicional comparativo de fila columna, para saber sí es un espacio o un marco (Contado).
                cout<<"+";
            }
            else if(a == 1 || a == num){ //Espacio o signo.
                cout<<"+";
            }
            else{
                cout<<" "; //Contador que se encarga de ver el espacio entre fila y columna para "llenar" con un espacio vacio la parte interna del cuadrado.
            }
        }
        cout<<"\n"; //Salto de linea en cada columna.
    }
}
