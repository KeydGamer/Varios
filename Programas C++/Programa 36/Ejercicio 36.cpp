/* Programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la diagonal principal de la matriz*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int m[3][3];
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            cout<<"Escriba un elemento para "<<"["<<i<<"]"<<"["<<j<<"] ";
            cin>>m[i][j];
        }
    }

    for (int i = 0; i<3; i++)
    {
        for (int j = i; j==i; j++)
        {
            cout<<m[i][j];
        }
        cout<<"\n  ";
        if (i == 1)
        {
            cout<<"  ";
        }
    }

    cout<<"\n\n";
    system("pause");
    return 0;
}