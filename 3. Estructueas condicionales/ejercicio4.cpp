//Escriba un programa que solicite la edad e indique en la salida si la edad introducida esta en el rango [18-25]

#include <iostream>
using namespace std;

int main(){
    int edad;

    cout<<"Ingrese su edad: "; cin>>edad;
    if((edad>= 18) && (edad <= 25)){ // ve si esta dentro del rango y se tiene que cumplir ambas condiciones
        cout<<"La edad esta dentro del rango";
    } else {
        cout<<"La edad esta fuera del rango";
    }


    return 0;
}