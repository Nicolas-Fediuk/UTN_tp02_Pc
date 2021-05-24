/*Hacer un programa para ingresar por teclado un número y luego emitir por pantalla un
cartel aclaratorio indicando si el mismo es positivo, negativo o cero.*/

#include <iostream>
using namespace std;

int main (){

int numero;

cout<<"Ingrese un numero: ";
cin>>numero;

if (numero>=1){
    cout<<"El numero es positivo"<<endl;
}

else{
    if (numero<0){
        cout<<"El numero es negativo"<<endl;
    }

else{
    cout<<"El número es cero"<<endl;
}
}
return 0;}


