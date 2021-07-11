#include <iostream>

using namespace std;

int main(){
    int numeros[]={4,2,3,5,1};
    int i,pos,aux;

    //Algoritmo del ordenamiento por insercion
    for(i=0;i<5;i++){
        pos = i;
        aux = numeros[i];
        while(pos>0 && numeros[pos-1]>aux){
            numeros[pos] = numeros[pos-1];
            pos--;
        }
        numeros[pos] = aux;
    }
    cout<<"Orden Ascendente: ";
    for(i=0;i<5;i++){
        cout<<numeros[i]<<" ";
    }
    cout<<endl;
    return 0;
}