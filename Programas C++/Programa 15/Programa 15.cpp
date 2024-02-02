/*Escriba un programa que lea de la entrada estándar un caracter y determine
en la salida si es una vocal minúscula o no*/

#include<iostream>

using namespace std;

int main()
{
    char a;

    cout<<"Escriba un caracter: "; cin>>a;

    /*if (a == 'a')
    {
        cout<<"Su caracter es una vocal minúscula";
    }
    else
    {
        if (a == 'e')
        {
            cout<<"Su caracter es una vocal minúscula";
        }
        else if (a == 'i')
        {
            cout<<"Su caracter es una vocal minúscula";
        }
        else if (a == 'o')
        {
            cout<<"Su caracter es una vocal minúscula";
        }
        else if (a == 'u')
        {
            cout<<"Su caracter es una vocal minúscula";
        }
        else{
            cout<<"Su caracter no es una vocal minúscula";
        }
    }   
    */
   //Mediante el uso de switch:
   switch (a)
   {
    case 'a': 
    case 'e': 
    case 'i': 
    case 'o': 
    case 'u': cout<<a<<" es una vocal minúscula"; break;
    case 'A': 
    case 'E': 
    case 'I': 
    case 'O': 
    case 'U': cout<<a<<" es una vocal mayúscula"; break;
    default: cout<<a<<" no es una vocal"; break;
   }
    return 0;
}