#include <iostream>
using namespace std;

int main()
{
    // Declaramos un arreglo de 5 enteros para guardar las notas
    int notas[5];

    // Variable que usaremos para recorrer el arreglo
    int i;

    // CARGA DE DATOS

    // Recorremos las 5 posiciones del arreglo
    for (i = 0; i < 5; i++) {
        // Pedimos al usuario una nota
        cout << "Ingrese la nota " << i + 1 << ": ";
        // Guardamos la nota en la posicion i del arreglo
        cin >> notas[i];
    }

    cout << endl; // SIGNIFICA QUE SOLO DOY UN SALTO DE LINEA

    cout << "Notas registradas: " << endl;

    // IMPRESION DE DATOS

    // Volvemos a recorrer el arreglo para mostrar lo que guardamos
    for (i = 0; i < 5; i++) {
        // Mostramos la posicion y el valor guardado en esa posicion
        cout << "Posicion " << i << ": " << notas[i] << endl;
    }

    return 0;
}