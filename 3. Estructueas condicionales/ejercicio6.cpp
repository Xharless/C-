//hacer un programa que simule un cajero automatico con un saldo inicial de 1000 dolares

#include <iostream>
using namespace std;

int main(){
    int saldo_inicial = 1000, ingreso_saldo, retiro; 
    char opcion;
    cout<<"\t CAJERO AUTOMATICO"<<endl;   
    cout<<"1. Ingresar dinero"<<endl;
    cout<<"2. Retirar dinero"<< endl;
    cout<<"3. Salir"<< endl;
    cout<<"Ingresa una opcion: "; cin>>opcion;
    switch (opcion){
    case '1': 
        cout<<"Ingrese la cantidad de saldo a depositar: "; cin>>ingreso_saldo;
        saldo_inicial+=ingreso_saldo;
        cout<<"Tu saldo total es de: " << saldo_inicial; 
        break;
    case '2':
        cout<<"Ingrese la cantidad a retirar: "; cin>>retiro;
        if (retiro<=saldo_inicial){
            saldo_inicial-=retiro;
            cout<<"Has retirado con exito tu dinero"<<endl;
            cout<<"Tu saldo es de: " << saldo_inicial;

        } else {
            cout<<"La cantidad deseada supera tu saldo inicial";
        }
        break;
    case '3': 
        cout<<"\tHasta luego!";
        break;

    default:
        cout<<"Error"<< endl;
        break;
    }

    return 0;
}