// Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial)

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int n, f = 1;

    cout<<"Inserte un valor n para calcular n!: "; cin>>n;

    for(int i = 1; i<=n; i++)
    {
        f *= i;
    }

    cout<<n<<"! es "<<f;

    cout<<"\n\n\n";
    system("pause");
    return 0;
}