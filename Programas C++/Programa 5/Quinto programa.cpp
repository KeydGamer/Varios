/*
Realice un programa que lea de la entrada estandar los siguientes datos de
una persona:

    Edad: Dato de tipo entero
    Sexo: Dato de tipo caracter
    Altura en metros: Dato de tipo real

Tras leer los datos, el programa debe mostrarlos en la salida estandra*/

#include<iostream>

using namespace std;

int main()
{
    int edad;
    char sexo[10];
    float altura;

    cout<<"Inserte su edad: "; cin>>edad;
    cout<<"Inserte su sexo: "; cin>>sexo;
    cout<<"Inserte su altura en metros: ", cin>>altura;
    cout<<"Su edad es: "<<edad<<endl;
    cout<<"Su sexo es: "<<sexo<<endl;
    cout<<"Su altura es: "<<altura;

    return 0;
}