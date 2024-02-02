/* Realice un esquema que lea un valor entero y determine si se trata de un
numero par o impar*/

#include<iostream>
#include<math.h>

using namespace std;


int main()
{
    int n;

    cout<<"Inserte un número: "; cin>>n;

    if (n%2==0)
    {
        cout<<"El numero es par";
    }
    else
    {
        cout<<"El numero es impar";
    }

    return 0;
}