/**/
#include <iostream>
using namespace std;

int main(){
    //Declarar las variables necesarias
    int opcion, numero, cuadrado;

    //Usamos do while para que el menu se meustre al menos una vez
    do{
        //Mostramos el menu
        cout << "====== MENU CON SWITCH ======" << endl;
        cout << "1. Mostrar bienvenida" << endl;
        cout << "2. Mostrar cuadrado de un numero" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                //Opcion 1: mostrar mensaje
                cout << "Bienvenidos a la clase 6 de C++" << endl;
                break;

            case 2:
                //Opcion 2: pedir un numero y mostrar su cuadrado
                cout << "Ingrese un numero: " << endl;
                cin >> numero;

                cuadrado = numero * numero;

                cout << "El cuadrado es: " << cuadrado << endl;
                break;

            case 3:
                //Opcion 3: salir del programa
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                //si la opcion no coincide con ningun caso
                cout << "Error: opcion invalida" << endl;
                break;
        }

    } while(opcion != 3);

    return 0;
}