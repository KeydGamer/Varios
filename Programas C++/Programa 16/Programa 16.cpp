/* Escriba un programa que solicite una edad (entero) e indique en la salida
estándar si la edad introducida está en el rango [18-25]*/

#include<iostream>

using namespace std;

int main(){
    int edad;

    cout<<"Introduzca una edad en años: "; cin>>edad;

    /*if (edad <= 25)
    {
        if (edad >= 18)
        {
            cout<<"La edad está entre 18 y 25 años";
        }
        else
        {
            cout<<"La edad es menor a 18 años";
        }
    }
    else
    {
        cout<<"La edad es mayor a 25 años";
    }
    */
   //De forma más eficiente:

   if ((edad >= 18)&&(edad <= 25))
   {
    cout<<"La edad está entre 18 y 25 años";
   }
   else
   {
    cout<<"La edad NO está entre 18 y 25 años";
   }
    return 0;
}