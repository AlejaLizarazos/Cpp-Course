#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

bool cola_vacia(Nodo *);
void insertarCola(Nodo *&, Nodo *&, int);

int main(){
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    int dato;

    cout<<"Digite un número: ";
    cin>>dato;
    insertarCola(frente, fin, dato);
    
    cout<<"\n\tElemento insertado a COLA correctamente \n";

    return 0;
}

void insertarCola(Nodo *&frente, Nodo *&fin, int n){
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if(cola_vacia(frente)){
        frente = nuevo_nodo;
    }
    else{
        fin->siguiente = nuevo_nodo;
    }

    fin = nuevo_nodo;
}

//Funcion para determinar si la  cola está vacía o no
bool cola_vacia(Nodo *frente){
    return (frente == NULL) ? true : false;
}