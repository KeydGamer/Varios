/*Desarrolle un programa que lea de la entrada estándar un vector de enteros
y determine el mayor elemento del vector*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int n, d=0;
    cout<<"Digite la longitud de su lista: "; cin>>n;
    n--;
    int a[n];

    for (int i = 0; i<=n; i++)
    {
        cout<<"Digite un valor para añadir a su lista: "; cin>>a[i];
    }
    for (int i = 0; i<=n; i++)
    {
        if (a[i]>= d)
        {
            d = a[i];
        }
    }
    cout<<d<<" es el valor máximo de la lista.\n\n\n";
    system("pause");

    return 0;
}