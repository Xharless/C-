//desarrolle un programa que lea de la entrada un vector de enteros y determine el mayor elemento del vector
#include <iostream>
using namespace std;

int main(){
    int numero[100],n,mayor=0;
    cout<<"Ingrese numero de elementos: "; cin>>n;
    for(int i = 0; i<n; i++){
        cout<<i+1<<". Ingrese un numero: "; cin>>numero[i];
        if(numero[i] > mayor){
            mayor=numero[i];
        }
    }
    cout<<"El numero mayor de la lista es: " << mayor;

    return 0;
}