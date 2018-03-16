#include <iostream>
using namespace std;

//Ejercicio 8. Escriba un programa que pida un número N e imprima en pantalla su factorial.
//Ej: si se ingresa 5: 5!=1*2*3*4*5=120, por lo que se debe imprimir:
//5!=120

int main()
{
    int x, fact = 1; //Declaramos las variables de tipo INT al input del usuario y al primer término de la sucesión multiplicativa del factorial.
    cout << "Ingrese un numero: "; cin >> x; //Capturamos el valor ingresado por el usuario.
    for(int i = 1; i <= x; i++)
        fact = fact*i; //Ciclo que va a multiplicar los valores desde 1 hasta n.

    cout <<"El factorial de "<<x<<" es "<<fact<<endl; //Resultado.
    return 0;
}
