#include <iostream>
using namespace std;

struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char barrio[20];
};

struct empleado{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
}empleados[2];

int main(){

    for(int i =0;i<2;i++){
        fflush(stdin); /*Vaciar el bffer y permitir digitar los valores*/
        cout<<"Digite su nombre: ";
        cin.getline(empleados[i].nombre,20,'\n');
        cout<<"Digite su direccion: ";
        cin.getline(empleados[i].dir_empleado.direccion,30,'\n');
        cout<<"Digite su ciudad: ";
        cin.getline(empleados[i].dir_empleado.ciudad,20,'\n');
        cout<<"Digite su barrio: ";
        cin.getline(empleados[i].dir_empleado.barrio,20,'\n');
        cout<<"Digite su salario: ";
        cin>>empleados[i].salario;
        cout<<'\n';
    }
    cout<<"Implimiendo datos...\n\n";
    for(int i  = 0;i<2;i++){
        cout<<"Nombre: "<<empleados[i].nombre<<endl;
        cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
        cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
        cout<<"Barrio: "<<empleados[i].dir_empleado.barrio<<endl;
        cout<<"Salario: "<<empleados[i].salario<<endl;
        cout<<'\n';
    }

    return 0;
}