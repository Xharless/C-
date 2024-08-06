// 1. Escribe la siguiente expresion como expresion en c++: 

#include <iostream>
using namespace std;

int main(){
    float a,b,resultado;

    cout<<"Ingrese el primer valor: "; cin>>a;
    cout<<"Ingrese el segundo valor: "; cin>>b;
    resultado = (a/b) + 1;
    cout.precision(2); // redondea el numero a 2 decimales
    cout<< "Valor de la expresion: "<< resultado << endl;

    return 0;
}