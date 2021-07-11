//Concatenar una cadena con otra

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char cad1[] = "Esto es una cadena";
    char cad2[] = " de ejemplo";
    char cad3[30];

    strcpy(cad3,cad1);
    strcat(cad3,cad2);

    cout<<cad3<<endl;

    return 0;
}