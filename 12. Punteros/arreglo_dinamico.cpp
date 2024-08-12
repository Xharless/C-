/*
Asignacion dinamica de arreglos
new: Reserva el numero de bytes solicitando por la declaracion
delete: Libera un bloque de bytes reservado con anterioridad 

ej: pedir un usuario n calificaciones y almacenarlas en un arreglo dinamico

*/

#include <iostream>
#include <stdlib.h> // new y delete
using namespace std;

void pedirNotas();
void mostrarNotas();
int numCalif, *calif;


int main(){
    pedirNotas();
    mostrarNotas();


    //ahora tenemos que eleminar la memoria utilizada
    delete[] calif; 
    return 0;
}

void pedirNotas(){

    cout <<"Ingrese el numero de notas: "; cin>>numCalif;
    calif = new int[numCalif]; // crear arreglo de tipo dinamico pidiendo memoria con new
    for (int i = 0; i<numCalif; i++){
        cout<< "Ingrese una nota: "; cin>>calif[i];
    }
}

void mostrarNotas(){
    cout<<"\n\nMostrando notas del usuario: " << endl; 
    for(int i = 0; i<numCalif; i++){
        cout << calif[i] << endl;
    }
}