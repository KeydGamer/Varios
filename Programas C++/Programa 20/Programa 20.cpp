/* Do while

    do
    {
        instrucciones;
    } while(expresión lógica);
    */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int i=10;

    do
    {
        cout<<i<<endl;
        i--;
    } while (i>=1);

    system("pause");

    return 0;
}