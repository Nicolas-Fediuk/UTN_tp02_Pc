/*Hacer un programa para ingresar por teclado tres números y luego determinar e informar
con una leyenda aclaratoria si los tres son iguales entre sí, caso contrario no emitir nada.
Ayuda: Si A es igual a B y B es igual a C, entonces A y C son iguales.*/

#include <iostream>
using namespace std;

int main (){

float n1,n2,n3;

cout<<"Ingrese el primer numero: ";
cin>>n1;

cout<<"Ingrese el segundo numero: ";
cin>>n2;

cout<<"Ingrese el tercer numero: ";
cin>>n3;

cout<<endl;

if (n1==n2 && n1==n3){
    cout<<"Los 3 numeros son iguales"<<endl;
}
    else{
    cout<<"Los 3 numeros no son iguales"<<endl;}

return 0;}


