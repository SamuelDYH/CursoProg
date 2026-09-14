/*Desarrolla un programa que pida al usuario un número entero positivo n y luego
incremente un contador desde 0 hasta n, usando una función que actualice el valor
del contador.
El objetivo es que practiques el uso de paso por referencia para modificar una
variable desde una función.
El programa debe mostrar el valor del contador en cada incremento.*/
#include <iostream>
using namespace std;
void leerdato(int &n);
void contador(int &n, int &i);
int main(){
    int n, i;
    i = 0;
    leerdato(n);
    contador(n, i);
}
void leerdato(int &n){
    cout <<"Ingrese un numero: ";
    cin >> n;
    while (n < 0)
    {
        cout <<"Valor invalido, vuelva a intentarlo: ";
        cin >> n;
    }
}
void contador(int &n, int &i){
    cout << "Contador" << endl;
    for ( i = 0; i <= n; i++)
    {
        cout << i << endl;
    }
    
}