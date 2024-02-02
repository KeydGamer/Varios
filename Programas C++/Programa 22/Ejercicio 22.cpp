/*Realice un programa que lea entradas estándar de números hasta
que se introduzca un cero. En ese momento el programa debe terminar
y mostrar en la salida estándar el número de valores mayores que 
cero leidos*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int n, i;
    do{
    cout<<"Introduzca cualquier número: "; cin>>n;
    if (n>0)
    {
        i++;
    }
    } while(n!=0);

    cout<<i<<" es el número de valores positivos escritos";




    return 0;
}