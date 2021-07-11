//Copiar contenido de una cadena a otra

#include <iostream>
#include <string.h>
//#include <conio.h>

using namespace std;

int main(){
    char nombre[] = "Alejandra";
    char nombre2[20];

    strcpy(nombre2,nombre);
    cout<<nombre2<<endl;

    //getch();
    return 0;
}