#include <iostream>
using namespace std;

int main()
{
    int x, fact = 1;
    cout << "Ingrese un numero: "; cin >> x; 
    for(int i = 1; i <= x; i++)
        fact = fact*i; 

    cout <<"El factorial de "<<x<<" es "<<fact<<endl; 
    return 0;
}
