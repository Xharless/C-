//ahcer un programa que realice la serie fibonacci -> 1 1 2 3 5 8 13... 

#include <iostream>
using namespace std;

int main(){
    int n,x=0,y=1, z=1;
    cout<<"Cuantos elementos quieres de la serie?: "; cin>>n;
    cout<<"1 ";
    for (int i = 1; i< n ; i++){
        z = x + y;
        cout<<z<<" ";
        x = y;
        y = z;
    }

    return 0;
}