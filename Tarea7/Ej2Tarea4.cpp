/*Ejercicio 2 — Número mayor entre dos valores
Desarrolla un programa que permita ingresar dos números enteros y determine cuál
de los dos es mayor.
El programa debe estar modularizado usando funciones para:
• leer los datos,
• comparar los valores,
• mostrar el resultado.
Si ambos números son iguales, el programa también debe indicarlo.
E/P/S
E: 2 numeros
P: Comparar los datos
S: Muestra cual es mayor*/
#include <iostream>
using namespace std;
void lerNumeros(int &n1, int &n2);
int coompararNumeros(int n1, int n2);
void mostrarComparacion(int mayor);
int main(){
    int n1, n2;
    int mayor;
    lerNumeros(n1, n2);
    mayor = coompararNumeros(n1, n2);
    mostrarComparacion(mayor);
    return 0;
    
    
}
void lerNumeros(int &n1, int &n2){
    cout <<"Ingrese dos numeros: " << endl;
    cin >> n1 >> n2;
}

int coompararNumeros(int n1, int n2){
    if (n1 < n2)
    {
        return n2;
    }else{
        return n1;
    }   
}
void mostrarComparacion(int mayor){
    cout <<"El numero mayor es:" << mayor;

}