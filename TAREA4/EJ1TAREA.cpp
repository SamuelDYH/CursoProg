/*Ejercicio 1: Conversión de temperatura
Escribe un algoritmo que reciba una temperatura en grados Celsius y la convierta a
grados Fahrenheit. El algoritmo debe mostrar el valor final en Fahrenheit. Usa la
conversión estándar entre Celsius y Fahrenheit. Usa la conversión F = (C × 9/5) + 32.
E/P/S
E:GRADOS CELCIUS
P:CONVERSION DE GRADOS CELCIUS A FAHRENHEIT
S:GRADOS FAHRENHEIT*/

#include <iostream> 
using  namespace std;
int main(){
    float gradosCelcius;
    float gradosFahrenheit;  
    cout << "Ingrese la temperatura en gradis celicius";
    cin  >>  gradosCelcius; 
    gradosFahrenheit = (gradosCelcius * 9.0/5) + 32;
    cout << "La temperatura en grados Fahrenheits es de:"<< gradosFahrenheit; 
    return 0;     


} 