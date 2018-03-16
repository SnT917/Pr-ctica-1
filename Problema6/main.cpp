#include <iostream>
using namespace std;

//Problema 6. Escriba un programa que encuentre el valor aproximado del número de euler en base a la suma innita:

//El usuario debe ingresar el número de elementos usados en la aproximación.
//Ej: si se ingresa 3 e =
//1
//0! +
//1
//1! +
//1
//2! = 2,5

//Nota: el formato de salida debe ser: e es aproximadamente: 2.5

int main()
{
    float n,i,j,euler,num; //Declaramos las variables del número de sumas, los contadores factoriales y de las sumas, el resultado del factorial num.
    cout << "Ingrese el numero de aproximaciones para determinar Euler: "; cin>>n;
    if (n==0)cout<<"Euler es aproximadamente a 0"<<endl; //En caso de que el usuario ingrese el valor 0.
    else{
        euler=1;
        for(i=1;i<n;i++){ //En cada for el valor factorial en la sucesión irá aumentando y haciendo la suma.
            num=1;
            for(j=1;j<=i;j++){
                num*=j; //Cálculo del factorial de la expresión 1/num.
            }
            euler+=1/num; //Resultado de cada iteración.
        }
        cout<<"El valor de euler con "<<n<<" aproximaciones es: "<<euler<<endl;
    }
    return 0;
}
