#include <iostream>

using namespace std;

int main(){
    int numeros[]={4,3,2,5,1};
    int i,j,aux,min;

    for(i=0;i<5;i++){
        min = i;
        for(j=i+1;j<5;j++){
            if(numeros[j]<numeros[min]){
                min = j;
            }
        }
        aux = numeros[i];
        numeros[i] = numeros[min];
        numeros[min] = aux;
    }

    cout<<"Orden Ascendente: ";
    for(i=0;i<5;i++){
        cout<<numeros[i]<<" ";
    }
    cout<<endl;

    return 0;
}