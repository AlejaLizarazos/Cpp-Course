#include<iostream>

using namespace std;

struct Persona{
    char nombre[20];
    int edad;
}
persona1 = {"Alejandra",20},
persona2 = {"Julian",15};

int main(){

    cout<<"Imprimiendo datos...\n\n";

    cout<<"Nombre 1: "<<persona1.nombre<<endl;
    cout<<"Edad 1: "<<persona1.edad<<endl;
    cout<<"\nNombre 2: "<<persona2.nombre<<endl;
    cout<<"Edad 2: "<<persona2.edad<<endl;
    
    return 0;
}