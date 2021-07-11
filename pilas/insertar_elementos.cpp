#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo {
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, int); //Se pasa por referencia, ya que la pila cambia

int main(){
    Nodo *pila = NULL;
    int n1, n2;

    cout<<"Digite un número: ";
    cin>>n1;
    agregarPila(pila, n1);

    cout<<"Digite otro número: ";
    cin>>n2;
    agregarPila(pila, n2);

    return 0;
}

void agregarPila(Nodo *&pila, int n){
    Nodo *nuevo_nodo = new Nodo(); //Espacio de memoria para el nodo
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;

    cout<<"\nElemento "<<n<<"agregado a pila correctamente"<<endl;
}