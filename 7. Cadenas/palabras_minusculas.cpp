// pasar una palabra a minusculas - Funcion strlwr()
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char palabra[] = "CARLOS";
    strlwr(palabra);
    cout<<palabra;

    return 0;
}