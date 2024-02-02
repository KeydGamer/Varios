/* Programa que determine si una matriz es simetrica:
Una matriz es simetrica si es cuadrada y su transpuesta es igual a su original:

|8 1 3|     |8 1 3|
|1 7 4| --> |1 7 4|
|3 4 9|     |3 4 9|*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int nf, nc;
    cout<<"Digite el numero de filas y columnas de su matriz: "; cin>>nf>>nc;
    if(nf == nc)
    {
        int m[nf][nc];
        for(int i = 0; i<nf; i++)
        {
            for(int j = 0; j<nc; j++)
            {
                cout<<"Digite el elemento de la posicion ["<<i<<"]["<<j<<"] "; cin>>m[i][j];
            }
        }
        for (int i = 0; i<nf; i++)
        {
            for (int j = 0; j<nc; j++)
            {
                if(m[i][j]!=m[j][i])
                {
                    cout<<"Su matriz no es simetrica \n\n"; system("pause"); return 0;
                }
            }
        }
        cout<<"Felicidades! Su matriz es simetrica";
    }
    else{
        cout<<"Su matriz no es simetrica";
    }
    cout<<"\n\n";
    system("pause");

    return 0;
}