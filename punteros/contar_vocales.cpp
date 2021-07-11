#include <iostream>
#include <string.h>

using namespace std;

void pedirDatos();
int contandoVocales(char *);

char nombre[30];

int main(){
    pedirDatos();
    cout<<"\nEl numero de vocales del nombre es: "<<contandoVocales(nombre)<<endl;

    return 0;
}

void pedirDatos(){
    cout<<"Ingrese su nombre: ";
    cin.getline(nombre,30,'\n');

    strupr(nombre); //A mayúscula
}

int contandoVocales(char *nombre){
    int count = 0;
    while(*nombre){ //no sea nulo
        switch(*nombre){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U': count ++;
        }
        nombre ++;
    }
    return count;
}