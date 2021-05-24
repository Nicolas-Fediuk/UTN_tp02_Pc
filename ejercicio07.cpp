 /*Hacer un programa para ingresar por teclado tres números e informar con una leyenda
aclaratoria si los tres son todos distintos entre sí, caso contrario no emitir nada.
Ayuda: Si A es distinto de B y B es distinto de C, es no sígnica que A y C sean distintos.
Ejemplo: A=8, B=6 y C=8.*/

#include <iostream>

using namespace std;

int main (){
float n1,n2,n3;

cout<<"ingrese el primer numero: ";
cin>>n1;

cout<<"ingrese el segundo numero: ";
cin>>n2;

cout<<"ingrese el tercer numero: ";
cin>>n3;

cout<<endl;

if (n1 != n2 && n1 != n3 && n2 != n3){
    cout<<"Los 3 numeros son distintos"<<endl;
}

return 0;

}
