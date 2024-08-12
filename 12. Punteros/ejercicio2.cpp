/*
rellenar un array de 10 numeros, posteriormente utilizando punteros indicando cuales son numeros pares y su posicion de memoria
*/

#include <iostream>
using namespace std;

int main(){
    int numeros[10], *dir_numeros;
    for (int i = 0; i<10; i++){
        cout << "Digite un numero: "; cin >> numeros[i];
    }
    dir_numeros = numeros; // posicion de memoria donde comienza numeros
    for (int i = 0; i<10; i++){
        if (*dir_numeros%2 == 0){
            cout << "El numero " << *dir_numeros << " es par" << endl;
            cout << "Poicion: " << dir_numeros << endl;
        }
        dir_numeros++;
    }
    return 0;
}