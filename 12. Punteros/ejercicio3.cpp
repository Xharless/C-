/*
Pedir al usuario n numeros, almacenarlos en un arreglo dinamico posteriormente ordenar los numeros de orden ascendenter y mostrarlos en pantalla
nota: Utilizar cualquier metodo de ordenamiento
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void ordenar(int*,int);
void mostrar(int*,int);


int n_elem, *Elementos; 
int main(){ 
    pedirDatos();
    ordenar(Elementos,n_elem );
    mostrar(Elementos, n_elem);
    delete[] Elementos;
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese el numero de elementos del arreglo: "; cin>>n_elem;
    Elementos = new int[n_elem];
    for(int i = 0; i<n_elem; i++){
        cout<<"Ingrese un numero: "; cin>>*(Elementos+i); // elementos[i]; es lo mismo
    }
}

void ordenar(int *elemento, int nElem){
    int aux;
    // ordenamiento por metodo de burbuja
    for(int i = 0; i<nElem; i++){
        for (int j = 0; j<nElem-1; j++){
            if(*(elemento+j)>*(elemento+j+1)){
                aux = *(elemento + j);
                *(elemento + j) = *(elemento + j+ 1);
                *(elemento + j + 1) = aux;
            }
        }
    }
}

void mostrar(int *elemento, int nElem){
    cout << "\n\nMostrando arreglo ordenado" << endl;
    for (int i = 0; i<nElem; i++){
        cout<<*(elemento+i) << " ";
    }
}