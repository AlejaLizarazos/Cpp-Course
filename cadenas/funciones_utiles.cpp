//Funciones de cadenas comunmente usadas

#include <iostream>
#include <string.h>

using namespace std;

char *strrev(char *str);

int main(){
    char nombre[30];
    cout<<"Digite su nombre :";

    /*cin>>nombre no guarda cadenas con espacios
    //gets(nombre) ignora el espacio de memoria designado para guardar toda la cadena
    //que se ingrese*/

    cin.getline(nombre,30,'\n');

    /*Invertir una cadena*/
    strrev(nombre);
    cout<<nombre<<endl;

    /*Pasar palabra a Mayúscula y minúscula*/
    strupr(nombre);
    cout<<nombre<<endl;
    strlwr(nombre);
    cout<<nombre<<endl;

    /*Transformar una cadena a numeros*/
    char cad[] = "123";
    int numero;
    numero = atoi(cad);
    cout<<numero<<endl;

    char cad2[] = "1564.64";
    numero = atof(cad2);
    cout<<numero<<endl;

    return 0;
}

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}