// 1. programa que lea de la entrada estandar 2 numeros y muestre en la salida su suma, su resta, multiplicacion y division

#include <iostream>
using namespace std;

int main (){
    int numero1;
    int numero2;
    cout<<"Primer numero: "; cin>> numero1;
    cout<<"Segundo numero: "; cin>>numero2;
    cout<< "La suma es: " << numero1 + numero2;
    cout<< "\nLa resta es: " << numero1 - numero2;
    cout<< "\nLa multiplicacion es: " << numero1 * numero2;
    cout<< "\nLa division: " << numero1/numero2; 

    return 0;
}
