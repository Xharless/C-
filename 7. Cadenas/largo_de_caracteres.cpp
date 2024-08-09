// Para la longitud de una cadena de caracteres - Funcion srtlen()

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char palabra[] = "hola";
    int longitud;
    longitud = strlen(palabra); //Siempre entrega un numero entero de la cantidad de elementos
    cout<<"Numero de elementos de la cadena: " << longitud;

    return 0;
}