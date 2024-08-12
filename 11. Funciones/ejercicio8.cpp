/* 
suma de numeros complejos
z1 = 5 - 3i; z2 = -4 + 2i

suma = 1 - i
*/

#include <iostream>
using namespace std;

struct complejo{
    float real;
    float imaginaria;
}z1, z2;

void pedirDatos();
complejo suma(complejo, complejo);
void muestra(complejo);

int main(){

    pedirDatos();
    complejo x = suma(z1,z2);
    muestra(x);

    return 0;
}

void pedirDatos(){
    cout << "Ingrese los datos para el primer numero complego: " << endl;
    cout << "Parte real: "; cin>>z1.real;
    cout << "Parte imaginaria: "; cin>>z1.imaginaria; 

    cout << "\nIngrese los datos para el segundo numero complego: " << endl;
    cout << "Parte real: "; cin>>z2.real;
    cout << "Parte imaginaria: "; cin>>z2.imaginaria; 
}

complejo suma(complejo z1, complejo z2){
    z1.real += z2.real;
    z1.imaginaria += z2.imaginaria;
    return z1;
}

void muestra(complejo x){
    cout << "\nResultado de la suma: " << x.real << ", " << x.imaginaria << endl;
}