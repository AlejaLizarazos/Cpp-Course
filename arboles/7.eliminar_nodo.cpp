/*Insertar  nodos en un árbol binario de búsqueda */

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *der;
    Nodo *izq;
    Nodo *padre;
};

Nodo *crearNodo(int, Nodo *);
void insertarNodo(Nodo *&, int, Nodo *);
void mostrarArbol(Nodo *, int);
bool busqueda(Nodo *,int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminar(Nodo *, int);
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *);
void reemplazar(Nodo *, Nodo *);
void destruirNodo(Nodo *);
void menu();

Nodo *arbol = NULL;

int main(){
    menu();
    return 0;
}

Nodo *crearNodo(int n, Nodo *padre){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;
    nuevo_nodo->padre = padre;

    return nuevo_nodo;  
}

void insertarNodo(Nodo *&arbol, int n, Nodo *padre){
    if(arbol == NULL){
        Nodo *nuevo_nodo = crearNodo(n, padre);
        arbol = nuevo_nodo;

    }
    else{ //árbol tiene un nodo o más
        int valorRaiz = arbol->dato;
        if (n < valorRaiz){ //Si valor es menor que la raiz
            insertarNodo(arbol->izq,n, arbol);
        }   
        else{//Si valor es mayor que la raiz
            insertarNodo(arbol->der,n, arbol);
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

/*Funcion para recorrido en profundidad: preOrden*/
void preOrden(Nodo *arbol){
    if(arbol == NULL){
        return;
    }
    else{
        cout<<arbol->dato<<" - ";
        preOrden(arbol->izq);
        preOrden(arbol->der);
    }
}
/*Funcion para recorrido inOrden*/
void inOrden(Nodo *arbol){
    if(arbol == NULL){
        return;
    }
    else{
        inOrden(arbol->izq);
        cout<<arbol->dato<<" - ";
        inOrden(arbol->der);
    }
}

void postOrden(Nodo *arbol){
    if(arbol == NULL){
        return;
    }
    else{
        postOrden(arbol->izq);
        postOrden(arbol->der);
        cout<<arbol->dato<<" - ";
    }
}

void eliminar(Nodo *arbol, int n){
    if(arbol == NULL){
        return;
    }
    else if(n < arbol->dato){ //Buscar por la izquierda
        eliminar(arbol->izq,n);
    }
    else if(n > arbol->dato){ //Buscar por la derecha
        eliminar(arbol->der,n);
    }
    else{ //Si ya encontraste el valor del nodo
        eliminarNodo(arbol);
    }
}

void eliminarNodo(Nodo *nodoEliminar){
    if(nodoEliminar->izq && nodoEliminar->der){ //Si tiene ambos hijos
        Nodo *menor =  minimo(nodoEliminar->der);
        nodoEliminar->dato = menor->dato;
        eliminarNodo(menor);
    }
    else if(nodoEliminar->izq){ //si tiene hijo izquierdo
        reemplazar(nodoEliminar, nodoEliminar->izq);
        destruirNodo(nodoEliminar);
    }
    else if(nodoEliminar->der){ //si tiene hijo derecho
        reemplazar(nodoEliminar, nodoEliminar->der);
        destruirNodo(nodoEliminar);
    }
    else{ //Nodo sin hijos (nodo hoja)
        reemplazar(nodoEliminar,NULL);
        destruirNodo(nodoEliminar);
    }

    
}
Nodo *minimo(Nodo *arbol){ //Determinar el nodo más isquierdo posible
    if(arbol==NULL){
        return NULL;
    }
    if(arbol->izq){ //si tiene hijo izquierdo   
        return minimo(arbol->izq);
    }
    else{ //si no tiene hijo izquierdo
        return arbol;
    }
}

void reemplazar(Nodo *arbol, Nodo *nuevoNodo){ //Reemplazar un nodo por otro
    if(arbol->padre){
        //arbol->padre asignarle su nuevo hijo
        if(arbol->dato == arbol->padre->izq->dato){
            arbol->padre->izq = nuevoNodo;
        }
        else if(arbol->dato == arbol->padre->der->dato){
            arbol->padre->der = nuevoNodo;
        }
    }
    if(nuevoNodo){
        //procedemos a asignarle su nuevo padre
        nuevoNodo->padre = arbol->padre;
    }
}

void destruirNodo(Nodo *nodo){ //función para destruir Nodo
    nodo->izq = NULL;
    nodo->der = NULL;
    delete nodo;
}

void menu(){
    int opcion, dato, contador = 0;

    do{
        cout<<"\t.:Menu:.\t\n";
        cout<<"1. Insertar un nuevo nodo\n";
        cout<<"2. Mostrar el árbol completo\n";
        cout<<"3. Buscar un elemento en el arbol\n";
        cout<<"4. Recorrer el árbol en preOrden\n";
        cout<<"5. Recorrer el árbol en inOrden\n";
        cout<<"6. Recorrer el árbol en postOrden\n";
        cout<<"7. Eliminar un nodo del árbol\n";
        cout<<"8. Salir\n";
        cout<<"Opcion: ";
        cin>>opcion;
        switch (opcion)
        {
        case 1:
            cout<<"\nDigite un numero: ";
            cin>>dato;
            insertarNodo(arbol,dato, NULL);
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
                cout<<"\n El elemento ha sido encontrado\n";
            }
            else{
                cout<<"\n El elemento NO ha sido encontrado\n";
            }
            cout<<"\n";
            break;
        case 4:
            cout<<"\nRecorrido en preOrden: \n\n";
            preOrden(arbol);
            cout<<"\n\n";
            break;
        case 5:
            cout<<"\nRecorrido en inOrden: \n\n";
            inOrden(arbol);
            cout<<"\n\n";
            break;
        case 6:
            cout<<"\nRecorrido en postOrden: \n\n";
            postOrden(arbol);
            cout<<"\n\n";
            break;
        case 7:
            cout<<"\nDigite el nodo a eliminar: ";
            cin>>dato;
            eliminar(arbol, dato);
            cout<<"\nElemento eliminado con éxito: \n\n";
            cout<<"\n";
            break;
        }
        
    }while(opcion != 8);
}