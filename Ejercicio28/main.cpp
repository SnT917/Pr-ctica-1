#include <iostream>
using namespace std;

//Ejercicio 28. Escriba un programa que encuentre el valor aproximado de pi en base a la serie de Leibniz
//si el usuario ingresa el 3, entonces la salida sería:
//pi es aproximadamente: 3.46667

int main()
{       
    float pi=0; //Declaramos a pi como un float.
    int n; //Valor de la sucesión ingresado por el usuario.
    bool signo = true; //Condición de la suma y resta en la sucesión.
    cout << "Ingrese la cantidad de aproximaciones para calcular PI: ";
    cin >> n;

    for(float x = 1; x<=n; x+=2){

        if(signo == true){
        pi = pi + 1/x; //Primera iteración en la cual se hará una suma de la serie de la forma 1, 1/3, 1/5, etc.
        signo = false; //Cambio del bool signo para que en la siguiente iteración reste.
        }

        else{
        pi = pi - 1/x;
        signo = true;
        }

    }
    cout<<"El valor aproximado de PI es: "<<pi*4<<endl; //Multiplicamos el valor de pi por 4 y obtenemos el valor.
    return 0;
}
