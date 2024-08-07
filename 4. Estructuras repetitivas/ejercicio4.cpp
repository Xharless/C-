// Escriba un origrama que calcule el valor de 1+2+3+...+n

#include <iostream>
using namespace std;

int main(){
    int n, suma = 0;
    cout<<"Ingrese la cantidad de elementos: "; cin>>n;
    for (int i = 1; i<=n; i++){
        suma+=i;
    }
    cout<<"La suma de todos los terminos es: " << suma;

    return 0;
}