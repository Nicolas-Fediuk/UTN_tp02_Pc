/*Hacer un programa para ingresar tres números distintos y listarlos ordenados de menor a
mayor. Ejemplo: si se ingresa 4,-3,7, se debe mostrar -3, 4,7.*/

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
    cout<<n1<<", "<<n2<<", "<<n3<<endl;
}
else{
    if (n1<n2&&n1<n3&&n3<n2){
        cout<<n1<<", "<<n3<<", "<<n2<<endl;
    }
    else{
        if (n2<n3 && n2<n1 &&n3<n1){
            cout<<n2<<", "<<n3<<", "<<n1<<endl;
        }
        else{
            if (n2<n3 && n2<n1 && n1<n3){
                cout<<n2<<", "<<n1<<", "<<n3<<endl;
            }
            else{
                if (n3<n1 && n3<n2 && n2<n1){
                    cout<<n3<<", "<<n2<<", "<<n1<<endl;
                }
                else{
                    if (n3<n1&&n3<n2&&n1<n2){
                        cout<<n3<<", "<<n1<<", "<<n2<<endl;
                    }
                }
            }
        }
    }
}
return 0;
}
