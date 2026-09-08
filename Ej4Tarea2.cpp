#include <iostream>
using namespace std;
int main(){
    int opcion, doble, triple, numero;
    doble = 0;
    
    
    do
    { 
    cout <<" ========BIENVENIDOS======== " << endl;
    cout <<" 1.El doble de un numero" << endl;
    cout <<" 2.El triple de un dumero" << endl;
    cout <<" 3.Salida" << endl;
    
    cin >> opcion;
    if (opcion == 1)
    {
        cout <<"Ingrese un numero: ";
        cin >> numero;
        doble = numero * 2;
        cout <<"El doble del numero es: " << doble << endl; 

    }else if (opcion == 2)
    {
        cout <<"Ingrese un numero: ";
        cin >> numero;
        triple = numero * 3;
        cout <<"El triple del numero es: " << triple << endl;
    }else if (opcion == 3)
    {
        cout <<"Saliendo del programa...";
    }else{
        cout <<"Dato invalido, vuelva a intentar";
     }
    
    
    


    } while (opcion != 3);
    return 0;
   
}
