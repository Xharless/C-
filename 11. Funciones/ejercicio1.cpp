// escriba una funcion llamada mult() que acepte dos numeros en punto flotante como parametros, multiplique estos dos numeros y muestre 
// resultado

#include <iostream>
using namespace std;

void pedirDatos();
void mul(float x, float y);
float num1,num2; // no se podian definir en el void, por lo que tienen que ser variables globales

int main(){
    pedirDatos();
    mul(num1,num2);
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese 2 numeros: "; cin>>num1>>num2;

}

void mul(float x, float y){
    float multiplicacion;
    multiplicacion = x*y;
    cout << "La multiplicacion es: " << multiplicacion << endl;
}
