// Uso de if
/*if (a < b) comprueba si a < b
if (a <= b) comprueba si a es menor o igual a b
if (a >= b) comprueba si a es mayor o igual a b
if (a > b) comprueba si a es mayor que b
if (a == b) comprueba si a es igual a b
if (a != b) comprueba si a NO es igual a b*/

#include<iostream>

using namespace std;

int main()
{
    int numero, dato = 5;

    cout<<"Digite un numero: "; cin>>numero;

    if (numero >= dato)
    {
        cout<<"El numero es mayor o igual a 5";
    }
    else {
        cout<<"El numero es menor que 5";
    }

    return 0;
}