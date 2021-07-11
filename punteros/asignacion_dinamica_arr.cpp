/*Pedir al usuario n calificaciones y almacenarlos en un arreglo dinámico*/

#include <iostream>
#include <stdlib.h> //Funciones new y delete (new reselva el número de bytes)
using namespace std;

//Prototipo de funcion
void pedirNotas();
void mostrarNotas();
int numCalif, *calif;

int main(){
    pedirNotas();
    mostrarNotas();

    delete[] calif; //Liberando el espacio en bytes utilizados anteriormente

    return 0;
}

void pedirNotas(){
    cout<<"Ingrese el número de calificaciones: ";
    cin>>numCalif;

    calif = new int[numCalif]; //Crear el arreglo dinámico

    for(int i=0;i<numCalif;i++){
        cout<<"Ingrese una nota: ";
        cin>>calif[i];
    }
}

void mostrarNotas(){
    cout<<"\nMostranddo notas del usuario:\n";
    for(int i=0;i<numCalif;i++){
        cout<<calif[i]<<endl;
    }
}