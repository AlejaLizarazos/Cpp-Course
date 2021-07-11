/* Factorial de un número 

    caso base: factorial(n) = 1, si n = 0

*/

#include <iostream>

using namespace std;

int factorial(int);

int main(){

    cout<<"Resultado:  "<<factorial(5)<<endl;;

    return 0;
}

int factorial(int n){
    if(n == 0){ // caso base
        n = 1;
    }else{// caso general
        n = n * factorial(n-1);
    }
    return n;
}