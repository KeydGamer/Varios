/* Programa que solicite al usuario pensar en un número entero entre
el 1 y el 100. El programa debe generar un número aleatorio en ese mismo 
rango [1-100], e indicarle al usuario si el número que digitó es menor o
mayor al número aleatorio, así hasta que lo adivine. Y por último mostrarle
el número de intentos que le llevó.*/

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
    int n, r=0, c=0;


    srand(time(NULL)); //Genera número aleatorio

    r = 1 + rand() % (100 + 1 - 1); //Aleatoriza la variable

    do 
    {
        cout<<"Digite un número entre 1 y 100: "; cin>>n;
        if (n>100 || n<1)
        {
            c++;
        }
        else if(n>r)
        {
            cout<<n<<" es mayor que el número aleatorio, intente de nuevo"<<endl;
            c++;
        }
        else if (n<r)
        {
            cout<<n<<" es menor que el número aleatorio, intente de nuevo"<<endl;
            c++;
        }
    } while(n!=r);
    c++;
    cout<<"Muy bien, ha adivinado, le tomó "<<c<<" intento(s)!";
    cout<<"\n\n\n";
    system("pause");

    return 0;
}