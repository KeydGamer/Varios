//Menu con el cubo de un numero, determinacion de si es par o impar y salir.

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n, opt;

    cout<<"Inserte un número: "; cin>>n;

    cout<<"Elija lo que desea hacer con el número: "<<endl;
    cout<<"1. Elevarlo al cubo"<<endl<<"2. Determinar si es par o impar"<<endl;
    cout<<"3. Salir"<<endl; cin>>opt;

    switch (opt){
        case 1: n = pow(n, 3); cout<<n<<" es el número elevado al cubo"; break;
        case 2: if (n%2 == 0)
        {
            cout<<n<<" es par"; break;
        }
        else  {
            cout<<n<<" es impar"; break;
        }

        case 3: break;
        default: "Digite un número válido"; break;
    }




    return 0;
}