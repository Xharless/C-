//Escriba un programa que calcule el valor de: 2^1+2^2+...2^n

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, suma=0, elevado=0;

    cout<<"Ingrese la cantidad de elementos: "; cin>>n;
    for (int i = 1; i<= n; i++){
        elevado = pow(2,i); // el segundo es lo que esta elevado 
        suma += elevado;
    }
    cout<<"La suma da un total de: " << suma; 

    return 0;
}