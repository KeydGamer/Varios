/*Suma de matrices cuadradas de 3x3*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int m1[3][3], m2[3][3], m3[3][3];
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            cout<<"Inserte el elemento de ["<<i<<"]["<<j<<"] para la matriz 1: "; cin>>m1[i][j];
        }
    }
    cout<<"\n";
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            cout<<"Inserte el elemento de ["<<i<<"]["<<j<<"] para la matriz 2: "; cin>>m2[i][j];
        }
    }
    cout<<"\n La suma de las matrices es: \n";
    for (int i = 0; i<3; i++)
    {
        cout<<"|";
        for (int j = 0; j<3; j++)
        {
            m3[i][j] = m1[i][j]+m2[i][j];
            cout<<m3[i][j]<<" ";
        }
        cout<<"|\n";
    }
    cout<<"\n\n";
    system("pause");
    return 0;
}