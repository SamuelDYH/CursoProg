#include <iostream>
using namespace std;
int main(){
    int productos[6];
    int i;
    int buscando;
    int encontrado = false;
    int posicion = -1;
    for ( i = 0; i < 6; i++)
    {
        cout <<"Ingrese la cantidad de productos vendido " << i + 1 << " :" << endl;
        cin >> productos[i];
    }
    cout <<"Cantidades ingresadas: " << endl;
    for ( i = 0; i < 6; i++)
    {
        cout << productos[i] << endl;
    }
    cout << endl;
    cout <<"Ingrese una cantidad para buscar: " << endl;
    cin >> buscando;
    for ( i = 0; i < 6; i++)
    {
        if (productos[i] == buscando && encontrado == false )
        {
            encontrado = true;
            posicion = i;
        }
        
    }
    if (encontrado == true)
    {
        cout <<"Cantidad encontrada dentro del arreglo : " << posicion << endl;

    }else{
        cout <<"Cantidad no encontrada en el arreglo";

    }
    return 0;

}