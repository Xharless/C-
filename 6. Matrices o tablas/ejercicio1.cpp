//Hacer un programa para rellenar una matriz pidiendo al usuario el numero de fias y columnas, luego mostrar la matriz en pantalla

#include <iostream>
using namespace std;

int main(){
    int fila, columnas, numero;
    cout<<"Ingrese los valores de las filas y columnas:  "; cin>>fila>>columnas;
    int numeros[fila][columnas];
    for (int i = 0; i<fila; i++){
        for(int x = 0; x<columnas; x++){
            cout<<"Ingrese un numero en posicion [" << i << "][" << x << "] : "; cin>>numero;
            numeros[i][x] = {numero};
        }
    }

    for (int i = 0; i<fila; i++){
        for(int x = 0; x<columnas; x++){
            cout<<numeros[i][x]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
