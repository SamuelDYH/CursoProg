#include <iostream>
using namespace std;
int main(){
    int edades[8];
    int i;
    int buscando;
    int posicion = -1;
    bool encontrado = false;
    for ( i = 0; i < 8; i++)
    {
        cout <<"Ingrese la edad " << i + 1 << ":" << endl;
        cin >> edades[i];
    
    }
    cout <<"Edad y posicion" << endl;
    for ( i = 0; i < 8; i++)
    {
        cout << edades[i] << " : " << i << endl;
        
    }
    
    cout << endl;
    cout <<"Ingrese la edads que desea buscar: ";
    cin >> buscando; 

    for ( i = 0; i < 8; i++)
    {
        if (edades[i] == buscando && encontrado == false)
        {
            encontrado = true;
            posicion = i;
        }
        
    }
    cout << endl;
    if (encontrado == true)
    {
        cout <<"Edad encontrado en la posicion: " << posicion << endl; 
    }else{
        cout <<"Edad no encontrada" << endl;
    }
    

    return 0;

}