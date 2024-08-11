/* 
Realice una funcion que tome como parametros un vector de numeros enteros y devuelva la suma de sus elementos
*/

#include <iostream>
using namespace std;

void pedirDatos();
int calcular_suma(int vec[], int);

int vec[100], tam; // son globales porque los pedimos desde otra funcion



int main(){
    pedirDatos();
    cout<<"La suma da un valor de: " << calcular_suma(vec,tam);
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese numero de elementos del vector: "; cin>>tam;
    for(int i = 0; i<tam; i++){
        cout << "Ingrese un elemento: "; cin>>vec[i];
    }
}

int calcular_suma(int vec[], int tam){
    int sum = 0;
    for (int i = 0; i<tam; i++){
        sum+=vec[i];
    }
    return sum;

}


