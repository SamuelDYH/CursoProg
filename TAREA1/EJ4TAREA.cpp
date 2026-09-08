/*Ejercicio 4: Nota final con ponderaciones
Escribe un algoritmo que reciba tres calificaciones: Parcial 1, Parcial 2 y Proyecto.
Con esos valores, debe calcular la nota final usando ponderaciones: el Parcial 1 vale
el 30%, el Parcial 2 vale el 30% y el Proyecto vale el 40%. El algoritmo debe mostrar la
nota final.
E/P/S
E: PARCIAL1, PARCIAL2, PRPYECTO
P: NOTAFINAL= (Parcial1 * 30/100.0) + (Parcial2 * 30/100.0) + (Proyecto * 40/100.0)
S: LA NOTA FINAL ES:*/

#include <iostream>
using namespace std;
int main(){
    float Parcial1;
    float Parcial2;
    float Proyecto;
    float NotaFinal;
    cout <<"Ingrese La nota del Parcial 1: ";
    cin >> Parcial1;
    while (Parcial1 < 0 or Parcial1 > 10)
    {
        cout <<"Valor invalido, vuelva a ingra la noata: ";
        cin >> Parcial1;
        
    }
    cout <<"Ingrese la nota del Parcial 2: ";
    cin >> Parcial2;
    while (Parcial2 < 0 or Parcial2 > 10 )
    {
        cout <<"Valor invalido, vuelva a ingresar la nota: ";
        cin >> Parcial2;
        
    }
    cout <<"Ingrese la nota del Proyecto: ";
    cin >> Proyecto;
    while (Proyecto < 0 or Proyecto > 10)
    {
        cout <<"Valor invalido, vuelva a ingresar la nota: ";
        cin >> Proyecto;
    }
    NotaFinal = (Parcial1 * 30/100.0) + (Parcial2 * 30/100.0) + (Proyecto * 40/100.0);
    cout <<"Su nota final es:" << NotaFinal;

}
