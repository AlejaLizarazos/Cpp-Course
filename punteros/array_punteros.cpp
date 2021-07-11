#include <iostream>

using namespace std;

int main(){
    int numeros[] = {1,2,3,4,5};
    int *dir_numeros;

    dir_numeros = numeros; /*equivalente a &numeros[0]*/

    for (int i=0;i<5;i++){
        cout<<"Elemento del vector ["<<numeros[i]<<"]: "<<*dir_numeros++<<endl;
    }

    for (int i=0;i<5;i++){
        cout<<"Posicion de memoria para ["<<numeros[i]<<"]: "<<dir_numeros++<<endl;
    }
}