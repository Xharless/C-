/*
Hacer una estructura llamada corredor, en la cual se tendran los siguientes campos: 
- nombre
- edad
- sexo
- club
- pedir datos al usuario para un solo corredor y asi una categoria de competicion
    1. juvenil <= 18 años
    2. señot <= 40 años
    3. veterano > 40
posteriormente imprimir todos los datos del corredor, incluyendo su categoria de competencia
*/

#include <iostream>
#include <string.h>
using namespace std;


struct corredor{
    char nombre[20];
    int edad;
    char sexo[10];
    char club[20];
    char categoria[10];
}c1; // como solo pide para uno, se pude hacer asi, pero si son para mas, se pued hacer con un arreglo de struct

int main(){
    cout <<"Ingrese su nombre: "; cin.getline(c1.nombre,20,'\n');
    cout <<"Edad: "; cin>>c1.edad;
    fflush(stdin); // vaciar buffer
    cout <<"Sexo: "; cin.getline(c1.sexo,10,'\n');
    cout <<"Nombre del club: "; cin.getline(c1.club,20,'\n');
    if (c1.edad <= 18 ){
        strcpy(c1.categoria, "Juvenil");
    } else if (c1.edad <= 40){
        strcpy(c1.categoria, "Senior");
    } else if (c1.edad > 40){
        strcpy(c1.categoria, "Veterano");
    }

    cout<<"\nDatos del corredor" << endl;
    cout<<c1.nombre << endl;
    cout<<c1.edad<< endl;
    cout<<c1.sexo << endl;
    cout<<c1.club << endl;
    cout<<c1.categoria << endl;

    return 0;
}