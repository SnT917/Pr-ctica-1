#include <iostream>
using namespace std;

//Ejercicio 2. Escriba un programa que pida un número N e imprima en pantalla si es par o impar.
//Ej: si se ingresa 5 se debe imprimir:
//5 es impar

int main(){

    int num;
    cout<<"Escriba un numero: ";
    cin >> num; //The algorithm captures the number ingresed by the user.
    cout<<"El número que usted escribio es: "<<num<<endl; //Shows the number choosed by the user.

    if(num%2==0){ //Now, compares the mod of the number with 2.
        cout<<"El número "<<num<<" es par."<<endl; //In case that the mod result is 0, we conclude that it's a even number. 
        }
    else{
        cout<<"El número "<<num<<" es impar."<<endl; //Otherwise, if is different of zero, it's a odd number.
        }
    }
