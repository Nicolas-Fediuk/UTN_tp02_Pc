/*Hacer un programa para leer tres números diferentes y determinar e informar el número
del medio. Ejemplo: si se ingresan 6, 10, 8, se emitirá 8.*/

#include <iostream>

using namespace std;
int main (){

int n1,n2,n3;

cout<<"ingresar el primer numero: ";
cin>>n1;

cout<<"ingresar el segundo numero: ";
cin>>n2;

cout<<"ingresar el tercer numero: ";
cin>>n3;

cout<<endl;

if (n1<n2 && n1<n3 && n2<n3){
    cout<<"el numero del medio es: "<<n2<<endl;
}
else{
    if (n1<n2&&n1<n3&&n3<n2){
        cout<<"el numero del medio es: "<<n3<<endl;
    }
    else{
        if (n2<n3 && n2<n1 &&n3<n1){
            cout<<"el numero del medio es: "<<n3<<endl;
        }
        else{
            if (n2<n3 && n2<n1 && n1<n3){
                cout<<"el numero del medio es: "<<n1<<endl;}
            else{
                if (n3<n1 && n3<n2 && n2<n1){
                    cout<<"el numero del medio es: "<<n2<<endl;
                }
                else{
                    if (n3<n1&&n3<n2&&n1<n2){
                        cout<<"el numero del medio es: "<<n1<<endl;
                    }
                }
            }
        }
    }
}
return 0;
}
