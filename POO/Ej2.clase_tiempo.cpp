#include <iostream>
#include <stdlib.h>

using namespace std;

class Tiempo{
    private:
        int horas, minutos, segundos;
    public:
        Tiempo(int, int, int); //Constructor 1 
        Tiempo(int); //Constructor 2
        void mostrarTiempo();

};

Tiempo::Tiempo(int _horas, int _minutos, int _segundos){
    horas = _horas;
    minutos = _minutos;
    segundos = _segundos;
}

Tiempo::Tiempo(int tiempoSeg){
    horas = tiempoSeg / 3600; //Extraer horas
    tiempoSeg %= 3600;
    minutos = tiempoSeg / 60; //Extraer los minutos
    segundos = tiempoSeg % 60; //Extraer los segundos
}

void Tiempo::mostrarTiempo(){
    cout<<"La hora es: "<<horas<<":"<<minutos<<":"<<segundos<<endl;
}

int main(){

    Tiempo horaActual(16,23,30);
    horaActual.mostrarTiempo();

    Tiempo haceUnaHora(55410);
    haceUnaHora.mostrarTiempo();


    return 0;
}