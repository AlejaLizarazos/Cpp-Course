#include <iostream>
#include <stdlib.h>

using namespace std;

class Fecha{
    private:
        int dia, mes, anio;
    public:
        Fecha(int, int, int); //Constructor 1
        Fecha (long); //Constructor 2
        void mostrarFecha();
};

/* Definiciones de fecha 9/7/2021 --- 20210709 */

//Constructor 1 
Fecha::Fecha(int _dia, int _mes, int _anio){
    dia = _dia;
    mes = _mes;
    anio = _anio;
}

//Constructor 2
Fecha::Fecha(long fecha){
    anio = int(fecha / 10000); //Extraer el año
    mes = int((fecha -  anio * 10000) / 100); //Extraer el mes
    dia = int(fecha - anio * 10000 - mes * 100);
}

void Fecha::mostrarFecha(){
    cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}

int main(){

    Fecha hoy(9, 7, 2021);
    Fecha ayer(20210708);
    hoy.mostrarFecha();
    ayer.mostrarFecha();

    return 0;
}