// Soluciones cuadráticas

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float a, b, c, x1, x2;

    cout<<"Escriba el valor de a: "; cin>>a;
    cout<<"Escriba el valor de b: "; cin>>b;
    cout<<"Escriba el valor de c: "; cin>>c;

    x1 = (-b+sqrt(pow(b, 2)-4*a*c))/(2*a);
    x2 = (-b-sqrt(pow(b, 2)-4*a*c))/(2*a);

    cout<<"Las soluciones a la ecuacion son: "<<endl<<"x1: "<<x1<<endl<<"x2: "<<x2<<endl;

    return 0;
}