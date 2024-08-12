/*
Transmision de arreglos
ej: hallar el maximo elemento de un arreglo
*/
#include <iostream>
using namespace std;

int maximo(int *, int);

int main(){
    const int nElem = 5;
    int numeros[nElem] = {3,5,8,2,1};
    cout << "El mayor elemento es: " << maximo(numeros, nElem);
    return 0;
}

int maximo (int* dirVec, int nElem){
    int max = 0;
    for(int i = 0; i<nElem; i++){
        if (* (dirVec + i) > max){
            max = *(dirVec + i);
        }
    }
    return max;
}