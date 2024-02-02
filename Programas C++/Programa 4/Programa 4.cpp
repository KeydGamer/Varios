// Operaciones aritmeticas

/*
Escribe un programa que lea la entrada estandar de dos numeros y muestre
en la salida su: suma, resta, multiplicacion y division

*/


#include<iostream>

using namespace std;

int main()
{
    float numero1, numero2, suma, resta, multiplicacion, division;

    cout<<"Escriba un numero"<<endl; cin>>numero1;
    cout<<"Escriba otro numero"<<endl; cin>>numero2;

    suma = numero1 + numero2;
    resta = numero1 - numero2;
    multiplicacion = numero1*numero2;
    division = numero1/numero2;
    cout<<"Las cuatro operaciones aritmeticas son:"<<endl;
    cout<<"Suma: "<<suma<<endl;
    cout<<"Resta: "<<resta<<endl;
    cout<<"Multiplicacion: "<<multiplicacion<<endl;
    cout<<"Division: "<<division;

    return 0;


}