//Herencia en POO

#include <iostream>
#include <stdlib.h>

using namespace std;

class Persona{
    private: 
        string nombre;
        int edad;
    public:
        Persona(string,int);
        void mostrarPersona();
};

class Empleado : public Persona{
    private: 
        float sueldo;
    public:
        Empleado(string,int,float);
        void mostrarEmpleado();
};

class Estudiante : public Persona{
    private: 
        float notaFinal;
    public:
        Estudiante(string, int, float);
        void mostrarEstudiante();
};

class Universitario : public Estudiante{
    private: 
        string carrera;
    public:
        Universitario(string,int,float, string);
        void mostrarUniversitario();
};

Persona::Persona(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

//Constructor (clase hija de persona)
Empleado::Empleado(string _nombre, int _edad, float _sueldo) : Persona(_nombre, _edad){
    sueldo = _sueldo;
}

//Constructor (clase hija de persona, padre de universitario)
Estudiante::Estudiante(string _nombre, int _edad, float _notaFinal) : Persona(_nombre, _edad){
    notaFinal = _notaFinal;
}

//Constructor (clase hija de estudiante)
Universitario::Universitario(string _nombre, int _edad, float _notaFinal, string _carrera) : Estudiante(_nombre, _edad, _notaFinal){
    carrera = _carrera;
}

void Persona::mostrarPersona(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}

void Empleado::mostrarEmpleado(){
    mostrarPersona();
    cout<<"Sueldo: "<<sueldo<<endl;
}

void Estudiante::mostrarEstudiante(){
    mostrarPersona();
    cout<<"Nota final: "<<notaFinal<<endl;
}

void Universitario::mostrarUniversitario(){
    mostrarEstudiante();
    cout<<"Carrera: "<<carrera<<endl;
}


int main(){

    Empleado empleado1("Carlos", 35, 1300);
    cout<<"-Empleado-"<<endl;
    empleado1.mostrarEmpleado();
    cout<<"\n";

    Estudiante estudiante1("Aleja", 20, 5);
    cout<<"-Estudiante-"<<endl;
    estudiante1.mostrarEstudiante();
    cout<<"\n";

    Universitario universitario1("Aleja", 20, 5, "Ingeniería");
    cout<<"-Universitario-"<<endl;
    universitario1.mostrarUniversitario();
    cout<<"\n";


    return 0;
}