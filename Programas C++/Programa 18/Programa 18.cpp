// Menú de cajero automático con una cuenta de 1000 inicialmente

#include<iostream>

using namespace std;

int main()
{
    int opt, sd = 1000, sdep, sr;

    cout<<"Por favor introduzca un número según la acción que desee realizar"<<endl;
    cout<<"1. Saldo disponible"<<endl;
    cout<<"2. Depositar saldo"<<endl;
    cout<<"3. Retirar fondos"<<endl;
    cout<<"Salir";
    cin>>opt;

    switch (opt)
    {
        case 1: cout<<"Su saldo es "<<sd; break;
        case 2: cout<<"Inserte la cantidad a depositar: "; cin>>sdep;
        sd += sdep;
        cout<<"Su nuevo saldo es de: "<<sd; break;
        case 3: cout<<"Inserte la cantidad a retirar: "; cin>>sr;
        if (sd >= sr)
        {
            sd -= sr;
            cout<<"Su nuevo saldo es de: "<<sd; break;
        }
        else
        {
            cout<<"No se pueden retirar más fondos de los que se tiene"; break;
        }
        case 4: break;
        default: cout<<"Inserte un número válido";
    }


    return 0;
}