//Programa que lee cada 4 horas la temperatura del día surante 24 horas (6 al día)
//Y calcular temperatura media, mínima y máxima

#include <iostream>
using namespace std;

int main(){

    float temp = 0, media= 0, min, max;
    int mediciones = 0;

    do{
        cout<<"Leer temperatura: ";cin>>temp;
        
        media = (mediciones * media + temp)/ (mediciones+1); //Promedio recursivo

        if (!mediciones){
            min = temp; max = temp; // inicialización
        }

        if (temp >= max){
            max = temp;
        }
        else {
            min = temp;
        }

        mediciones++;
        

    }while(mediciones<6);

    cout<<"Media: "<<media<<" , Maximo: "<<max<<" , Minimo: "<<min<<endl;

    return  0;
}