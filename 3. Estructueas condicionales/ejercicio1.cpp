// escriba un programa que lea dos numeros y determine cual de ellos es el mayor

#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Ingrese ambos numeros: "; cin>>a>>b; // lo que hace es que guarda los valores en a primero y luego en b
    
    if (a == b){
        cout<<"Los numeros son iguales"; 
    } else if (a>b){
        cout << "El numero " << a << " es mayor que " << b;
    } else {
        cout << "El numero " << b << " es mayor que " << a;
    }

    return 0;
    
}