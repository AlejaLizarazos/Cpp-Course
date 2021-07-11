//Programa que lee de la entrada estándar números hasta que se introduzca un cero
//En ese momento le programa termina y muestra en la salida estándar el número de 
// valores mayores a cero leídos.

#include <iostream>

using namespace std;

main(){

    int numero;
    int positivos = 0;

    do{
        cout<<"Ingrese números: ";cin>>numero;
        if(numero>0){
            positivos++;
        }
    }while(numero != 0);

    cout<<"La cantidad de valores positivos ingresados fue de :"<<positivos<<endl;

    return 0;
}