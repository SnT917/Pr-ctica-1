#include <iostream>
using namespace std;

//Problema 10. Escriba un programa que reciba un número n e imprima el enésimo número primo.
//Ej: Si recibe 4 el programa debe imprimir 7.
//Nota: la salida del programa debe ser: El primo numero 4 es: 7.

int main(){
    int n, c, num=1, primo=0, div=0, pos=0; //Declaramos las variables, siendo n el valor ingresado por el usuario, c y num que son los valores
    //que se dividen para ver sí son números primos, el div es la cantidad de veces en que el residuo de la divión de c y num es igual a 2 
    //(es un número primo), primo que es la variable que me almacena el valor en cada iteración y pos que es la variable que hará las iteraciones desde
    //0 hasta n, cuando pos = n, entonces encontró el enésimo término buscado.
    cout << "Ingrese el valor para encontrar el enésimo término primo correspondiente: ";
    cin>>n;
    
    while(pos!=n){
		for(c=1; c<=num; c++){
			if(num%c==0){
				div++; //Hacemos las divisiones en ciclo, para ver sí num es divisible por la variable c.
				}
			}
			
		if(div==2){ //Si el conteo de las divisiones fue igual a 2, entonces el número es primo.
		primo = num;
		pos++; //Aumentamos la posición para continuar con el siguiente valor.
		}
		num++; //Aumentamos el num de la divisiones.
		div=0; //Re-inicializamos el conteo de divisiones.
	}
	cout<<"El enésimo número primo en la posición "<<n<<" es: "<<primo<<endl;
 
    return 0;
}
