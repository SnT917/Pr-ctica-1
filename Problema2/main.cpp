#include <iostream>
using namespace std;

//Problema 2. Se necesita un programa que permita determinar la mínima combinación de billetes
//y monedas para una cantidad de dinero determinada. Los billetes en circulación son de $50.000,
//$20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.

//Hacer un programa que entregue el número de billetes y monedas de cada denominación para com-
//pletar la cantidad deseada. Si por medio de los billetes y monedas disponibles no se puede lograr la

//cantidad deseada, el sistema deberá decir lo que resta para lograrla.
//Ej: si se ingresa 47810, el programa debe imprimir:
//50000 : 0
//20000: 2
//10000 : 0
//5000: 1
//2000 : 1
//1000: 0
//500 : 1
//200: 1
//100 : 1
//50: 0
//Faltante: 10

int main()
{
    int n, cincuentamil, veintemil, veintemil2, diezmil, diezmil2, diezmil3, cincomil, cincomil2, cincomil3, cincomil4, dosmil, dosmil2, dosmil3, dosmil4, dosmil5, mil, mil2, mil3, mil4, mil5, mil6, quinientos, quinientos2, quinientos3, quinientos4, quinientos5, quinientos6, quinientos7, doscientos, doscientos2, doscientos3,  doscientos4, doscientos5, doscientos6, doscientos7, doscientos8, cien, cien2, cien3, cien4, cien5, cien6, cien7, cien8, cien9, cincuenta, cincuenta2, cincuenta3, cincuenta4, cincuenta5, cincuenta6, cincuenta7, cincuenta8, cincuenta9, cincuenta10, resto, resto2, resto3, resto4, resto5, resto6, resto7, resto8, resto9, resto10;
    //declarar todas las variables que hacen una operación.
    cout<<"Ingrese la cantidad a devolver: ";
    cin>>n;

    cincuentamil = n/50000; //División por 50 mil

    veintemil = n - (cincuentamil*50000); //Resta del valor total por el anterior y dividido por el siguiente valor.
    veintemil2 = veintemil/20000;

    diezmil = n - (cincuentamil*50000);
    diezmil2 = diezmil - (veintemil2*20000); //Así sucesivamente restamos el valor del anterior y obtenemos todos los valores desde 50 mil hasta 50 pesos.
    diezmil3 = diezmil2/10000;

    cincomil = n - (cincuentamil*50000);
    cincomil2 = cincomil - (veintemil2*20000);
    cincomil3 = cincomil2 - (diezmil3*10000);
    cincomil4 = cincomil3/5000;

    dosmil = n - (cincuentamil*50000);
    dosmil2 = dosmil - (veintemil2*20000);
    dosmil3 = dosmil2 - (diezmil3*10000);
    dosmil4 = dosmil3 - (cincomil4*5000);
    dosmil5 = dosmil4/2000;

    mil= n - (cincuentamil*50000);
    mil2 = mil - (veintemil2*20000);
    mil3 = mil2 - (diezmil3*10000);
    mil4 = mil3 - (cincomil4*5000);
    mil5 = mil4 - (dosmil5*2000);
    mil6= mil5/1000;

    quinientos = n - (cincuentamil*50000);
    quinientos2 = quinientos - (veintemil2*20000);
    quinientos3 = quinientos2 - (diezmil3*10000);
    quinientos4 = quinientos3 - (cincomil4*5000);
    quinientos5 = quinientos4 - (dosmil5*2000);
    quinientos6 = quinientos5 - (mil6*1000);
    quinientos7 = quinientos6/500;

    doscientos = n - (cincuentamil*50000);
    doscientos2 = doscientos - (veintemil2*20000);
    doscientos3 = doscientos2 - (diezmil3*10000);
    doscientos4 = doscientos3 - (cincomil4*5000);
    doscientos5 = doscientos4 - (dosmil5*2000);
    doscientos6 = doscientos5 - (mil6*1000);
    doscientos7 = doscientos6 - (quinientos7*500);
    doscientos8 = doscientos7/200;

    cien = n - (cincuentamil*50000);
    cien2 = cien - (veintemil2*20000);
    cien3 = cien2 - (diezmil3*10000);
    cien4 = cien3 - (cincomil4*5000);
    cien5 = cien4 - (dosmil5*2000);
    cien6 = cien5 - (mil6*1000);
    cien7 = cien6 - (quinientos7*500);
    cien8 = cien7 - (doscientos8*200);
    cien9 = cien8/100;

    cincuenta = n - (cincuentamil*50000);
    cincuenta2 = cincuenta - (veintemil2*20000);
    cincuenta3 = cincuenta2 - (diezmil3*10000);
    cincuenta4 = cincuenta3 - (cincomil4*5000);
    cincuenta5 = cincuenta4 - (dosmil5*2000);
    cincuenta6 = cincuenta5 - (mil6*1000);
    cincuenta7 = cincuenta6 - (quinientos7*500);
    cincuenta8 = cincuenta7 - (doscientos8*200);
    cincuenta9 = cincuenta8 - (cien9*100);
    cincuenta10 = cincuenta9/50;

    resto=n - (cincuentamil*50000);
    resto2 = resto - (veintemil2*20000);
    resto3 = resto2 - (diezmil3*10000);
    resto4 = resto3 - (cincomil4*5000);
    resto5 = resto4 - (dosmil5*2000);
    resto6 = resto5 - (mil6*1000);
    resto7 = resto6 - (quinientos7*500);
    resto8 = resto7 - (doscientos8*200);
    resto9 = resto8 - (cien9*100);
    resto10 = resto9 - (cincuenta10*50);

    cout<<"$50.000: "<<cincuentamil<<endl; //Imprimir los valores obtenidos en cada resta y división.
    cout<<"$20.000: "<<veintemil2<<endl;
    cout<<"$10.000: "<<diezmil3<<endl;
    cout<<"$5.000: "<<cincomil4<<endl;
    cout<<"$2.000: "<<dosmil5<<endl;
    cout<<"$1.000: "<<mil6<<endl;
    cout<<"$500: "<<quinientos7<<endl;
    cout<<"$200: "<<doscientos8<<endl;
    cout<<"$100: "<<cien9<<endl;
    cout<<"$50: "<<cincuenta10<<endl;
    cout<<"Resto: "<<resto10<<endl;

}

