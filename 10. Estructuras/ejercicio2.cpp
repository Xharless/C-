// Realizar un programa que lea un arreglo de estructuras los datos de n empleados de la empresa y imprima los datos del empleado con mayor y menor salario

#include <iostream>
using namespace std;

struct empleado{
    char nombre[20];
    int salario;
} emp[100]; // no se sabe la cantidad

int main(){
    int n_empleados, menor=999999, mayor = 0, pos_May, pos_Men;
    cout <<"Ingrese la cantidad de empleados: "; cin>>n_empleados;
    for(int i = 0; i<n_empleados; i++){
        fflush(stdin);
        cout<< i+1 <<". Ingrese su nombre: "; cin.getline(emp[i].nombre, 20, '\n');
        cout<< "\tSalario: "; cin>>emp[i].salario;
        cout<<"\n";
        // mayor salario
        if (emp[i].salario > mayor){
            mayor = emp[i].salario;
            pos_May = i;
        }
        // menor salario
        if (emp[i].salario < menor){
            menor = emp[i].salario;
            pos_Men = i;
        }
    }
    cout << "\nDatos empleados con mayor salario:" << endl;
    cout << "Nombre: " << emp[pos_May].nombre<< endl;
    cout << "Salario: " << emp[pos_May].salario << endl;

    cout << "\nDatos empleados con menor salario:" << endl;
    cout << "Nombre: " << emp[pos_Men].nombre<< endl;
    cout << "Salario: " << emp[pos_Men].salario << endl;


    return 0;
}