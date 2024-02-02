//Programa de temperatura, temp máxima, mínima y media

#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

main()
{
    float temp, min = 100, max = -100, med = 0;
    int m;
    cout<<"Inserte la cantidad de veces que quiere medir la temperatura: "; cin>>m;
    for(int i = 1; i<=m; i++)
    {
    cout<<"Inserte la temperatura: "; cin>>temp;

    if (temp>max)
    {
        max = temp;
    }
    else if (temp < min)
    {
        min = temp;
    }
    med += (temp/m);
    }

    cout<<"La temperatura máxima fue de "<<max<<endl;
    cout<<"La temperatura mínima fue de "<<min<<endl;
    cout<<"La temperatura promedio fue de "<<med<<endl;
    cout<<"\n\n";

    system("pause");

    return 0;
}