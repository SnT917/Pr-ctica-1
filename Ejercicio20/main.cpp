#include <iostream>
using namespace std;

//Ejercicio 20. Escriba un programa que pida un número N e imprima si es o no un palíndromo
//(igual de derecha a izquierda que de izquierda a derecha).
//Ej: si se ingresa 121 se debe imprimir:
//121 es un numero palindromo.
//y si se ingresa 123 se debe imprimir:
//123 NO es un numero palindromo.

int main()
{
    int n, mod=0, inv; //Declaramos variables, n, el valor ingresado por el usuario, mod que es la división sucesiva para invertir el número
    //e invertido que es número n pero al revés.
    cout << "Ingrese un valor: ";
    cin >> n;
    inv = n;

    while(n>0){
        mod = mod*10+n%10;
        n = n/10; //Divisiones sucesivas para obtener el número inverso que ingresó el usuario.
              }
    if(inv==mod){ //Se compara sí el numero inverso es igual al número ingresado.
        cout<<inv<<" es un numero palindromo."<<endl; //Si es cierto, entonces es un número palíndromo.
                }
    else{
        cout<<inv<<" NO es un numero palindromo."<<endl; //Sino, no es un número palíndromo.
        }

    return 0;
}
