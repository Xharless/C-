/*
Un arreglo es de la forma
|3|4|5|6|1|4|5|6|7|
-0 1 2 3 4 5 6 7 8 -> eso seria las posiciones 

el formato es:
tipo nombre[tamaño]
ej:
int numero[10]

para inicializar un arreglo puedes agregar elementos de la forma
int numero[] = {1,4,7,3}; -> rellena el arreglo con los elementos, por lo que numero[0] corresponde a el elemento 1
char letra[] = {'a','b'}; -> lo rellena con los caracteres
*/

// Ej: escriba un programa que defina un vector de numeros y calcule la suma de sus elementos

#include <iostream>
using namespace std;

int main(){
    int numeros[] = {1,2,3,4,5};
    int suma = 0;
    for (int i = 0; i<5; i++){
        suma += numeros[i];
    }
    cout<<"La suma de los elementos del arreglo es " << suma;
    return 0;
}