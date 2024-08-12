/*
paso de parametros tipo matriz
ej: elevar al cuadrado todos los elementos de una matriz
*/

#include <iostream>
using namespace std;

void mostrarM(int m[][3], int, int); // para enviar la matriz a una funcion, primero va el tipo de datos que tiene la matriz, luego el numero max de columnas
void elevarCuadrado(int m[][3], int, int);
void mostrarMC(int m[][3], int, int);

int main(){
    const int Nfilas = 2;
    const int Ncolumnas = 3;
    int m[Nfilas][Ncolumnas] = {{1,2,3},{4,5,6}};
    mostrarM(m, Nfilas, Ncolumnas);
    elevarCuadrado(m, Nfilas, Ncolumnas);
    mostrarMC(m, Nfilas, Ncolumnas);

    return 0;
}

void mostrarM(int m[][3], int nfilas, int ncolumnas){
    cout<<"Mostrar matriz original: \n";
    for(int i = 0; i<nfilas; i++){
        for(int j = 0; j<ncolumnas; j++){
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
}

void elevarCuadrado(int m[][3], int nfilas, int ncolumnas){
    for(int i = 0; i<nfilas; i++){
        for(int j = 0; j<ncolumnas; j++){
            m[i][j] *= m[i][j];
        }
    }
}

void mostrarMC(int m[][3], int nfilas, int ncolumnas){
    cout<<"\nMostrar matriz al cuadrado: \n";
    for(int i = 0; i<nfilas; i++){
        for(int j = 0; j<ncolumnas; j++){
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
}