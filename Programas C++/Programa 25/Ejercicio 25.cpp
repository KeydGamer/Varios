// Programa que calcule 1+3+5+...2n-1

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int n, suma;

    cout<<"Inserte un número hasta el que realizar la suma: "; cin>>n;
    for(int i = 1; i<=(2*n)-1; i+=2)
    {
        suma += i;
    }

    cout<<"La suma es: "<<suma;

    cout<<"\n\n\n";
    system("pause");


    return 0;
}