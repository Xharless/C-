// Transformar una cadena a numeros - Funcion atoi() y atof()
// "123" -> 123 -> atoi
// "123.45" -> 123.45 -> atof

#include <iostream>
#include <string.h>
#include <stdlib.h> // para el atoi y atof
using namespace std;

int main(){
    char cad[] = "123";
    char cad2[] = "123.456";
    float numero2;
    int numero;

    numero = atoi(cad);
    numero2 = atof(cad2);
    cout<<numero<<endl;
    cout<<numero2;


    return 0;
}