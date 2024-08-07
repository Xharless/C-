//realice un programa que solicite de la entreda estandar un entero del 1 al 10 y que muestre en la salida su tabla de multiplicar

#include <iostream>
using namespace std;

int main(){
    int numero;
    do{
        cout<<"Ingrese un numero: "; cin>>numero;
    } while(numero>10 || numero<1);

    for (int i = 1; i<= 10; i++){
        cout<<numero<<" * "<<i<<" = "<<i*numero<<endl;

    }
    return 0;
}