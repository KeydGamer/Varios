//Escriba un programa que calcule el valor de 1+2+3+...n

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int sum, n;

    cout<<"Inserte el número hasta el que desee sumar: "; cin>>n;

    for (int i = 1; i<=n; i++)
    {
        sum += i;
    }

    cout<<sum<<" es la suma de todos los números hasta "<<n;

    cout<<"\n\n\n";
    system("pause");


    return 0;
}