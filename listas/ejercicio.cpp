/*Crear una lista que almacene n números reales y calcular su suma y promedio de estos*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertarElemento(Nodo  *&, int);
void calcularSumaPromedio(Nodo *);

int main(){
    Nodo *lista = NULL;
    int dato;
    char respuesta;

    do{
        cout<<"Ingrese un dato: ";
        cin>>dato;
        insertarElemento(lista, dato);
        cout<<"\n¿Desea ingresar otro?(s/n) :";
        cin>>respuesta;
    }while(respuesta=='s' || respuesta=='S');

    calcularSumaPromedio(lista);
    return 0;
}

void insertarElemento(Nodo  *&lista, int n){
    Nodo *nuevo_nodo = new Nodo();
    Nodo *aux;

    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if(lista == NULL){
        lista = nuevo_nodo;
    }
    else {
        aux = lista;
        while(aux->siguiente != NULL){
            aux = aux->siguiente;
        }
        aux->siguiente = nuevo_nodo;
    }
    cout<<"\nElemento "<<n<<" agregado a la lista correctamente\n";
}

void calcularSumaPromedio(Nodo *lista){
    int suma = 0, elementos = 0;
    float promedio = 0;
    Nodo *aux = lista;

    while(aux!=NULL){
        suma = suma + aux->dato;
        aux = aux->siguiente;
        elementos++;
    }
    promedio = suma / elementos;

    cout<<"La suma es: "<<suma<<endl;
    cout<<"El promedio es: "<<promedio<<endl;

}