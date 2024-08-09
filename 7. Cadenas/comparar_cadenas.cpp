// Comparar cadenas - Funcion strcmp() 

// avion - barco ---> barco seria mayor porque esta despues alfabeticamente y seria strcmp(palabra1, palabra2) >0 significa que la 1 es mayor a la 2


#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char palabra1[] = "Hola";
    char palabra2[] = "hola";

    if (strcmp(palabra1,palabra2) == 0){ // si son iguales es igual a 0, pero si son distintas es igual a 1
        cout<<"Ambas cadenas son iguales";
    } else {
        cout<<"Ambas cadenas son diferentes";
    }

    

    return 0;
}