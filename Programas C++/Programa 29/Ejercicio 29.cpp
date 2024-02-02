// Programa que descomponga un número en sus factores primos un entero

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int n, fs, c;

    cout<<"Inserte un número para descomponerlo en sus factores primos: "; cin>>n;
    c = n;
    for (int i = 2; i<=n; i++)
    {
        if(c==1)
        {
            break;
        }
        else if((c%i)==0)
        {
            cout<<i<<"*";
            c /= i;
            i = 1;
        }
    }
    cout<<"1 son los factores primos de "<<n<<endl;
    cout<<"\n\n";
    system("pause");


    return 0;
}