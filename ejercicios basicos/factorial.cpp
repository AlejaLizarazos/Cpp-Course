//Suma de factoriales

#include <iostream>
using namespace std;

int main(){

    int numero, factorial = 1, suma = 0;

    cout<<"Ingrese un número: ";cin>>numero;
    for (int i = 1; i <= numero; i++){
        for (int j = 1; j <= i;j++){
            factorial *= j;
        }
        suma += factorial;
        factorial = 1;
    }
    cout << "La suma de factoriales es: "<<suma<<endl;

    return 0;
}
