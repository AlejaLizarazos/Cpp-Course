#include <iostream>

using namespace std;

int main(){
    int n, suma_antes, suma_despues, resultado;


    cout<<"Ingrese un número n: ";
    cin>>n;

    for(int i=n/2;i<n;i++){
        suma_antes = (i-1)*(i)/2;
        suma_despues = n*(n+1)/2 - (i-1)*(i)/2 - i; 
        if(suma_antes == suma_despues){
            resultado = i;
            break;
        }else{
            resultado = -1;
        }
    }
    cout<<"Resultado: "<<resultado<<endl;

    return 0;
}