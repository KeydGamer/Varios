/* Cree un programa que lea una matriz 3x3 y cree su matriz transpuesta. 
La matriz transpuesta es aquella en la que la columna i era la fila i de la matriz original

|1 2 3|     |1 4 7|
|4 5 6|  -->|2 5 8|
|7 8 9|     |3 6 9| */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int m[3][3], m1[3][3];


    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cout<<"Digite un numero ["<<i<<"]["<<j<<"] ";
            cin>>m[i][j];
        }
    }
    
    cout<<"Matriz original: \n";
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Matriz transpuesta: \n";
    for (int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            m1[i][j] = m[j][i];
            cout<<m1[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n\n";
    system("pause");
    return 0;
}