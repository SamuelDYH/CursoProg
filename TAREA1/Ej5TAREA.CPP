/*Ejercicio 5: Reparto de horas en semanas, días y horas
Escribe un algoritmo que reciba un número entero de horas totales (un valor no
negativo). El algoritmo debe convertir esa cantidad de horas a semanas, días y horas
sobrantes, considerando que una semana tiene 168 horas y un día tiene 24 horas. Al
final debe mostrar cuántas semanas, cuántos días y cuántas horas sobran.
E: HORAS
P: semanas = horas_totales / 168, residuo = horas_totales % 168, dias = residuo / 24, horas_restantes = residuo % 24
S: SEMANAS, DIAS Y HORAS SOBRANTES SON:*/
#include <iostream>

using namespace std;

int main() {
    
    int horas_totales;
    int semanas;
    int dias;
    int horas_restantes;
    int residuo;

    
    cout << "Ingrese la cantidad total de horas: ";
    cin >> horas_totales;

    
    if (horas_totales < 0) {
        cout << "Error: No se permiten numeros negativos." << endl;
    } else {
       
        semanas = horas_totales / 168;      
        residuo = horas_totales % 168;      

        
        dias = residuo / 24;
        horas_restantes = residuo % 24;      

        
        cout << "Semanas: " << semanas << endl;
        cout << "Dias: " << dias << endl;
        cout << "Horas sobrantes: " << horas_restantes << endl;
    }

    return 0;
}