/*Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado la
longitud de los tres lados de un triángulo y luego listar que tipo de triángulo es:
- Equilátero: si los tres lados son iguales
- Isósceles: si dos de los tres lados son iguales
- Escaleno: si los tres lados son distintos entre sí*/

#include <iostream>

using namespace std;

int main (){
float l1,l2,l3;

cout<<"ingrese la longitud del primer lado ";
cin>>l1;

cout<<"ingrese la longitud del segundo lado ";
cin>>l2;

cout<<"ingrese la longitud del tercer lado ";
cin>>l3;

if (l1==l2 && l2==l3){
    cout<<"el triangulo es equilatero"<<endl;
}
    else if (l1!=l2 && l2!=l3 && l1!=l3){
            cout<<"el triangulo es escaleno"<<endl;
    }
        else{
            cout<<"el triangulo es isosceles";
        }
}
