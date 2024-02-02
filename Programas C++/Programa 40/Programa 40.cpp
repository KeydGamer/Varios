//Cadenas de caracteres

#include<iostream>
#include<stdlib.h>
#include<string.h>


using namespace std;

int main(){
    char palabra[20] = "Keydan";
    char palabra2[20] = {'K', 'e', 'y', 'd', 'a', 'n', '1'};
    char nombre[30];
    //Para que las cadenas no se "superpongan" hay que definir la cantidad de elementos que van a tener
    
    cout<<palabra<<endl;
    cout<<palabra2<<endl;

    //cin se detiene al ver un espacio y deja de leer en adelante
    /*cout<<"Digite su nombre: "; cin>>nombre;
    cout<<"Su nombre es: "<<nombre<<endl;
    system("pause");*/
    //En cambio, con gets()
    /*cout<<"Digite su nombre: "; gets(nombre);
    cout<<"Su nombre es: "<<nombre<<endl;*/
    //El problema de gets es que agarra espacios que no le pertenecen, para eso está cin.getlin(nombre de variable, cantidad de caracteres, cuando quiero que termine)
    cout<<"Digite su nombre: "; cin.getline(nombre, 20,'\n');
    cout<<"Su nombre es: "<<nombre<<endl;
    system("pause");
    return 0;
}