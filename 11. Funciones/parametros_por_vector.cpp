/*
void nombreFuncion(tipo nombreArreglo[], int tamañoArreglo);
desde la funcion main:
    nombreFuncion(nommbreArreglo, tamañoArreglo);
ej: cuadrados de los elementos del vector
*/

#include <iostream>

using namespace std;


void cuadrado(int vec[], int);
void muestra(int vec[], int);

int main(){
    // el tamaño debe ser constante
    const int tam=5;
    int vec[tam] = {1,2,3,4,5};
    cuadrado(vec,tam);
    muestra (vec,tam);

    return 0;
}

void cuadrado(int vec[], int tam){
    for(int i = 0; i<tam; i++){
        vec[i] *= vec[i];
    }
}

void muestra(int vec[], int tam){
    for(int i = 0; i<tam; i++){
        cout<<vec[i]<< endl;
    }
}