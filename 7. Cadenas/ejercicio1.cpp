// Realice un programa que lea una cadena de caracteres de la entrada estandar y muestre en la salida estandas cuantas ocurrencua de cada 
// vocal existen en una cadena

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char frase[30];
    int vocal_a=0,vocal_e=0,vocal_i=0,vocal_o=0,vocal_u=0, largo = 0;
    cout <<"Ingrese una frase: "; 
    cin.getline(frase, 30, '\n');
    largo = strlen(frase);
    for(int i = 0; i<largo; i++){
        switch(frase[i]){
            case 'a': vocal_a+=1; break;
            case 'e': vocal_e+=1; break;
            case 'i': vocal_i+=1; break;
            case 'o': vocal_o+=1; break;  
            case 'u': vocal_u+=1; break;      
            
        }
    }

    cout<<"Vocal a: " <<vocal_a << endl;
    cout<<"Vocal e: " <<vocal_e << endl;
    cout<<"Vocal i: " <<vocal_i << endl;
    cout<<"Vocal o: " <<vocal_o << endl;
    cout<<"Vocal u: " <<vocal_u << endl;

    return 0;
}