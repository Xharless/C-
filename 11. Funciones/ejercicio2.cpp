/* Escriba una funcion nombrada funpot() que eleve un numero entero que se le transmita a una potencia en numero entero positivo y 
despliegue el resultado. El numero entero positivo debera ser el segundo valor transmitido a la funcion*/

#include <iostream>
#include <math.h>
using namespace std;

void pedirDatos();
void funpot(int x, int y);

int numero, exponente;

int main(){
    pedirDatos();
    funpot(numero, exponente);

    return 0;
}

void pedirDatos(){

    cout <<"Ingrese un numero: "; cin>>numero;
    cout <<"Digite un exponente: "; cin>>exponente;
}

void funpot(int x, int y){
    long resultado ;
    resultado = pow(x,y);
    cout<<"El resultado es: " << resultado << endl;
}