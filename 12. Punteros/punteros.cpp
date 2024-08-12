/*
punteros - declaracion de punteros

&n = la direccion de n
*n = la variable cuya direccion esta almacenada en n
*/

#include <iostream>
using namespace std;

int main(){
    int num, *dir_num; // dir_num es un puntero que guarda la direccion de memoria de una variable entera
    num = 20;
    dir_num = &num; 
    cout << "Numero: " << *dir_num << endl;
    cout << "Direccion de mem: " << dir_num << endl; 


    return 0;
}