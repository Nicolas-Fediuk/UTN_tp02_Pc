/*Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona,
ingresando d�a, mes y a�o como 3 datos individuales. Luego ingresar la fecha actual
ingresando d�a, mes y a�o como 3 datos individuales. Calcular luego la edad en a�os de esa
persona y listarlo por pantalla.
Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual es 26/2/2019
la edad de esa persona es 18 ya que los 19 reci�n los cumple en diciembre.
Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual es 26/2/2019 la
edad de esa persona es 19.
Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual es 26/2/2019
la edad de esa persona es 18 ya que le faltan 2 d�as para cumplir los 19 a�os*/

#include <iostream>

using namespace std;

int main (){
int nac_dia,nac_mes,nac_anio,act_dia,act_mes,act_anio,anios;

cout<<"ingrese el dia de su nacimiento: ";
cin>>nac_dia;
cout<<"ingrese el mes de su nacimiento: ";
cin>>nac_mes;
cout<<"ingrese el anio de su nacimiento: ";
cin>>nac_anio;
cout<<endl;
cout<<"ingrese el dia actual: ";
cin>>act_dia;
cout<<"ingrese el mes actual: ";
cin>>act_mes;
cout<<"ingrese el a�o actual: ";
cin>>act_anio;
cout<<endl;

if (nac_mes>act_mes){
    anios=(act_anio-nac_anio)-1;
    cout<<"su edad es: "<<anios<<endl;
}
else{
    if (nac_mes==act_mes){
        if(nac_dia>act_dia){
            anios=(act_anio-nac_anio)-1;
            cout<<"su edad es: "<<anios<<endl;
        }
    }
else{
    anios=(act_anio-nac_anio);
    cout<<"su edad es: "<<anios<<endl;
}
}
return 0;
}

