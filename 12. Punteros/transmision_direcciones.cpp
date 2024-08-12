/*
Transmision de direcciones

ej: Intercambiar el valor de 2 variables
*/

#include <iostream>
using namespace std;

void intercambiar(float *,float *);

int main(){
    float n1 = 20.8, n2 = 6.78;
    cout << "Primer numero: " << n1 << endl;
    cout << "Segundo numero: " << n2 << endl;

    intercambiar(&n1, &n2);
    cout<<"\n\n";
    cout << "El nuevo valor de n1 es: " << n1 << endl;
    cout << "El nuevo valor de n2 es: " << n2 << endl;

    return 0;
}

void intercambiar(float* dir_n1, float* dir_n2){
    float aux;
    // intercambiar los valores de las variables
    aux = *dir_n1;
    *dir_n1 = * dir_n2;
    *dir_n2 = aux; 
}

