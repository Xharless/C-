//escriba un programa que lea de la entrada un vector de numeros y muestre en la salida los numeros del vector con los indices

#include <iostream>
using namespace std;

int main(){
    int numeros[100], n; //como no se sabe la cantidad de elementos se pone un numero grandes de elementos
    cout<<"Ingrese el numero de elementos del arreglo: "; cin>>n;
    for (int i = 0; i<n; i++){
        cout<<"Ingrese el numero a agregar: "; cin>>numeros[i]; //guarda el numero agregado en la posicion i
    }
    for (int i = 0; i<n ; i++){
        cout<<i<<"->"<<numeros[i]<<endl;

    }
    return 0;
}