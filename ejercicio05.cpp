/*Un negocio de perfumería efectúa descuentos según el importe de la venta.
- Si el importe es menor a $100 aplicar un descuento del 5%
- Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
- Si el importe es mayor a $500 aplicar un descuento del 15%
Hacer un programa donde se ingresa el importe original sin descuento y que se informe por
pantalla el importe con el descuento ya aplicado.*/

#include <iostream>
using namespace std;

int main (){

float pago,monto;

cout<<"Ingrese el importe de venta: ";
cin>>pago;

cout<<endl;

if (pago<100){
    monto=pago*0.95;

}
else{
    if (pago>=100 && pago<=500){
        monto=pago*0.90;

    }
    else{
        monto=pago*0.85;

    }
}
cout<<"Total a pagar: "<<monto<<endl;

return 0;}
