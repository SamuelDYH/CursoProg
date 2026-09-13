/*Desarrolla un programa que permita ingresar dos números enteros y luego
intercambiar sus valores usando una función.
El programa debe:
• mostrar los valores antes del intercambio,
• realizar el intercambio usando una función,
• mostrar los valores después del intercambio.
E/P/S
E: Dos numeros
P: Intercambiar valores
S: Mostrar el intercambio
*/
#include <iostream>
#include <string>
using namespace std;
void leerDatos(int &n1, int &n2);
void datos(int &A, int &B);
void cambio (int &A, int &B, int &n1, int &n2);
void mostrar(int &A, int &B);
int main(){
    int n1, n2;
    int A, B, giro; 
    leerDatos(n1, n2);
    A = n1;
    B = n2;
    datos(A, B);
    cambio(A, B, n1 ,n2);
    mostrar(A, B);
    
}
void leerDatos(int &n1, int &n2){
    cout <<"Ingrese un numero entero"<< endl;
    cin >> n1;
    cout <<"Ingrese un numero entero"<< endl;
    cin >> n2;
}
void datos(int &A, int &B){
    cout <<"Datos" << endl;
    cout << "A =" << A << endl;
    cout << "B =" << B << endl;
}
void cambio(int &A, int &B, int &n1, int &n2){
    A = n2;
    B = n1;  
}void mostrar(int &A, int &B){
    cout <<"Datos" << endl;
    cout << "A =" << A << endl;
    cout << "B =" << B << endl;
}