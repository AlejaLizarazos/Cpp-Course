/*Determinar cual empleado tiene el mayor y menor salario*/
#include <iostream>

using namespace std;

struct empleado{
    char nombre[20];
    float salario;
}empleado[100];

int main(){

    int n_empleados, posM=0, posm = 0;
    float mayor = 0, menor = 999999;

    cout<<"Ingrese el número de empleados: ";
    cin>>n_empleados;
    fflush(stdin);
    for (int i=0;i<n_empleados;i++){
         fflush(stdin);
        cout<<i+1<<". Digite el nombre: ";
        cin.getline(empleado[i].nombre,20,'\n');
        cout<<i+1<<". Digite el salario: ";
        cin>>empleado[i].salario;

        if(empleado[i].salario > mayor){
            mayor = empleado[i].salario;
            posM = i;
        }
        if(empleado[i].salario < menor){
            menor = empleado[i].salario;
            posm = i;
        }
        cout<<"\n";
    }
    cout<<"\n Datos del empleado con mayor salario:\n";
    cout<<"Nombre: "<<empleado[posM].nombre<<endl;
    cout<<"Salario: "<<empleado[posM].salario<<endl;
    


    return 0;
}
