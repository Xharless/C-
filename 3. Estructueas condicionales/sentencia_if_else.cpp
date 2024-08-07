/*
    if (condicion) {
        instruccion;
    } else {
        intruccion;
    }
*/

#include <iostream>
using namespace std;

int main(){
    int numero, dato = 5;
    cout << "digite un numero: "; cin>>numero;
    if (numero == dato){ // compara los terminos, puedo poner != para ver si es distinto o >=, < para ver si es mayor o igual y menor 
        cout<<"Tu numero es el 5";
    } else {
        cout<<"El numero es diferente a 5";
    }

    return 0;
}