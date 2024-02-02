//Leer tres numeros, posteriormente leer un cuarto y determinar si coincide con alguno de los anteriores

#include<iostream>

using namespace std;

int main()
{
    int n1, n2, n3, n4;

    cout<<"Digite tres numeros: "<<endl; cin>>n1>>n2>>n3;
    cout<<"Digite un cuarto numero: "; cin>>n4;
    
    if ((n4 == n1) || (n4 == n2) || (n4 == n3))
    {
        cout<<n4<<" es un numero anteriormente digitado";
    }
    else
    {
        cout<<n4<<" no se ha digitado anteriormente";
    }




    return 0;
}