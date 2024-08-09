
/*
Realice un programa que determine si una matriz es simetrica (que sea cuadrada y su transpuesta es igual)
|8 1 3|       |8 1 3|
|1 7 4|   --> |1 7 4|
|3 4 9|       |3 4 9|
*/

#include <iostream>
using namespace std;

int main(){
    int filas, columnas, numero;
    char simetrico = 'T';
    cout<<"Ingrese el numero de filas y columnas:  "; cin>>filas>>columnas;
    int matriz[filas][columnas], matriz_T[filas][columnas];
    if(filas==columnas){
        for (int i = 0; i<filas; i++){
            for (int j = 0; j<columnas; j++){
                cout<<"Ingrese el numero para ["<< i << "][" << j << "] : "; cin>>numero;
                matriz[i][j]= numero;
                matriz_T[j][i]=numero;
            }
        }

        for (int i = 0; i<filas; i++){
            for (int j = 0; j<columnas; j++){
                if(matriz[i][j] != matriz_T[i][j]){
                    simetrico = 'F';
                }
            }
        }
        if (simetrico == 'F'){
            cout<<"No es simetrica";
        } else {
            cout<<"Su matriz es simetrica";
        }
    } else {
        cout<<"Su matriz no es simetrica";
    }
    return 0;
}