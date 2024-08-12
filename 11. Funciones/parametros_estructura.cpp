// paso de parametris de tipo estructura

#include <iostream>
using namespace std;

struct Persona{
    char nombre[20];
    int edad;
} p1; 

void pedirDatos();
void mostrarDatos(Persona);

int main(){
    pedirDatos();
    mostrarDatos(p1); // la variable
    return 0;
}

void pedirDatos(){
    cout <<"Digite su nombre: "; cin.getline(p1.nombre, 20, '\n');
    cout <<"Digite su edad: "; cin>>p1.edad;
}

void mostrarDatos(Persona p){
    cout << "\nNombre: " << p.nombre << endl;
    cout << "Edad: " << p.edad << endl;
}