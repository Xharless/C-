/*
    Es una estructura dentro de otra estructura

    struct info_direccion{
        char direccion[30];
        char ciudad[30];
        char provincia[30];
    };

    struct empleado{
    char nombre[20];
    struct info_direccion dir_empleado;  // aqui la dir_empleado es un struct 
    double salario;
    };

*/

#include <iostream>
using namespace std;

struct info_direccion{
    char direccion[30];
    char ciudad[30];
    char provincia[30];
};

struct empleado{
    char nombre[20];
    struct info_direccion dir_empleado;  
    double salario;
} empleados[2]; // tengo 2 estructuras del tipo empleado

int main(){
    for(int i = 0; i<2; i++){
        fflush(stdin); //vacia el buffer y permite digitar los valores
        cout<<"Ingrese su nombre: "; cin.getline(empleados[i].nombre,20,'\n');
        cout<<"Ingrese su direccion: "; cin.getline(empleados[i].dir_empleado.direccion,30,'\n');
        cout<<"Ingrese su ciudad: "; cin.getline(empleados[i].dir_empleado.ciudad,30,'\n');
        cout<<"Ingrese su provincia: "; cin.getline(empleados[i].dir_empleado.provincia, 30, '\n');
        cout<<"Ingrese su salario: "; cin>>empleados[i].salario;
        cout<<"\n";
    }

    // imprimir los datos
    for(int i = 0; i<2; i++){
        cout<<"Empleado numero "<< i+1 << endl;
        cout<<empleados[i].nombre<<endl;
        cout<<empleados[i].dir_empleado.ciudad<<endl;
        cout<<empleados[i].dir_empleado.direccion<<endl;
        cout<<empleados[i].dir_empleado.provincia<<endl;
        cout<<empleados[i].salario<<endl;
        cout<<"\n";


    }

    return 0;
}
