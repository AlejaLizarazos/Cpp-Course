#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

void escribir();

int main(){

    escribir();

    return 0;
}

void escribir(){
    ofstream archivo;
    string nombreArchivo, frase;

    cout<<"digite el nombre del archivo: ";
    getline(cin,nombreArchivo);

    archivo.open(nombreArchivo.c_str(),ios::out); //abriendo el archivo
    
    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

    cout<<"\nDigite el texto del archivo: ";
    getline(cin,frase);

    archivo<<frase;
    archivo<<"Creando un archivo de texto";
    archivo.close(); //cerrar el archivo
}