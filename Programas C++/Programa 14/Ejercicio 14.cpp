//Comprobar si el numero es positivo o negativo

#include<iostream>

using namespace std;

int main()
{
    int n;

    cout<<"Digite un numero: "; cin>>n;

    if(n == 0)
    {
        cout<<"El numero es 0";
    }
    else
    {
        if (n < 0)
        {
            cout<<"El numero es negativo";
        }
        else
        {
            cout<<"El numero es positivo";
        }
    }
    
    return 0;   
}