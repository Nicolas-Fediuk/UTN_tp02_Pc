/*Hacer un programa para ingresar tres números y listar el máximo de ellos*/

#include <iostream>

using namespace std;
int main (){

int n1,n2,n3;

cout<<"ingrese el primer numero: ";
cin>>n1;
cout<<"ingrese el segundo numero: ";
cin>>n2;
cout<<"ingrese el tercer numero: ";
cin>>n3;

cout<<endl;

if (n1>n2 && n1>n3){
    cout<<"el numero mas grande es: "<<n1<<endl;
}
else{
    if (n2>n3){
        cout<<"el numero mas grande es: "<<n2<<endl;
    }
    else{
        cout<<"el numero mas grande es: "<<n3<<endl;
    }
}
}
