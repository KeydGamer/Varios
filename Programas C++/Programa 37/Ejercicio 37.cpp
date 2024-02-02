/* Hacer una matriz preguntando al usuario la cantidad de filas y columnas, llenarla de números aleatorios, copiar el contenido a
otra matriz y por último mostrarla en la pantalla*/

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
    int nf, nc, r;
    cout<<"Digite el numero de filas y columnas: "<<endl; cin>>nf>>nc;
    int m[nf][nc], m1[nf][nc];
    srand(time(NULL));
    for (int i = 0; i<nf; i++)
    {
        for(int j = 0; j<nc; j++)
        {   
            r = rand() % 101;
            m[i][j] = r;
            m1[i][j] = m[i][j];
            cout<<m1[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n\n";
    system("pause");
    return 0;
}