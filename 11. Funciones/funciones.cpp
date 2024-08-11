/*
una funcion realiza una tarea concreta, la sintaxis es de la forma:
    tipo nombre(tipo var1, tipo var2, ....){
        conjunto de instrucciones;
    }
ej:
int numMax(int x, int y) // retorna un numero entero
void desplegar(float x, float y) // funcion void no retorna nada
*/
// encontrar el mayo de 2 numeros

#include <iostream>
using namespace std;

//prototipo de funcion
int encontrarMaximo(int x, int y);

int main(){
    int n1, n2;
    cout<<"Ingrese 2 numeros: "; cin>>n1>>n2; 
    cout << "\nEl numero mayor es el "<< encontrarMaximo(n1,n2);
    

    return 0;
}

// definicion de funcion
int encontrarMaximo(int x, int y){
    int num_maximo;
    if (x>y){
        num_maximo = x;
    } else {
        num_maximo = y;
    }

    return num_maximo;

}
