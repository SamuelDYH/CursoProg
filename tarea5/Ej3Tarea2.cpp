#include <iostream>
using namespace std;
int main(){
    int n;
    int i;
    int multiplicacion;
    multiplicacion = 0; 
    cout <<"Ingrese un numero para observar su tabla del 1 al 10: ";
    cin >> n;
    
    for ( i = 1; i <= 10 ; i++)
    {
        multiplicacion = multiplicacion + n;
        cout << multiplicacion << endl;
    }
    
   return 0; 
    
}