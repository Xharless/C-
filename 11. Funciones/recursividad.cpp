/*
factorial de un numero 3! = 3*2*1 = 3* 2!
    factorial (n) = 1 , si n = 0
    n*factorial(n-1) ,  si n>0

*/

#include <iostream>
using namespace std;

int factorial(int);

int main(){
    int numero; 
    cout << "Numero a calcular en factorial: "; cin >> numero;
    cout << "\nEl resultado es: " << factorial(numero);

    return 0;
}

int factorial (int n){
    if (n == 0){
        n = 1;
    } else {
        n = n* factorial(n-1);
    }
    return n;

}