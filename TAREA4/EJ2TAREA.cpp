/*Ejercicio 2: Área y perímetro de un rectángulo
Escribe un algoritmo que reciba la base y la altura de un rectángulo. Con esos datos,
debe calcular y mostrar el área y el perímetro del rectángulo.
E/P/S
E: BASE, ALTURA
P: PERIMTERO= 2*BASE + 2*ALTURA
S: SU AREA ES ... Y SU PERIMETRO ES ... */

#include <iostream> 
using  namespace std;
int main(){
    float base;
    float altura;
    float perimetro;
    float area;

    cout <<"Ingrese la medida de la base del rectangulo: ";
    cin >> base;
    cout <<"Ingrese la altura: ";
    cin >> altura;
    perimetro = (base * 2.0) + (altura * 2.0);
    area = (base * altura);
    cout <<"El perimetro del rectangulo es:"<< perimetro << " cm" << endl;
    cout <<"El area del rectangulo es:"<< area << " cm²";
    return 0;



}   