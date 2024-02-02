/* Programa que realice el producto de dos matrices de 3x3*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int m1[3][3] = {2,0,1 , 3,0,0 , 5,1,1}, m2[3][3] = {1,0,1 , 1,2,1 , 1,1,0}, m3[3][3];

    for (int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            switch(i)
            {
                case 0: switch(j)
                {
                case 0: m3[i][j] = (m1[i][j]*m2[i][j])+(m1[i][j+1]*m2[i+1][j])+(m1[i][j+2]*m2[i+2][j]); break;
                case 1: m3[i][j] = (m1[i][j-1]*m2[i][j])+(m1[i][j]*m2[i+1][j])+(m1[i][j+1]*m2[i+2][j]); break;
                case 2: m3[i][j] = (m1[i][j-2]*m2[i][j])+(m1[i][j-1]*m2[i+1][j])+(m1[i][j]*m2[i+2][j]); break;
                } break;
                case 1: switch(j)
                {
                case 0: m3[i][j] = (m1[i][j]*m2[i-1][j])+(m1[i][j+1]*m2[i][j])+(m1[i][j+2]*m2[i+1][j]); break;
                case 1: m3[i][j] = (m1[i][j-1]*m2[i-1][j])+(m1[i][j]*m2[i][j])+(m1[i][j+1]*m2[i+1][j]); break;
                case 2: m3[i][j] = (m1[i][j-2]*m2[i-1][j])+(m1[i][j-1]*m2[i][j])+(m1[i][j]*m2[i+1][j]); break;
                } break;
                case 2: switch(j)
                {
                case 0: m3[i][j] = (m1[i][j]*m2[i-2][j])+(m1[i][j+1]*m2[i-1][j])+(m1[i][j+2]*m2[i][j]); break;
                case 1: m3[i][j] = (m1[i][j-1]*m2[i-2][j])+(m1[i][j]*m2[i-1][j])+(m1[i][j+1]*m2[i][j]); break;
                case 2: m3[i][j] = (m1[i][j-2]*m2[i-2][j])+(m1[i][j-1]*m2[i-1][j])+(m1[i][j]*m2[i][j]); break;
                } break;
            }
            cout<<m3[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n\n";
    system("pause");
    return 0;
}