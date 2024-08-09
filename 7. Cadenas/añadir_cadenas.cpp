// Añadir o concatenar una cadena con otra - Funcion strcat()

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char cad1[] = "Hola";
    char cad2[] = ", como estas";
    char cad3[20];
    strcpy(cad3, cad1); // copiamos primero lo de la primera cadena en la tercera
    strcat(cad3, cad2); // concatenamos la lista 3 con la 2da
    cout<<cad3;




    return 0;
}