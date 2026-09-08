#include <iostream>
using namespace std;
int main(){
    int n, suma, i;
    suma = 0;

    for(i =1 ; i <= 5; i++){
        cout <<"Ingrese un numero entero:";
        cin >> n; 
        suma = suma + n;

    }
    cout <<"La suma total es: " << suma;
    return 0;

}