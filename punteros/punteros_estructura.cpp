#include <iostream>

using namespace std;

struct Persona{
    char nombre[30];
    int edad;
}persona, *puntero_persona = &persona;

void pedirDatos();
void mostrarDatos(Persona *);

int main(){
    pedirDatos();
    mostrarDatos(puntero_persona);
    return 0;  
}

void pedirDatos(){
    cout<<"Digite su nombre: ";
    cin.getline(puntero_persona->nombre, 30, '\n');
    cout<<"Digite su edad: ";
    cin>>puntero_persona->edad;
}

void mostrarDatos(Persona *puntero_persona){
    cout<<"\nSu nombre: "<<puntero_persona->nombre<<endl;
    cout<<"\nSu edad: "<<puntero_persona->edad<<endl;
}