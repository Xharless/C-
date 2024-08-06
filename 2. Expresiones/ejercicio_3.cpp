// Escribe un fragmento que intercambie los valores de dos variables

#include <iostream>
using namespace std;

int main(){
    int x, y, aux;
    cout<< "Ingresa el valor de x: "; cin>> x;
    cout<< "Ingresa el valor de y: "; cin>>y; 

    aux = y;
    y = x;
    x = aux;

    cout << "\nLos valores intercambiados son x: " << x << ", y: " << y << endl;



    
    return 0;
}