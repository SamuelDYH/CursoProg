#include <iostream>
using namespace std;
int main(){
    int n;
    
    int contador = 1;
    cout <<"Ingrese un numero: ";
    cin >> n;
    if (n <= 0){
        cout <<"Valor invalido";
    }else{
        cout <<"Los valores pares entre 1 y " << n << " son: ";
        while (contador <= n)
        {
            if (contador % 2 == 0  )
            {
                cout << contador <<" ";
            }
            contador++;
        }
        
    }
        
        
    
   
    return 0;




}