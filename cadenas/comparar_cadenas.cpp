//Comparar cadenas

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char palabra1[] = "bota";
    char palabra2[] = "avion";


    if(strcmp(palabra1,palabra2)==0){
        cout<<"Ambas cadenas son inguales"<<endl;
    }else{
        cout<<"Ambas cadenas son diferentes"<<endl;
    }

    if(strcmp(palabra1,palabra2)>0){
        cout<<palabra1<<" está después alfabéticamente"<<endl;
    }

    return 0;
}