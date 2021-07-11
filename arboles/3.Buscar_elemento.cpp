/*Insertar  nodos en un árbol binario de búsqueda */

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *der;
    Nodo *izq;
};

Nodo *crearNodo(int);
void insertarNodo(Nodo *&, int);
void mostrarArbol(Nodo *, int);
bool busqueda(Nodo *,int);
void menu();

Nodo *arbol = NULL;

int main(){
    menu();
    return 0;
}

Nodo *crearNodo(int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;

    return nuevo_nodo;  
}

void insertarNodo(Nodo *&arbol, int n){
    if(arbol == NULL){
        Nodo *nuevo_nodo = crearNodo(n);
        arbol = nuevo_nodo;
    }
    else{ //árbol tiene un nodo o más
        int valorRaiz = arbol->dato;
        if (n < valorRaiz){ //Si valor es menor que la raiz
            insertarNodo(arbol->izq,n);
        }
        else{//Si valor es mayor que la raiz
            insertarNodo(arbol->der,n);
        }
    }
}

void mostrarArbol(Nodo *arbol, int cont){
    if(arbol == NULL){
        return;
    }
    else{
        mostrarArbol(arbol->der,cont+1);
        for (int i = 0; i < cont; i++)
        {
            cout<<"   ";
        }
        cout<<arbol->dato<<endl;
        mostrarArbol(arbol->izq,cont+1);
    }
}
/*Buscar elemento en el árbol*/
bool busqueda(Nodo *arbol,int n){
    if(arbol == NULL){
        return false;
    }
    else if(arbol->dato == n){
        return true;
    }
    else if(n < arbol->dato){
        return busqueda(arbol->izq,n);
    }
    else{
        return busqueda(arbol->der,n);
    }
}


void menu(){
    int opcion, dato, contador = 0;

    do{
        cout<<"\t.:Menu:.\t\n";
        cout<<"1. Insertar un nuevo nodo\n";
        cout<<"2. Mostrar el árbol completo\n";
        cout<<"3. Buscar un elemento en el arbol\n";
        cout<<"4. Salir\n";
        cout<<"Opcion: ";
        cin>>opcion;
        switch (opcion)
        {
        case 1:
            cout<<"\nDigite un numero: ";
            cin>>dato;
            insertarNodo(arbol,dato);
            cout<<"\nElemento insertado correctamente\n";
            break;
        case 2:
            cout<<"\nMostrando el árbol completo:\n\n";
            mostrarArbol(arbol,contador);
            cout<<"\n";   
            break;  
        case 3:
            cout<<"\nIngrese el elemento a buscar: ";
            cin>>dato;
            if(busqueda(arbol,dato)){
                cout<<"\n El elemento ha sido encontrado";
            }
            else{
                cout<<"\n El elemento NO ha sido encontrado";
            }
            cout<<"\n";
            break;
        }
        
    }while(opcion != 4);
}