/*realice un programa  que solicite al usuario que piense un numero entero entre el 1 y el 100 e indicarle al usuario so el numero 
que digito es menor o mayor al numero aleatorio, asi hasta que lo adivine y por ultimo mostrarle el numero de intentos que le llevo

Para el numero random es:
    variable = limite_inferior + rand() % (limite_superior + 1 - limite_inferior);
*/

#include <iostream>
#include <time.h> //para el numero aleatorio
using namespace std; 

int main(){
    int n, dato, intentos = 0;
    srand(time(NULL)); //genera un numero aleatorio
    dato = 1 + rand() % (100);
    do{
        cout<<"\nDigite un numero: "; cin>>n;
        intentos++;
        if(n>dato){
            cout<<"El numero es menor"<< endl;
        } else if (n<dato) {
            cout<<"El numero es mayor"<< endl;
        }
    } while (n!= dato);
    cout <<"\nEncontraste el numero, tu cantidad de intentos fue " << intentos; 
    return 0;
}
