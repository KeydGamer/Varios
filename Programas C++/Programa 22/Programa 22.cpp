// Tabla de multiplicar, el ejemplo está hecho para m = 10

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int n, m;

    do{
        cout<<"Digite un número entre 1 y 10: "; cin>>n;
    } while ((n<1) || (n>10));
    cout<<"Digite el número hasta el que desea multiplicar el anterior: "; cin>>m;
    
    for(int i; i<=m; i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    cout<<"\n\n";
    system("pause");

    return 0;
}