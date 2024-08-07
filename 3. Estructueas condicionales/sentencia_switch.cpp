#include <iostream>
using namespace std;

int main(){
    int numero;
    cout << "Digite un numero de 1-5: "; cin>>numero;
    switch(numero){ // es la variable que quiero ver los casos
        case 1: cout<<"es el numero 1"; break; // el caso 1 significa el caso donde la variable toma el valor de 1, y mostrar lo que pasa cuando es 1
        case 2: cout<<"es el numero 2"; break;
        case 3: cout<<"es el numero 3"; break;
        case 4: cout<<"es el numero 4"; break;
        case 5: cout<<"es el numero 5"; break;
        default: cout<<"no esta dentro del rango"; break;
    }
    return 0;
}