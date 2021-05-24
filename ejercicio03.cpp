/*Hacer un programa para ingresar por teclado un número y luego informar por pantalla con
un cartel aclaratorio si el mismo es par o impar.*/

#include <iostream>
using namespace std;

int main (){

int numero;

cout<<"Ingrese un numero: ";
cin>>numero;

cout<<endl;

if (numero%2==0){
    cout<<"El numero ingresado es par"<<endl;
}
else{
    cout<<"El numero ingresado es impar"<<endl;
}
return 0;}
