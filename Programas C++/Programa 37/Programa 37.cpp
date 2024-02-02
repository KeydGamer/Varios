/* Matriz de 2x2, llenarla de números y copiar todo su contenido a otra matriz*/

#include<iostream> 
#include<stdlib.h>

using namespace std;

int main()
{
    int m[2][2] = {1,2 , 3,4}, m1[2][2];

    for(int i = 0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            m1[i][j] = m[i][j];
            cout<<m1[i][j]<<" "; 
        }
        cout<<"\n";
    }


    cout<<"\n\n";
    system("pause");
    return 0;
}