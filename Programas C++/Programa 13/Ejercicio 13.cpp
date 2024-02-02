// Ejercicio 13

#include<iostream>

using namespace std;

int main()
{
    float n1, n2, n3;

    cout<<"Escriba tres numeros: "<<endl; cin>>n1>>n2>>n3;

    if (n1 > n2)
    {
        if (n3 > n1)
        {
            cout<<"Los numeros se muestran de forma descendente: "<<endl;
            cout<<n3<<endl<<n1<<endl<<n2;
        }
        else if (n3 > n2){
            cout<<"Los numeros se muestran de forma descendente: "<<endl;
            cout<<n1<<endl<<n3<<endl<<n2;
        }
        else {
            cout<<"Los numeros se muestran de forma descendente: "<<endl;
            cout<<n1<<endl<<n2<<endl<<n3;
        }
    }
    else
    {
        if (n3 > n2){
            cout<<"Los numeros se muestran de forma descendente: "<<endl;
            cout<<n3<<endl<<n2<<endl<<n1;
        }
        else if (n1 > n3){

        
        cout<<"Los numeros se muestran de forma descendente: "<<endl;
        cout<<n2<<endl<<n1<<endl<<n3;
        }
        else {
            cout<<"Los numeros se muestran de forma descendente: "<<endl;
            cout<<n2<<endl<<n3<<endl<<n1;
        }
    }

    return 0;
}