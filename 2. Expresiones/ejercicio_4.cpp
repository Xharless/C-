/*La calificacion final de un estudiante es la media ponderada de las 3 notas: 
la nota de practicas que cuenta un 30% del total, la nota teorica que cuenta un 60% y la nota de participacion que cuenta el 10% restante
Escriba un programa que lea la entrada estandar las tres notas de un alumno y escriba en la salida estandar su nota final
*/

#include <iostream>
using namespace std;

int main(){
    float a,b,c,final;
    cout<<"Ingrese su nota de practica: "; cin>>a;
    cout<<"Ingrese su nota teorica: "; cin>>b;
    cout<<"Ingrese su nota de participacion: "; cin>>c;

    final = (a*0.3)+(b*0.6)+(c*0.1);
    cout<<"\nSu nota final es: " << final << endl; 
    return 0;
}