// Busqueda binaria
// Para que funcione, la lista deber esta ordenada de forma ascendente, es mucho mas eficiente y más rapida


#include <iostream>
using namespace std;

int main(){
    int numeros[] = {1,2,3,4,5,6};
    int inf,sup,mitad,dato;
    char flag = 'F';
    dato = 6;

    // algoritmo de busqueda binaria
    inf = 0;
    sup = 6;
    while(inf <= sup) {
        mitad = (inf + sup) / 2;
        if(numeros[mitad] == dato){
            flag = 'V';
            break;
        }
        if (numeros[mitad] > dato){
            sup = mitad;
            mitad = (inf + sup) / 2;
        }

        if (numeros[mitad] < dato){
            inf = mitad; 
            mitad = (inf+sup)/2;
        }
    }   

    if(flag == 'V'){
        cout<<"El numero ha sido encontrado en la posicion: " << mitad;
    } else {
        cout<<"El numero no ha sido encontrado";
    }

    return 0;
}