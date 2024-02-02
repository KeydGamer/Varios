/*Introduzca un programa que lea valores enteros hasta que se introduzca
un valor en el rango [20-30] o se introduzca el valor de 0. El programa
debe entregar la suma de los valores mayores a 0 introducidos.*/

#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int m, s;

    while((m != 0) && ((m < 20)||(m > 30)))
    {
        cout<<"Inserte un valor: "; cin>>m;
        if (m>0)
        {
        s += m;
        }
    }
    
    cout<<"La suma de los valores es: "<<s;
    cout<<"\n\n";
    system("pause");


    return 0;
}
