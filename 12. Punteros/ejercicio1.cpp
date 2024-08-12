/*
Comprobar si un numero es par o impar, y señalar la posicion de memoria donde se esta guardando el numero, con punteros
*/

#include <iostream>
using namespace std;

int main(){
    int numero, *dir_num;
    cout<<"Digite un numero: "; cin>>numero;
    dir_num = &numero; // guardando la posicion de memoria de la variable numero
    
    if (*dir_num % 2  == 0){ // sacamos el numero con el puntero
        cout << "El numero " << *dir_num << " es par" << endl;
        cout << "Posicion " << dir_num;
    } else {
        cout << "El numero " << *dir_num << " es impar" << endl;
        cout << "Posicion " << dir_num;
    }

    return 0;
}