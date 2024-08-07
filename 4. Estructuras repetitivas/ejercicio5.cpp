//escriba ujn programa que calcule el valor de: 1*2*3*...*n
#include <iostream>
using namespace std;

int main(){
    int n, multiplicacion = 1;
    cout<<"Ingrese la cantidad de elementos: "; cin>>n;
    for(int i=1 ; i<=n ;i++){
        multiplicacion *= i ;
    }
    cout<<"El valor factorial es: " << multiplicacion; 

    return 0;
}