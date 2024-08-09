//invertir una cadena - Funcion strrev()

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char cad[] = "reconocer"; //palindromo 
    strrev(cad);
    cout<<cad<<endl;

    return 0;
}