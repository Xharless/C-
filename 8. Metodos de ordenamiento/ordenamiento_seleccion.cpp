/*
algoritmo de ordenamiento
1. buscar el minimo elemento de la lista
2. intercambiar con el primer elemento
3. buscar el minimo del resto de la lista
4. intercambiar con el segundo
5. y asi sucesivamente
*/

#include <iostream>
using namespace std;

int main(){
    int numeros[] = {4,5,1,3,2};
    int i,j,aux,min;
    for(i=0; i<5; i++){
        min=i;
        for(j=i+1; j<5; j++){
            if(numeros[j]<numeros[min]){
                min=j;
            }
        }
        aux = numeros[i];
        numeros[i] = numeros[min];
        numeros[min] = aux;
    }

    cout<<"Orden ascendente: ";
    for(int i =0; i<5; i++){
        cout<<numeros[i];
    }
    return 0;
}