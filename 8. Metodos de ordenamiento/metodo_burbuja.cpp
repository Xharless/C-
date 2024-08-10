/* 
es un algoritmo para ordenar elementos en una lista, lo que hace es:

    si:
        numero actual > numero siguiente
        cambio
hace este cambio con los datos de la lista hasta llegar al final, una vez terminado, vuelve al inicio para repetir el proceso

*/

#include <iostream>
using namespace std;

int main(){
    int numeros[] = {3,4,1,2,5};
    int i,j,aux;
    // algoritmo del metodo burbuja
    for(i=0; i<5; i++){
        for (j=0; j<5; j++){
            if(numeros[j] > numeros[j+1]){
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
    }
    cout<<"Orden ascendente: "; 
    for(i=0; i<5; i++){
        cout<<numeros[i];
    }

    cout<<"\nOrden descendente: ";
    for(i=4; i>=0; i--){
        cout<<numeros[i];
    }
    return 0;
}