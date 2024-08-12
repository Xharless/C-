/* 
Desarrollar una funcion que determine si una matriz es simetrica o no
-la matriz es simetrica es si A = A^t
- Aij = Aji
*/

#include <iostream>
using namespace std;


void pedirDatos();
void verificar(int m[][100], int, int);
int N_filas, N_columnas, m[100][100];

int main(){
    pedirDatos();
    verificar(m, N_filas, N_columnas);
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese la cantidad de filas y columnas: "; cin>>N_filas>>N_columnas;
    for(int i = 0; i<N_filas; i++){
        for (int j = 0; j<N_columnas; j++){
            cout<<"Ingrese un elemento en [" << i << "][" << j <<"]: "; cin>>m[i][j];
        }
    }
}

void verificar(int m[][100], int nf, int nc){
    int cont = 0;
    if (nf == nc){
        for (int i = 0; i<nf; i++){
            for (int j = 0; j<nc; j++){
                if (m[i][j] == m[j][i] ){
                    cont++;
                }
            }
        }
    }
    if (cont == nf*nc){
        cout << "\nTu matriz es simetrica";
    } else {
        cout << "\nTu matriz no es simetrica";
    }
}