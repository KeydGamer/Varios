// Suma de los cuadrados de los 10 primeros enteros mayores que 0

#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int s;
    for(int i = 1; i<=10; i++)
    {
        s += pow(i,2);
        cout<<s<<endl;
    }
    cout<<"La suma de los 10 primeros cuadrados es "<<s;

    cout<<"\n\n";
    system("pause");

    return 0;
}