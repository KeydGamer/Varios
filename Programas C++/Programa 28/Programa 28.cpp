// Hacer un programa que realice la serie de Fibonacci: 1,1,2,3,5,8...n

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int n, x=1, y=0, z=1;

    cout<<"Digite el número de elementos: "; cin>>n;

    for(int i=1; i<=n;i++)
    {
        z = x+y;
        cout<<z<<endl;
        x = y;
        y = z;
    }

    cout<<"\n\n";
    system("pause");
    return 0;
}