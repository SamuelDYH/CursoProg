/*Ejercicio 3: Descuento por edad

Escribe un algoritmo que reciba la edad de una persona y determine el precio a pagar
según estas reglas: si la edad es 18 o más, el precio es 5 dólares; si la edad es menor
a 18, el precio es 2.50 dólares. El algoritmo debe mostrar el precio final.
E/P/S
E: EDAD
P: EDAD >= 18 = 5$, EDAD < 18 = 2.5$
S: EL PRECIO FINAL ES:*/

#include <iostream>
using namespace std;
int main(){
    float edad;
    cout <<"Ingrese su edad: ";
    cin >> edad;
    if (edad >= 18)
    {
        cout <<"El precio total a pagar es de 5$";
    }else{
        cout <<"El precio total a pagar es de 2.5$";
    }
    




}