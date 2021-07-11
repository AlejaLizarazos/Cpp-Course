// Programa que realiza la serie fibonnaci

#include <iostream>

using namespace std;

int main(){

    int n, x = 0, y = 1, z = 1;
    cout<<"Ingrese el número de elementos: ";cin>>n;

    cout<<z<<" ";
    for(int i = 1; i <= n; i++){
        z = x + y;
        cout<<z<<" ";
        x = y;
        y = z;
    }

    return 0;
}