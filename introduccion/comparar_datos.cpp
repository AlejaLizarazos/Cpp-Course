#include <iostream>

using namespace std;

int main(){

    int n1,n2;

    cout<<"Ingrese dos números: ";
    cin>>n1>>n2;

   if(n1>n2){
       cout<<"El mayor es "<<n1<<endl;
   }
   else if(n1==n2){
    cout<<"Son iguales";
   }
   else{
       cout<<"el mayor es "<<n2<<endl;
   }

    return 0;
}