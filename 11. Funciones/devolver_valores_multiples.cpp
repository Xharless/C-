// Devolver valores multiples 
// sumar y multiplicar 2 numeros
#include <iostream>
using namespace std;


void calcular(int, int, int&, int&);

int main(){
    int n1,n2, suma=0, producto=0;
    cout <<"Ingrese 2 numeros: "; cin>>n1>>n2;
    calcular(n1,n2,suma,producto);
    cout<<"El valor de la suma es: " << suma << endl;
    cout<<"El valor del producto es: " << producto << endl;
    return 0;
}

void calcular(int n1, int n2, int& suma, int& producto){
    suma = n1+n2;
    producto = n1*n2;
    // como se pasa por referencia, modifica lo que esta en la direccion de esas variables quedando el nuevo valor en esa referencia
}