/*
Realice una funcion que tome como parametros un vector de numeros y su tamaño y cambie el signo de los elementos del vector
*/

#include <iostream>
using namespace std;


void pedirDatos();
void cambiarSigno(int vec[], int);
void mostrarVector(int vec[], int);

int vec[100], tam;

int main(){
    pedirDatos();
    cambiarSigno(vec,tam);
    mostrarVector(vec, tam);
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese la canditad de datos del vector: "; cin>>tam;
    for(int i = 0; i<tam; i++){
        cout<<"Ingrese un elemento: "; cin>>vec[i];
    }
}

void cambiarSigno(int vec[], int tam){
    for (int i = 0; i<tam; i++){
        vec[i] *= -1;
    }
}

void mostrarVector(int vec[], int tam){
    cout << "Valores cambiados" << endl;
    for (int i = 0; i<tam; i++){
        cout << vec[i] << endl;
    }
}