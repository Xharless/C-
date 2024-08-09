#include <iostream>
#include <string.h> //para las cadenas
using namespace std;

int main(){
    char palabra[] = "Carlos"; // lo que va dentro de los corchetes es la cantidad de elementos,
    char nombre[30]; // hay espacio de 30
    // el cin no es buena idea tomarlo con los caracteres
    cout<<"Digite su nombre: "; cin.getline(nombre, 30, '\n'); // va la variable, luego el espacio que hay y que termine cunado haga salto de linea
    cout<<nombre;



    return 0;
}