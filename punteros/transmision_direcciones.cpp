/* Intercambiar el valor de 2 variables */
#include <iostream>

using namespace std;

void intercambio(float *, float *);

int main(){
    float num1 = 20.6, num2 = 3.456;

    cout<<"Primero Número: "<<num1<<endl;
    cout<<"Segundo Número: "<<num2<<endl;

    intercambio(&num1, &num2);

    cout<<"\nDespues del intercambio: \n";
    
    cout<<"Primero Número: "<<num1<<endl;
    cout<<"Segundo Número: "<<num2<<endl;

    return 0;
}

void intercambio(float *dirNum1, float *dirNum2){
    float aux;

    aux = *dirNum1;
    *dirNum1 = *dirNum2;
    *dirNum2 = aux;

}