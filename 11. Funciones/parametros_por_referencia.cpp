// paso de parametros por referencia, en ves de pasarle el valor de una variable, se le pasa la direccion de memoria


#include <iostream>
using namespace std;

void valNuevo(int&, int&);

int main(){
    int n1,n2;
    cout<<"Ingrese 2 numeros: "; cin>>n1>>n2;
    valNuevo(n1,n2);
    cout<<"El nuevo valor de los numeros son : " << n1 <<" y " << n2;
    return 0;
}

void valNuevo(int& xnum1, int& ynum){
    // estamos imprimiendo el numero que se encuentra en las direcciones de memoria
    cout<<"El valor del primer numeros es: " << xnum1<<endl;
    cout<<"El valor del segundo numeros es: " << ynum<<endl;
    // reemplaza los valores en la direccion de memoria
    xnum1 = 89;
    ynum = 45;
 
}