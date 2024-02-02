// Escriba un programa que calcule el valor de: 2^1 + 2^2 + 2^3 +...+2^n

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
    int n, s=0;

    cout<<"Digite un valor para obtener la sumatoria de las potencias de 2: "; cin>>n;

    for(int i = 1; i<=n; i++)
    {
        s += pow(2,i);
    }
    cout<<s<<" es la sumatoria de todas las potencias de 2 hasta "<<n<<endl;
    cout<<"\n\n";
    system("pause");


    return 0;
}