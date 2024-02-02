/*
La calificacion final de un alumno es la media ponderada de tres notas:
La nota de practicas cuenta un 30% del total, la nota teórica un 60% y
la nota de participación es el 10% restante. Escriba un programa
que lea de la entrada estándar las tres notas de un alumno y escriba
en la salida estándar su nota final.
*/

#include<iostream>

using namespace std;

int main()
{
    float Ps, T, Pa, nota;

    cout<<"Inserte la nota de practicas: "; cin>>Ps;
    cout<<"Inserte la nota de teoría: "; cin>>T;
    cout<<"Inserte la nota de participación: "; cin>>Pa;

    nota = (Ps*0.3)+(T*0.6)+(Pa*0.1);

    cout<<"Su nota es: "<<nota<<endl;

    return 0;
}