// escribir un programa que lea de la entrada un caracter e indique en la salida estandar si el caracter es una vocal minuscula o no

#include <iostream>
using namespace std;

int main(){
    char letra;

    cout<<"Ingrese el caracter: "; cin>>letra;
    switch (letra){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': cout<<"Es una vocal minuscula"; break;
    default: cout<<"No es una vocal en minuscula"; break; 
    }

    return 0;
}