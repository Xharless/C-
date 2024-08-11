/*
Hacer 2 estructuras, una llamada promedio que tendra los siguientes campos: nota1, nota2, nota3 y otra llamada alumno que tendra los 
siguientes miembros: nombre,sexso, edad; hacer que la estructura promedio este anidada en la estructura alumno, luego pedir 
todos los datos para un alumno, luego calcular su promedio y por ultimo imprimir todos sus datos incluidos el promedio
*/

#include <iostream>
using namespace std;

struct promedio{
    int nota1;
    int nota2;
    int nota3;

};

struct alumno{
    char nombre[20];
    char sexso[10];
    int edad;
    struct promedio prom;
    
} almuno1;

int main(){
    float promedio;

    cout<<"Ingrese el nombre del usuario: "; cin.getline(almuno1.nombre,20,'\n');
    cout<<"Sexso: "; cin.getline(almuno1.sexso, 10, '\n');
    cout<<"Edad: "; cin>>almuno1.edad;
    cout<<"\nNotas alumno"<<endl;
    cout<<"Nota 1: "; cin>>almuno1.prom.nota1;
    cout<<"Nota 2: "; cin>>almuno1.prom.nota2;
    cout<<"Nota 3: "; cin>>almuno1.prom.nota3;

    promedio= (almuno1.prom.nota1 + almuno1.prom.nota2 + almuno1.prom.nota3) / 3;
    cout<<"\nDatos alumno" << endl;
    cout<<"Nombre: " << almuno1.nombre << endl;
    cout<<"Edad: "<< almuno1.edad << endl;
    cout<<"Sexo: " << almuno1.sexso<< endl;
    cout<<"Promedio " << promedio;

    return 0;
}