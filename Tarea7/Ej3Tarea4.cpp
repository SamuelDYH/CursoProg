/* Ejercicio 3 — Área de un rectángulo
Desarrolla un programa que permita ingresar la base y la altura de un rectángulo.
Usa funciones para:
• leer los datos,
• calcular el área,
• mostrar el resultado.
El programa debe trabajar con valores reales si el usuario ingresa decimal
E/P/S
E: Base y altura
P: Calcular area = base * altura
S: Mostrar el area calculada */
#include <iostream>
using namespace std;
void datos(int &a, int &b);
int calcularArea(int a, int b);
void resultado(int area);

int main(){
    int b;
    int a;
    double area;
    datos(a, b);
    area = calcularArea(a, b);
    resultado(area);
    return 0;
}
void datos(int &a, int &b){
    cout <<"Irgrese la base del rectangulo" << endl;
    cin >> b;
    cout <<"Ingrese la altura del rectangulo"<< endl;
    cin >> a;
}
int calcularArea(int a, int b){
    return b*a;
}
void resultado(int area){
    cout <<"El area del rectangulo es: " << area;
}
