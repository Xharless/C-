/*
correspondencia entre arrays y punteros
*/

#include <iostream>
using namespace std;

int main(){
    int numeros[] {1,2,3,4,5};
    int *dir_numeros;

    dir_numeros = numeros; // se le pasa la direccion de memoria inicial del vector, es lo mismo que dir_numeros = &numeros[0]
    for (int i =0; i<5; i++){
        cout<<"Elemento del vector " << i << ": " << *dir_numeros++ << endl;  //si no pongo el ++ solo imprime el elemento del primer espacio
        //cout<<"Posicion de memoria " << dir_numeros++ << endl;
        cout << "\n";

    }

    return 0;
}