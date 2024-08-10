// Busqueda secuencial
//a[5] = {3,2,1,5,4}; dato = 4; y quiero ver si el numero 4 esta dentro de ese arreglo, eso vera la busqueda secuencial

#include <iostream>
using namespace std;

int main(){
    int numeros[] = {3,2,1,5,4};
    int i, dato;
    char flag = 'F'; 

    dato = 4;
    // busqueda secuencial
    i=0;
    while ((flag == 'F') && (i<5)){
        if (numeros[i] == dato){
            flag = 'V';
        }
        i++;
    }

    if(flag == 'F'){
        cout<<"El numero no existe en el arreglo";
    } else {
        cout<<"El numero se encontro en la posicion " << i-1;
    }

    return 0;
}