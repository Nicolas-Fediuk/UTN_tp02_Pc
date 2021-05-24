 /*Hacer un programa para ingresar por teclado las cuatro notas de los exámenes obtenidas
por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones:
- “Promociona”, si obtuvo en los cuatro exámenes nota 7 o más.
- “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.
- “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes.
- “Recursa la materia”, si no aprobó ningún examen parcial.*/

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
