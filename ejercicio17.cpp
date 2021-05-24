/*Una empresa de electricidad cobra el servicio a sus clientes de acuerdo a la siguiente
escala:
$ 10 por kilovatio por el consumo hasta los primeros 100 kilovatios de consumo.
$ 12 por kilovatio por el consumo excedente de 101 a 200 kilovatios.
$ 15 por kilovatio por el consumo excedente de 201 kilovatios en adelante.
Hacer un programa para que, dado el consumo en kilovatios de un determinado cliente, el
programa calcule e informe el total a pagar por el mismo.
Ejemplo 1: Un consumo de 55 kilovatios, se calculará: $ 10 x 55= $ 550
Ejemplo 2: Un consumo de 125 kilovatios, se calculará: $ 10 x 100 + $ 12 x 25=$ 1300
Ejemplo 3: Un consumo de 250 kilovatios, se calculará: $ 10 x 100 + $ 12 x 100 + $ 15 x 50 = $ 2950*/

#include <iostream>

using namespace std;

int main(){
int consumo,total,total2;

cout<<"ingrese el consumo: ";
cin>>consumo;

cout<<endl;

if (consumo<=100){
    total=consumo*10;
    cout<<"total a pagar: "<<"$"<<total<<endl;
}
else{
    if (consumo>=101 && consumo<=200){
        total=consumo-100;
        total2=(total*12)+1000;
        cout<<"total a pagar: "<<"$"<<total2<<endl;
    }
    else{
        if (consumo>=201){
            total=consumo-200;
            total2=(total*15)+2200;
            cout<<"total a pagar: "<<"$"<<total2<<endl;
        }
    }
}
return 0;
}
