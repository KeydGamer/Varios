/*Realice un programa que defina dos vectores de caracteres y después
almacene el contenido de ambos vectores en un nuevo vector, situando en
primer lugar los elementos del primer vector seguido por los elementos
del segundo. Muestre el contenido del nuevo vector en la salida estándar*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int a1[5] = {1, 3, 4, 5, 2}, a2[4] = {4, 9, 10, 32}, a3[100];
    for (int i = 0; i<=4; i++)
    {
        a3[i]=a1[i];
    }
    for (int i=5; i<=9; i++)
    {
        a3[i]=a2[i-5];
    }
    for(int i = 0; i<=8; i++)
    {
       cout<<a3[i]<<endl;
    }
    cout<<"\n\n\n";
    system("pause");

    return 0;
}