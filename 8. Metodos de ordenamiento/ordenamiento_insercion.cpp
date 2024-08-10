/* Es una forma de ordenar algo de forma arbitraria. Requirtr un orden de n^2
ej: ordenar la lista de forma ascendente
    |5|3|4|1|2|
hay que tener en cuenta la posicion del arreglo, iniciando en el primero, luego veremos si el elemento de la izquierda es menor a es
si:
    numeroIzq > numeroActual
        cambio
cuado ocurre el cambio, se devuelve en una posicion para corroborar la informacion
A la izquierda siempre van los numeros ordenados 
Una vez termine el largo de la lista, se dice que el arreglo esta ordenado
*/

#include <iostream>
using namespace std;

int main(){
    int numeros[] = {4,2,3,1,5};
    // algoritmo del ordenamiento por insercion
    int i, pos, aux;
    for(i=0; i<5; i++){
        pos = i;
        aux = numeros[i];
        while((pos>0) && (numeros[pos-1] > aux)){
            numeros[pos] = numeros[pos-1];
            pos--;
        }
        numeros[pos] = aux;
    }
    cout<<"Orden ascendente: ";
    for(int i =0; i<5; i++){
        cout<<numeros[i];
    }

    cout<<"\nOrden ascendente: ";
    for(int i=4; i>=0; i--){
        cout<<numeros[i];
    }

    return 0;
}

