// Realice un programa que lea un valor entero y determine si se trata de un numero par o impar 

#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Ingrese el numero: "; cin>>a;
    
    if (a == 0){
        cout<<"El numero es 0";
    } else if (a%2 == 0){ // El numero par cuando tiene resto 0
        cout<<"Es un numero par"; 
    } else {
        cout<<"El numero es impar";
    }



}