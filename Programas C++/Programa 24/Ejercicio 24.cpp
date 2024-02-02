//Programa que calcule x^y, con x e y siendo enteros positivos sin usar pow

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int x, y, resultado;
    do{
    cout<<"Inserte los valores para la funcion x^y: "; cin>>x>>y;
    } while(y<0);
    if (y==0)
    {
        resultado = 1;
    }
    else {
    resultado = x;
    for(int i = 1; i<y; i++)
        resultado *=x;
    }
    cout<<x<<"^"<<y<<" = "<<resultado;
    cout<<"\n\n";
    system("pause");
    return 0;
}