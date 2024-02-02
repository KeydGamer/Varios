/*Programa que defina un vector de números y calcule si existe algún número
en el vector cuyo valor equivale a la suma del resto de números del vector*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int n, s;
    cout<<"Digite la cantidad de valores en su array: "; cin>>n;
    int a[n];
    n--;
    for (int i = 0; i<=n; i++)
    {
        cout<<"Escriba el valor a insertar en el array: "; cin>>a[i];
    }
    for (int i = 0; i<=n; i++)
    {
        s = 0;
        for (int m = 0; m<=n; m++)
        {
            s += a[m];
        }
        s -= a[i];
        if (s == a[i])
        {
            cout<<a[i]<<" es el resultado de sumar el resto de elementos en el array";
        }
    }
    cout<<"\n\n\n";
    system("pause");
    return 0;
}