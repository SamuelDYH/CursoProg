/* Ejercicio 1 — Suma y promedio de 3 números
Desarrolla un programa que permita ingresar 3 números enteros y que use funciones
para:
• leer los números,
• calcular la suma,
• calcular el promedio,
• mostrar los resultados.
E/P/S
E: 3 numeros
P: Calcular suma y promedio 
S: Mostrar el resultado de la suma y del promedio*/
#include <iostream>
using namespace std;

void leernumeros(int &a, int &b, int &c);
int calcularSuma(int a, int b, int c);
double CalcularPromedio(int suma);
void mostrarResultados(int suma, double promedio);

int main(){
    int n1, n2, n3;
    int suma;
    double promedio;
    leernumeros(n1, n2, n3);
    suma = calcularSuma(n1, n2, n3);
    promedio = CalcularPromedio(suma);
    mostrarResultados(suma, promedio);
    }


void leernumeros(int &a, int &b, int &c){
    cout <<"Ingrese 3 numeros:"<< endl;
    cin >> a >> b >> c;
}
int calcularSuma(int a, int b, int c){
    return a + b +c;
}
double CalcularPromedio(int suma){
    return suma / 3.0;
}
void mostrarResultados(int suma, double promedio){
    cout <<"Resultados" << endl;
    cout <<"Suma: " << suma << endl;
    cout <<"Promedio: " << promedio;
}