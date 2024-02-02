/*Switch
    switch(expresion){
        case literal1:
            instrucciones1;
            break;
        case literal2:
            instrucciones2;
            break;
        case literaln:
            instruccionesn;
            break;
        default:
            instrucciones por default;
            break;
    }

*/

#include<iostream>

using namespace std;

int main()
{
    int numero;

    cout<<"Digite un numero entre 1 y 5: "; cin>>numero;

    switch(numero){
        case 1: cout<<"Es el numero 1"; break;
        case 2: cout<<"Es el numero 2"; break;
        case 3: cout<<"Es el numero 3"; break;
        case 4: cout<<"Es el numero 4"; break;
        case 5: cout<<"Es el numero 5"; break;
        default: cout<<"Inserte un numero entre 1 y 5"; break;
    }


    return 0;
}