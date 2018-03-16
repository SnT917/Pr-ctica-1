#include <iostream>
using namespace std;

//Ejercicio 12. Escriba un programa que pida un número N e imprima todas las potencias desde N1 hasta N5.
//Ej: si se ingresa 3 se debe imprimir:
//3∧1=3
//3∧2=9
//3∧3=27
//3∧4=81
//3∧5=243

int main()
{
    int n, total, exp=1; //Declaramos las variables, siendo n el valor ingresado por el usuario, el total que es el producto en cada iteración, exponente que es valor que va desde 1 hasta 5.
    cout << "Ingrese un numero: ";
    cin >> n;
    for(total = 1; exp <= 5; exp++){
        total *= n;
        cout << n <<" elevado a la " <<exp<< " = "<<total<< endl; //Por cada iteración se imprimirá el valor
        //de n elevado al exponente (del 1 al 5) que es total, luego en la siguiente iteración multiplicará el total
        //nuevamente por n hasta 5, obteniendo así los resultados.
            }

    return 0;
}
