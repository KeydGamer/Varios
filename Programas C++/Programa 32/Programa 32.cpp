// Programa que lea de la entrada estándar un vector de números y muestre los números del vector con sus índices asociados

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int n, d;

    cout<<"Escriba la longitud de su lista: "; cin>>n;
    n--;
    int a[n];
    for(int i = 0; i<=n; i++)
    {   
        cout<<"Escriba los datos de su lista: ";
        cin>>a[i];

    }    
    for (int i = 0; i<=n; i++)
    {
        cout<<a[i]<<" está en la posición "<<i+1<<" de su lista"<<endl;
    }


    cout<<"\n\n\n";
    system("pause");
    return 0;
}
// Para el caso en el que se quiere el orden inverso, se va desde i = n hasta i=0, disminuyendo de 1 en 1