#include <iostream>
using namespace std;

int main()
{
    int n, total, exp=1;
    cout << "Ingrese un numero: ";
    cin >> n;
    for(total = 1; exp <= 5; exp++){
        total *= n;
        cout << n <<" elevado a la " <<exp<< " = "<<total<< endl; 
        
            }

    return 0;
}
