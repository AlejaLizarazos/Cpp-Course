//Clases en C++

#include <iostream>
#include <stdlib.h>

using namespace std;


/*(Abstracción y encasulamiento)*/
class Persona{
    private: //Atributos (características) de la persona
        int edad;
        string nombre;
    public: //Métodos (acciones) de la persona
        Persona(int,string); //Constructor de la clase
        void leer();
        void correr();
};

//Constructor para inicializar los atributos
Persona::Persona(int _edad, string _nombre){
    edad = _edad;
    nombre = _nombre;
}

void Persona::leer(){
    cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<endl;
}

void Persona::correr(){
    cout<<"Soy "<<nombre<<", estoy corriendo una maraton y tengo "<<edad<<" años"<<endl;
}

int main(){

    //Dos formas de inicialización
    Persona p1 = Persona(20,"Alejandra");
    Persona p2(19, "María");
    Persona p3(21,"Juan");

    p1.leer();
    p2.correr();
    p3.leer();
    p3.correr();

    return 0;
}