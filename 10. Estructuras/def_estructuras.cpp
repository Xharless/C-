/*
Coleccion de uno o mas tipos de elementos
ej: si queremos almacenar los datos de una coleccion de CD de musica con:
* titulo
* artista
* numero de canciones
* precio
* fecha de compra

struct coleccion_CD{
    char titulo[30];
    char artista[25];
    int numCanciones;
    float precio;
    char fecha_compra[20];
};


// ahora para declararla 

int main(){
    struct coleccion_CD CD1, CD2, CD3; // aqui cada cd tiene cada uno de los campos 
}

// otra forma para declararla es: 
struct coleccion_CD{
    char titulo[30];
    char artista[25];
    int numCanciones;
    float precio;
    char fecha_compra[20];
} CD1, CD2, CD3; 
// y ahi declaramos las variables para el struct
*/

#include <iostream>
using namespace std;

struct Persona{
    char nombre[20];
    int edad;
} 
persona1 = {"Carlos", 20},
persona2 = {"Andres", 21}, 
persona3
;

int main(){
    cout<<"Nombre1: " << persona1.nombre << endl;
    cout<<"Edad1: " << persona1.edad << endl;
    cout<<"\nNombre2: " << persona2.nombre << endl;
    cout<<"Edad2: " << persona2.edad;

    cout<<"\n----------" << endl;;
    cout<<"Nombre: "; cin.getline(persona3.nombre,20,'\n');
    cout<<"Edad: "; cin>>persona3.edad;

    cout<<"\nTu nombre es " << persona3.nombre;
    cout<<"\nTu edad es de " << persona3.edad;

    return 0;
}

