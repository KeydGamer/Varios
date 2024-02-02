// Escribe la siguiente expresion matematica como expresion en c++: a+b/c+d

#include<iostream>

using namespace std;

int main()
{
    float a, b, c, d, resultado;

    cout<<"Inserte el valor de a: "; cin>>a;
    cout<<"Inserte el valor de b: "; cin>>b;
    cout<<"Inserte el valor de c: "; cin>>c;
    cout<<"Inserte el valor de d: "; cin>>d;

    resultado = (a+b)/(c+d);

    cout.precision(3);
    cout<<"El valor de la expresion es: "<<resultado;

    return 0;
}