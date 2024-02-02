/* Programa para rellenar una matriz pidiendo al usuario el número de filas y columnas. Posteriormente mostrar la matriz en la pantalla*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int nf, nc;
    cout<<"Inserte el número de filas y columnas de la matriz respectivamente: "; cin>>nf>>nc;
    int m[nf][nc];

    //Almacenar los datos
    for (int i = 0; i<nf; i++)
    {
        for(int j = 0; j<nc; j++)
        {
            cout<<"Digite un número ["<<i<<"]["<<j<<"]";
            cin>>m[i][j];
        }
    }

    //Mostrando la matriz
    for (int i = 0; i<nf; i++)
    {
        for (int j = 0; j<nc; j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n\n";
    system("pause");
    return 0;
}