/*
intercambiar el valor de 2 variables utilizando paso de parametros por referencia
*/

#include <iostream>
using namespace std;


void intercambiar(int&, int&);

int main(){
    int n1=10, n2=15;
    cout<<"El valor de numero 1 es " << n1 << endl;
    cout<<"El valor de numero 2 es " << n2 << endl;
    intercambiar(n1,n2);
    cout<<"\nEl nuevo valor de numero 1 es " << n1 << endl;
    cout<<"El nuevo valor de numero 2 es " << n2 << endl;


    return 0;

}

void intercambiar(int& n1, int& n2){
    int aux;
    aux = n1;
    n1 = n2;
    n2 = aux;
}