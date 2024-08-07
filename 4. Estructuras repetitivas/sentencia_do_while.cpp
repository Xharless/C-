/* 
    do{
        intrucciones;    siempre se hace el primer caso y luego pregunta si tengo que repetirlo
    } while (expresion); 

*/

#include <iostream>
using namespace std;

int main(){
    int i = 10;
    do{
        cout<<i<<endl;
        i--;
    } while (i>=1);
    return 0;
}