/*Hacer un programa para ingresar por teclado dos números y luego informar por pantalla
con un cartel aclaratorio si el primer número es múltiplo del segundo. */

#include <iostream>
using namespace std;

int main (){

int n1,n2,r;

cout<<"Ingrese el primer numero: ";
cin>>n1;

cout<<"Ingrese el segundo numero: ";
cin>>n2;

r=n1%n2;

cout<<endl;

if (r==0){
    cout<<"El primer numero es multiplo del segundo";
}
else{
    cout<<"El primer numero no es multiplo del segundo";
}

return 0;}
