//Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta la matriz traspuesta es 

/*
|1 2 3|       |1 4 7|
|4 5 6|   --> |2 5 8|
|7 8 9|       |3 6 9|
*/

#include <iostream>
using namespace std;

int main(){
    int matriz[3][3] = {1,2,3,
                        4,5,6,
                        7,8,9};

    cout<<"La matriz traspuesta es: "<<endl;
    for (int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<matriz[j][i];
        }
        cout<<"\n";
    }
    return 0;
}