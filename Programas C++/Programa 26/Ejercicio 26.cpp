// Escriba un programa que calcule el valor de: 1!+2!+3!...+n! (suma de factoriales)

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int n, f = 1, s = 0;

    cout<<"Inserte el valor hasta el cual desea calcular la suma de sus factoriales: "; cin>>n;

    for (int i = 1; i<=n; i++)
    {
        f = 1;
        for (int m = 1; m<=i; m++)
        {
            f *=m;
        }
        s += f;
    }

   cout<<s<<" es la suma de los factoriales";

    cout<<"\n\n\n";
    system("pause");
    return 0;
}