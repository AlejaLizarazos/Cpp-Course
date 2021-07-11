/*Se le pide al usuario un corredor el cual tendrá nombre, edad, sexo, club y se le
asignnará una categoría de competición de acuerdo a la edad*/

#include <iostream>
#include <string.h>

using namespace std;

struct corredor{
    char nombre[20];
    int edad;
    char sexo[10];
    char club[20];
}c1;

int main(){
    char categoria[20];

    cout<<"Ingrese Nombre: ";
    cin.getline(c1.nombre,20,'\n');
    cout<<"Edad: ";
    cin>>c1.edad;
    cout<<"Sexo: ";
    cin.getline(c1.sexo,10,'\n');
    cout<<"Club: ";
    cin.getline(c1.club,20,'\n');
    cout<<'\n';

    if(c1.edad <= 18){
        strcpy(categoria,"Juvenil");
    }else if(c1.edad <= 40){
        strcpy(categoria,"Senior");
    }else{
        strcpy(categoria,"Veterano");
    }

    cout<<"\n\nDatos del corredor: "<<endl;
    cout<<"Nombre: "<<c1.nombre<<endl;
    cout<<"Edad: "<<c1.edad<<endl;
    cout<<"Sexo: "<<c1.sexo<<endl;
    cout<<"Club: "<<c1.club<<endl;
    cout<<"Categoría: "<<categoria<<endl;

    return 0;
}