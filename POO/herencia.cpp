//Herencia en POO

#include <iostream>
#include <stdlib.h>

using namespace std;

class Persona{
    private: //Protected para que las clases heredadas puedan manipularlas
        string nombre;
        int edad;
    public:
        Persona(string,int);
        void mostrarPersona();
};

class Alumno : public Persona{
    private:
        string codigoAlumno;
        float notaFinal;
    public:
        Alumno(string, int, string, float);
        void mostrarAlumno();
};

Alumno::Alumno(string _nombre, int _edad, string _codAlumno, float _notaFinal) : Persona(_nombre,_edad) {
    codigoAlumno = _codAlumno;
    notaFinal = _notaFinal;
}

Persona::Persona(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

void Alumno::mostrarAlumno(){
    mostrarPersona();
    cout<<"Codigo alumno: "<<codigoAlumno<<endl;
    cout<<"Nota final: "<<notaFinal<<endl;
}

void Persona::mostrarPersona(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}



int main(){

    Alumno alumno1("Alejandro", 20, "1231435", 15.6);
    alumno1.mostrarAlumno();

    return 0;
}