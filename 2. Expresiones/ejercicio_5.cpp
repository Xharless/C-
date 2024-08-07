// realize un programa que calcule el valor que toma la siguiente funcion para unos valors dados de x e y: 

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float x, y, resultado;
    cout << "Ingrese el primer termino: "; cin>>x;
    cout << "Ingrese el segundo termino: "; cin>>y;
    resultado = (sqrt(x)) / ((pow(y,2)) - 1);
    cout << "\nTu resultado es: " << resultado << endl; 


    return 0;
}