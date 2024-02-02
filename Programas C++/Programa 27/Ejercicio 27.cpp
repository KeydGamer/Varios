// Hacer un programa que calcule 1-2+3-4+5-6...n

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int s=0, n;
    cout<<"Inserte el número hasta el cual se desea hacer la serie: "; cin>>n;

    for (int i = 1; i<=n; i+=2)
    {
        s +=i;
    }
    for (int i=0; i<=n; i+=2)
    {
        s -= i;
    }
    cout<<s<<" es el resultado de la serie hasta "<<n<<endl;
    cout<<"\n\n";
    system("pause");

    return 0;
}