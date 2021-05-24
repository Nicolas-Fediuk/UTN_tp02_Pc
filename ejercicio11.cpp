/*Hacer un programa para ingresar cinco números y listar cuántos de esos cinco números
son positivos.*/

#include <iostream>

using namespace std;

int main (){
int n1,n2,n3,n4,n5,contar;

cout<<"ingrese el primer numero: ";
cin>>n1;
cout<<"ingresar el segundo numero: ";
cin>>n2;
cout<<"ingresar el tercer numero: ";
cin>>n3;
cout<<"ingresar el cuarto numero: ";
cin>>n4;
cout<<"ingresar el quinto numero: ";
cin>>n5;

cout<<endl;

if (n1>0){
    contar++;
}
if (n2>0){
    contar++;
}
if (n3>0){
    contar++;
}
if (n4>0){
    contar++;
}
if (n5>0){
    contar++;
}
cout<<"los numeros positivos son: "<<contar<<endl;
return 0;
}
