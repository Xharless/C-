/* 3. Realice un programa que lea de la entrada estandar los siguientes datos de una persona:
    Edad: entero
    Sexo: caracter
    Altura: float
*/

#include <iostream>
using namespace std;

int main(){
    int edad;
    char sexo[10]; //le doy un tamaño de 10 espacio 
    float altura;
    cout<<"Ingrese su edad: "; cin>>edad;
    cout<<"Ingrese su sexo (masculino/femenino): "; cin>>sexo;
    cout<<"Ingrese su altura (en metros): "; cin>>altura;
    
    cout<<"\n Edad: "<<edad;
    cout<<"\n Sexo: "<<sexo;
    cout<<"\n Altura (en metros): " << altura;
    return 0;
}