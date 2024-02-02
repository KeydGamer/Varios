// Hipotenusa

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    float c1, c2, h;

    cout<<"Inserte el primer cateto: "; cin>>c1;
    cout<<"Inserte el segundo cateto: "; cin>>c2;
    
    h = pow((pow(c1, 2) + pow(c2, 2)), 0.5);


    cout<<"La hipotenusa es: "<<h<<endl;

    return 0;
}