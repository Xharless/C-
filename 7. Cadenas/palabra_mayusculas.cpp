// Pasar una palabra a MAYUSCULA  - Funcion strupr()

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char palabra[] = "Carlos";
    strupr(palabra);
    cout<<palabra;

    return 0;
}