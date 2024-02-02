/*Arrays bidimensionales o matrices
    Syntaxis: tipo nombre[nfilas][ncolumnas]
    Ejemplo:
    */
#include<iostream>
using namespace std;

int main()
{
    int numeros[2][3] = {1,2,3 , 4,5,6};
    cout<<numeros[0][0];

    return 0;

}
//Parece ser como circular, si se pasa de su limite, vuelve como si fuera la fila 1