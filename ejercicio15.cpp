 /*Hacer un programa para ingresar por teclado las cuatro notas de los ex�menes obtenidas
por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones:
- �Promociona�, si obtuvo en los cuatro ex�menes nota 7 o m�s.
- �Rinde examen final�, si obtuvo nota 4 o m�s en por lo menos tres ex�menes.
- �Recupera Parciales�, si obtuvo nota 4 o m�s en por lo menos uno de los ex�menes.
- �Recursa la materia�, si no aprob� ning�n examen parcial.*/

#include <iostream>

using namespace std;
int main (){

int n1,n2,n3,n4,contador;

cout<<"ingrese la primera nota: ";
cin>>n1;
cout<<"ingrese la segunda nota: ";
cin>>n2;
cout<<"ingrese la tercera nota: ";
cin>>n3;
cout<<"ingrese la cuarta nota: ";
cin>>n4;

cout<<endl;

contador= 0;
if (n1>=7 && n2>=7 && n3>=7 && n4>=7){
    cout<<"promociona"<<endl;
}
else{
    if (n1>=4){
        contador ++;
    }
    if (n2>=4){
        contador ++;
    }
    if (n3>=4){
        contador ++;
    }
    if (n4>=4){
        contador ++;
    }
    if (contador>=3){
        cout<<"rinde examen final"<<endl;
    }
    else{
        if (contador>=1){
            cout<<"recupera paracial"<<endl;
        }
        else{
            if (contador==0){
                cout<<"recursa la materia"<<endl;
            }
        }
    }

}
return 0;
}
