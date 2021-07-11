/* Sacar el valor absoluto de un número*/
#include<iostream>

using namespace std;

//prototipo de función
template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main(){
    int num1 = 4;
    float num2 = 56.67;
    double num3 = 123.4525;

    mostrarAbs(num1);
    mostrarAbs(num2);
    mostrarAbs(num3);

    return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero){
    if(numero<0){
        numero = numero * -1;
    }
    cout<<"El valor absoluto del número es: "<<numero<<endl;

}