// sacar el valor absuluto de un numero, pero no sabemos que tipo de numero es, si es entero, flotante o double, y para eso utilizamos una
// plantilla que sirve para casos generales

#include <iostream>
using namespace std;

// prototipo de funcion
template <class TIPOD> // puede ser cualquier nombre
void mostrarABS(TIPOD numero); // TIPOD significa que puede ser un tipo de dato general (tomar int o float o double)

int main(){
    int num1 = -4;
    float num2 = -56.67;
    double num3 = -123.45678;
    mostrarABS(num1);
    mostrarABS(num2);
    mostrarABS(num3);
    return 0;
}

template <class TIPOD>
void mostrarABS(TIPOD numero){
    if (numero<0){
        numero*=-1;
    }
    cout<<"El valor abs del numero es: " << numero << endl;
}