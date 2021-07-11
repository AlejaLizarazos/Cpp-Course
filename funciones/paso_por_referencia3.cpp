/* Intercambiar el valor de 2 variables utilizando paso de 
parámetros por referencia */

#include <iostream>

using namespace std;

void intercambiar(int&,int&);

int main(){
    int num1=10, num2=15;

    cout<<"El valor de num1 es: "<<num1<<endl;
    cout<<"El valor de num2 es: "<<num2<<endl;

    intercambiar(num1,num2);

    cout<<'\n';
    cout<<"El nuevo valor de num1 es: "<<num1<<endl;
    cout<<"El nuevo valor de num2 es: "<<num2<<endl;


    return 0;
}

void intercambiar(int& num1,int& num2){
    int aux;

    aux = num1;
    num1 = num2;
    num2 = aux;
}