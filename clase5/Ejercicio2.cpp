/*2. conversion de timepo a minutos recibe horas y minutos y muestra el total de minutos
horas >= o
minuto entre 0 y 59
si no cumple, mostrar "Datos invalidos"*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    //Variables
    int horas, minutos, totalminutos;
    //Lectura de datos
    cout <<"Ingrese horas (>=0): ";
    cin >> horas;
    cout <<"Ingrese minutos (0 a 59)";
    cin >> minutos;
    //Validacion
    if (horas < 0 || minutos < 0 || minutos > 59)
    {
        cout << "Datos invalidos";
        return 0; 
    }
    //Proceso
    totalminutos = (horas * 60) + minutos;
    //Salida
    cout <<"Total de minutos: " << totalminutos;
    return 0;

}

