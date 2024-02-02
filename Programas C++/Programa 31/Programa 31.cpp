// Suma de elementos en un array

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int n, suma = 0, d;
    
    cout<<"Introduzca la longitud del arreglo: "; cin>>n;
    int a[n];
    for (int i = 0; i<=n; i++)
    {
        cout<<"Inserte un valor para la posición "<<i<<" en el array: "; cin>>d;
        a[i] = d;
        suma += a[i];
    }
    cout<<"La suma de los elementos del array es: "<<suma;
     
    cout<<"\n\n\n";
    system("pause");

    return 0;
}
//Para multiplicar es solo cambiar el "+" en el for por un "*"
