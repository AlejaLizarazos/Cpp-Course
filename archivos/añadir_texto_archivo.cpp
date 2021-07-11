#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;

void aniadir();

int main(){

    aniadir();

    return 0;
}


void aniadir(){
    ofstream archivo;
    string texto;

    archivo.open("prueba.txt",ios::app); //Abrimos el archivo en modo añadir texto
    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo\n";
        exit(1);
    }

    cout<<"Digite el texto que quiere añadir: ";
    getline(cin,texto);

    archivo<<texto<<endl;

    archivo.close(); //cerramos el archivo
}