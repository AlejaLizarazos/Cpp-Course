#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void menu();
void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);

Nodo *lista = NULL;

int main(){

    menu();

    return 0;
}

void insertarLista(Nodo *&lista, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;

    Nodo *aux1 = lista;
    Nodo *aux2;

    while((aux1 != NULL)&&(aux1->dato < n)){
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }
    if(lista == aux1){
        lista = nuevo_nodo;
    }
    else{
        aux2->siguiente = nuevo_nodo;
    }
    nuevo_nodo->siguiente = aux1;

    cout<<"Elemento "<<n<<" insertado en la lista correctamente."<<endl;
}

void mostrarLista(Nodo *lista){
    Nodo *actual = new Nodo();
    actual = lista;
    while(actual!=NULL){
        cout<<actual->dato<<" -> ";
        actual = actual->siguiente;
    }
}

void menu(){
    int opcion, dato;

    do{
        cout<<"\t.:Menu:.\t\n";
        cout<<"1. Insertar elementos de la lista\n";
        cout<<"2. Mostrar elementos de la lista\n";
        cout<<"3. Salir\n";
        cin>>opcion;
        switch (opcion)
        {
        case 1:
            cout<<"Digite un numero: ";
            cin>>dato;
            insertarLista(lista,dato);
            cout<<"\n";
            break;
        case 2: 
            mostrarLista(lista);
            cout<<"\n";
            break;
        }
    }while(opcion != 3);
}