/*Hacer un programa para ingresar por teclado dos números y luego informar por pantalla la
diferencia absoluta entre ambos.
Ejemplo 1: Si se ingresan 3 y 8, se emite 5. Si se ingresan 8 y 3, se emite 5.
Ejemplo 2: Si se ingresan -3 y 9, se emite 12. Si se ingresan -12 y -1, se emite 11.*/

#include <iostream>
using namespace std;

int main (){

int n1,n2,r;

cout<<"ingrese el primer numero: ";
cin>>n1;

cout<<"ingrese el segundo nunero: ";
cin>>n2;

r=n1-n2;

cout<<endl;

if (r<0){
    r=r*(-1);
    cout<<"la diferencia absoluta es: "<<r<<endl;
}
    else{
        cout<<"la diferencia absoluta es: "<<r<<endl;
    }

return 0;}

