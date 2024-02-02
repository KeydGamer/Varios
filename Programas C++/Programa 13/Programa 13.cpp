// Escriba un programa que lea 2 numeros y determine cual de ellos es mayor

#include<iostream>

using namespace std;

int main()
{
    float n1, n2;

    cout<<"Escriba dos numeros: "<<endl; cin>>n1>>n2;

    if (n1 == n2)
    {
        cout<<n1<<" es igual a "<<n2;
    }

    else if (n1 > n2)
    {
        cout<<n1<<" es mayor que "<<n2<<endl;
    }

    else
    {
        cout<<n1<<" es menor que "<<n2<<endl;
    }

    return 0;
}