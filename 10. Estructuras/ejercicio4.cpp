/*
Defina una estructura que indique el tiempo empleado por un ciclista en una etapa. La estructura debe tener tres campos: hora, minutos
y segundos. Escriba un programa que dado n etapas calcule el tiempo total empleado en correr todas las etapas
*/

#include <iostream>
using namespace std;

struct tiempo{
    int hora;
    int minutos;
    int segundos;
}etapas[100];

int main(){
    int n_etapas, total_h = 0, total_m = 0, total_s= 0;
    cout<< "Ingrese el numero de etapas: "; cin>>n_etapas;
    for (int i = 0; i<n_etapas; i++){
        
        cout<<"\nEtapa numero " << i+1 << endl;
        cout<<"Horas: " ; cin>>etapas[i].hora;
        cout<<"Minutos: "; cin>>etapas[i].minutos;
        cout<<"Segundos: "; cin>>etapas[i].segundos; 
        total_h += etapas[i].hora;
        total_m += etapas[i].minutos;
        if (total_m >= 60){
            total_m-=60;
            total_h++;
        }
        total_s += etapas[i].segundos;
        if (total_s >= 60){
            total_s-=60;
            total_m++;
        }
    }

    cout<<"El tiempo total en " << n_etapas << " estapas es de: " << total_h << " horas con " << total_m <<" minutos y " << total_s << " segundos";


    return 0;
}
