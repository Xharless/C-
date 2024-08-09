// copiar contenido de una cadena a otra - Funcion strcpy()

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char nombre[] = "Carlos";
    char nombre2[20];
    strcpy(nombre2, nombre); // primero va la vacia, y luego lo que quiero copiar a la lista vacia
    cout<<nombre2;

    return 0;
}