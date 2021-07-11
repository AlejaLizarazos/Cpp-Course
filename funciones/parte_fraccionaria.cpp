#include <iostream>

using namespace std;

template <class TIPOD>
void parteFraccionaria(TIPOD numero);

void parteFraccionaria2(float numerof, int numero);


int main(){

    float num1 = 45.67;
    float num2 = -45.67;
    int num3 = 62;

    parteFraccionaria(num1);
    parteFraccionaria(num2);
    parteFraccionaria(num3);
    cout<<'\n';

    parteFraccionaria2(num1,num1);
    parteFraccionaria2(num2,num2);
    parteFraccionaria2(num3,num3);

    return 0;
}

template <class TIPOD>
void parteFraccionaria(TIPOD numero){
    cout<<"La parte fraccionaria es: "<<numero-(int)numero<<endl;
}

void parteFraccionaria2(float numerof, int numero){
    cout<<"La parte fraccionaria es: "<<numerof-numero<<endl;
}