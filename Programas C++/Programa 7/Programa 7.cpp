// Escriba la siguiente expresion como expresion en c++: a+b/c/d+e/f

#include<iostream>

using namespace std;

int main()
{
    float a, b, c, d, e, f, resultado;

    cout<<"Inserte el valor de a: "; cin>>a;
    cout<<"Inserte el valor de b: "; cin>>b;
    cout<<"Inserte el valor de c: "; cin>>c;
    cout<<"Inserte el valor de d: "; cin>>d;
    cout<<"Inserte el valor de e: "; cin>>e;
    cout<<"Inserte el valor de f: "; cin>>f;

    resultado = (a+(b/c))/(d+(e/f));

    cout.precision(3);
    cout<<"El resultado es: "<<resultado;
    
    return 0;
}