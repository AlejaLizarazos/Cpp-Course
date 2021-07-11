//Programa para que el usuario adivine un número aleatorio generado por la máquina de 1 a 100

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){

    int numero,dato,intentos = 0;

    srand(time(NULL));//Número aleatorio
    dato = 1 + rand() % (100 + 1 -1); 
    
    do{
        cout<<"Digite un numero: ";cin>>numero;
        if(numero>dato){
            cout<<"Digite un nummero menor"<<endl;
        }
        else if(numero<dato){
            cout<<"Digite un nummero mayor"<<endl;
        }
    }while(numero != dato);

    cout<<"ADIVINASTE EL NUMERO, intentos: "<<intentos;



    return 0;
}