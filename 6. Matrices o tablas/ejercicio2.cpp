//Hacer una matriz de tipo entera de 2*2, llenarla de numeros y luego copiar todo su contenido hacia otra matriz 

#include <iostream>
using namespace std;

int main(){
    int matriz[2][2], matriz_copia[2][2],numero;
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            cout<<"Ingrese el numero para ["<< i << "][" << j << "] : "; cin>>numero;
            matriz[i][j] = {numero};
        }
    }

    
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            matriz_copia[i][j] = matriz[i][j];
        }
    }
    cout<<"Tu copia de la matriz es: "<<endl;
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            cout<< matriz_copia[i][j] << " ";
        }
        cout<<"\n";
    }

    return 0;
}