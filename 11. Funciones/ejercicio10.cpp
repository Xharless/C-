/* 
escriba una funcion recursiva que calcule un numero elevado a una potencia entrea mayor o igual a cero

potencia(x,y) = x                     ,y = 1;
                x*potencai(x,y-1)     , y>1
*/

#include <iostream>
using namespace std;

int potencia(int, int);

int main(){
    int base, exponente;
    cout << "Digite una base: "; cin>>base;
    cout << "Digite el exponente: "; cin>>exponente;

    cout << "\nLa potencia de " << base << " elevado a " << exponente << " es: " << potencia(base,exponente);

    return 0;
}

int potencia(int x, int y){
    int pot;
    if (y == 1){
        pot = x;
    } else {
        pot = x*potencia(x, y-1);
    }
    return pot;
}