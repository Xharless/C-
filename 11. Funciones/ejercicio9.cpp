/*
Realice una funcion recursica que sume los primeros n enteros positivos 
nota: para plantear la funcion recursiva tenga en cuenta que la suma puede expresarse mediante la siguiente recursion
    suma(n) = 1    , si n = 1
    n + suma (n-1) , si n > 1
*/

#include <iostream>
using namespace std;

int suma(int);

int main(){
    int nElementos; 
    cout << "Digite el numero de elementos: "; cin>>nElementos;
    cout << "\nLa suma es: " << suma(nElementos);
    return 0;
}

int suma(int n){
    int resultado = 0;
    if (n == 1) {
        resultado = 1;
    } else {
        resultado = n + suma(n-1);
    }
    return resultado;
}