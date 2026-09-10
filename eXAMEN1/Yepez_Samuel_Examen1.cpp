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
    string buscando;
    bool encontado = false;
    double promedio = 0.0;
    double suma = 0.0;
    int aprobados = 0;
    int reprobados = 0;
    int notaMayor, notaMenor;
    string estudianteMayor, estudianteMenor;

    
    
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
            
            cout <<"Ingrese el Primer nombre del estudiante " << endl;   
                   

            
            for ( i = 1; i <= estudiantes;i++){
            cout <<"Nombre: ";     
            
            cin >> nombres[i];}
            cout <<"Ingrese la nota del estudiante " << endl;
            
            
            for ( i = 1; i <= estudiantes; i++){
                cout <<"Nota: ";
                cin >> notas[i];
                 
                 while (notas[i] < 0 or notas[i] > 20){
                    cout <<"Nota inavlida, ingrese de nuevo: ";
                    cin >> notas[i]; } }  
            
            
            break;
            case 2:
           
            cout <<"Nombres - Notas - Estado " << endl;
            notaMayor = notas[1];
            estudianteMayor = nombres[1]; 
            notaMenor = notas[1];
            estudianteMenor = nombres[1];
            for ( i = 1; i <= estudiantes; i++)
            {
                cout << nombres[i] << "-" << notas[i] << "-"; 
            
             if (notas[i] >= 14 and notas[i] <= 20)
            {
                cout <<"Aprobado" << endl;
                aprobados ++;
            }else{
                cout <<"Reprobado" << endl;
                reprobados ++;
            }  
            suma = suma + notas[i];
            if (notas[i] > notaMayor )
            {
                notaMayor = notas[i];
                estudianteMayor = nombres[i];
            }
            if (notas[i] < notaMenor)
            {
                notaMenor = notas[i];
                estudianteMenor = nombres[i];
            }
            
            } 
            
            if(estudiantes > 0)
            {
                promedio = suma/ estudiantes;
            cout <<"Promedio general: " << promedio << endl;
           
            }
             cout <<"El estudinate con la nota mas alta es: " << estudianteMayor << " con " << notaMayor << endl;
             cout <<"El estudinate con la nota mas baja es: " << estudianteMenor << " con " << notaMenor << endl;
             cout <<"Numero de aprobados: " << aprobados << endl;
             cout <<"Numero de reprobados: "<< reprobados << endl;  
            
            break;
   
            case 3:
            cout <<"Ingrese el nombre del estudinate que desea buscar: ";
            cin >> buscando;
            encontado = false;
            for ( i = 1; i < estudiantes; i++)
            {
              if (nombres[i] == buscando and encontado == false  )
                {
                    encontado = true;
                    posicion = i;
                }
            if (encontado == true)
            {
                cout << nombres[i] << " - " << notas[i] << " - "; 
           
            if (notas[i] >= 14 and notas[i] <= 20)
            {
                cout <<"Aprobado" << endl;
                
            }else{
                cout <<"Reprobado" << endl;
                
            }
            }
  
            }if (encontado == false)
            {
                cout <<"El estudiante " << buscando << " no se encuentra registrado " << endl;
            }
            break;
                
            case 4: 
              cout <<"Saliendo...";
              break;
                        
            
                 
        
            default:
            cout <<"Opcion invalida, intente de nuevo."<< endl;
            break;
        }
    } while (opcion != 4);
    return 0;
}
