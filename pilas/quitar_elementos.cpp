#include <iostream>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, int); //Se pasa por referencia, ya que la pila cambia
void sacarPila(Nodo *&,int &);

int main(){
    Nodo *pila = NULL;
    int dato;

    cout<<"Digite un número: ";
    cin>>dato;
    agregarPila(pila, dato);

    cout<<"Digite otro número: ";
    cin>>dato;
    agregarPila(pila, dato);

    cout<<"\nSacando los elementos de la pila: ";
    while(pila != NULL){ //Mientras no sea el final de la pila
        sacarPila(pila, dato);
        if (pila != NULL){
            cout<<dato<<" , ";
        }
        else{
            cout<<dato<<" . ";
        }
    }

    return 0;
}

void sacarPila(Nodo *&pila,int  &n){
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}

void agregarPila(Nodo *&pila, int n){
    Nodo *nuevo_nodo = new Nodo(); //Espacio de memoria para el nodo
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;

    cout<<"\nElemento "<<n<<"agregado a pila correctamente"<<endl;
}