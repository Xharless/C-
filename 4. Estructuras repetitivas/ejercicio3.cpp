/* Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o se intriduzca el valor 0. 
El programa debe entregar la suma de los valores mayores a 0 introducidos
*/

#include <iostream>
using namespace std;

int main(){
    int suma=0, valor;
    do{
        cout<<"Ingrese un valor: "; cin>>valor;
        if (valor>0){
            suma+=valor;
        }
    } while ((valor<20 || valor>30) && (valor!=0));
    cout<<"La suma total es: "<<suma;
    return 0;
}