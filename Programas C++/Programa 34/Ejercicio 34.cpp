/*Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo*/

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
    int n, r;
    cout<<"Digite la cantidad de elementos en el array: "; cin>>n;
    int a[n], a1[5];
    for (int i = 0; i<=n; i++)
    {
        cout<<"Inserte el elemento para el array: "; cin>>a[i];
    }
    for (int i = 0; i<=4; i++)
    {
        r = rand()%(n+1);
        a[r]*=2; 
        a1[i] = a[r];
        cout<<a1[i]<<endl;
    }
    cout<<"\n\n\n";
    system("pause");

    return 0;
}