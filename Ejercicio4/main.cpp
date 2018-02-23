#include <iostream>
using namespace std;

//Ejercicio 4. Escriba un programa que pida dos números A y B e imprima en pantalla el menor.
//Ej: si se ingresan 7 y 3 se debe imprimir:
//El menor es 3

int main(){
    int A, B;
    cout << "Ingrese el primer número: ";
    cin >> A; //The user put's the first number.
    cout << "Ingrese el segundo número: ";
    cin >> B; //The user put's the second number.

    if(A>B){ //This condition compare if the first number is bigger than the second one, if that is the case, the program will show the second number (Smaller one).
        cout <<B<<" es el número menor"<<endl;
           }
    else{
        cout <<A<<" es el número menor"<<endl; //Otherwise, will show the first one.
        }

    return 0;
}
