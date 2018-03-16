#include <iostream>
using namespace std;

//Ejercicio 16. Escriba un programa que pida constantemente números hasta que se ingrese el nú-
//mero cero e imprima en pantalla el promedio de los números ingresados (excluyendo el cero).
//Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
//El promedio es: 2

int main()
{
    int n, suma=0, prom, num=0; //Declaramos las variables, siendo n los valores ingresados por el usuario, la suma
    //que es la suma sucesiva de estos, el promedio que será el resultado de la suma divido el número de datos.

    do{
     cout << "Ingrese un numero: "; //Entrará en el ciclo por primera vez y le preguntará al usuario sucesivamente
     //valores.
     cin >> n;
        if(n==0){
            num+=0; //Condición en caso de qué el valor ingresado sea 0, es decir que el ciclo se detiene.
            break;
        }
        else{
            num+=1; //Sí el valor ingresado no es 0, entonces aumentaremos el numero de valores en 1.
        }
     suma = n+suma; //Suma de los valores ingresados por cada ciclo.
    }
     while(n!=0);
        prom = suma/num; //Promedio de la suma de los datos sobre el número de datos ingresados.
        cout <<"El promedio es: "<<prom<<endl; //Resultado.

    return 0;
}
