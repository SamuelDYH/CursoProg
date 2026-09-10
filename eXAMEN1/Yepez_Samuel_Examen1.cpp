/*Nombre del estudiante: Samuel Yepez
Fecha: 9/09/2026
Tema: Sistema de registro y análisis de notas
Entrada:Nombre y notas de los estudiantes 
Proceso: Validar la nota entre 0 y 20, Listado numerado con nobres,notas y estado. promedio general, busacr mayoe nota y menr nota, cantidad de aprobados y reprobados, buscar estudiantes por nombre 
Salida: Menu y espicificaciones*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    int notas[20];
    string nombres[20];
    int i;
    int opcion;
    int estudiantes;
    int Aprobado, Reprobado;
    int posicion = -1;
    int buscando;
    int encontado = false;
    double promedio = 0.0;
    double suma = 0.0;
    
    
    
    do
    { cout <<"======BIENVENIDO======" << endl;
      cout <<"1.Regsitrar estudiantes y notas" << endl;
      cout <<"2.Mostrar reporte general" << endl;
      cout <<"3.Buscar estudiante por nombre" << endl;
      cout <<"4.Salir" << endl;
      cin >> opcion;  
        switch (opcion)
        {
        case 1:
            cout <<"Ingrese el numero de estudiantes: ";  
            cin >> estudiantes;     
            while (estudiantes < 0 or estudiantes > 20)
            {
                cout <<"Valor invalido, ingrese de nuevo: ";
                cin >> estudiantes;
            }
            
            cout <<"Ingrese el Primer nombre del estudiante: " << endl;   
                   

            
            for ( i = 1; i <= estudiantes;i++){
            cout <<"Nombre: " << endl;     
            
            cin >> nombres[i];}
            cout <<"Ingrese la nota del estudiante: " << endl;
            
            
            for ( i = 1; i <= estudiantes; i++){
                cout <<"Nota: " << endl;
                cin >> notas[i];
                 
                 while (notas[i] < 0 or notas[i] > 20){
                    cout <<"Nota inavlida, ingrese de nuevo: ";
                    cin >> notas[i]; } }  
            
            
            break;
        case 2:
           
            cout <<"Nombres - Notas - Estado " << endl;
            for ( i = 1; i <= estudiantes; i++)
            {
                cout << nombres[i] << "-" << notas[i] << "-"; 
            
             if (notas[i] >= 14 and notas[i] <= 20)
            {
                cout <<"Aprobado" << endl;
            }else{
                cout <<"Reprobado" << endl;
            }  
        suma = suma + notas[i];} 
            
            if(estudiantes > 0)
            {
                promedio = suma/ estudiantes;
            cout <<"Promedio general: " << promedio << endl;
           
            }break;
   
        case 3:    
        case 4: 
              cout <<"Saliendo...";
                        
            
                 
        
        default:
            break;
        }
    } while (opcion != 4);
    
}
