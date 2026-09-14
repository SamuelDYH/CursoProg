/*Ejercicio 6: Plan de internet (validación + recargo)
Escribe un algoritmo que reciba dos datos: el plan de internet y el consumo. El plan
solo puede ser 1 o 2, y el consumo debe ser un número mayor o igual a cero.
Si el plan es 1, la tarifa base es 12 dólares y el límite incluido es 80. Si el plan es 2, la
tarifa base es 20 dólares y el límite incluido es 150.
Si el consumo supera el límite del plan, se cobra un recargo por excedente: por cada
unidad excedida se suma 0.25 al valor base. Si el consumo no supera el límite, se
paga solo la tarifa base.
Si el plan no es 1 ni 2, o si el consumo es negativo, el algoritmo debe mostrar “DATOS
INVÁLIDOS”. En caso contrario, debe mostrar el total a pagar.
E/P/S
E: PLANINTERNET1, PLANINTERNET2, CONSUMO
P: PLANINTERNET1= 12$, excedente1 = (consumo - 80) * 0.25 + 12, PLANINTERNET2= 20$, excedente2 = (consumo - 150) * 0.25 + 20
S: EL TOTAL A PAGAR O MOTRAR"DATOS INVALIDOS"  */
#include <iostream>
using namespace std;
int main(){
    float plan;
    float consumo;
    float excedente1;
    float excedente2;
    cout <<"Ingrese su plan: ";
    cin >> plan;
    while (plan != 1 and plan != 2)
    {
        cout <<"Datos invalidos, vuelva a ingresar: ";
        cin >> plan;
         
    }
    if (plan == 1){
        cout <<"Ingrese su conusmo: ";
        cin >> consumo;
        while (consumo < 0) 
        {
            cout <<"Datos invalidos, vuelva a ingresar: ";
            cin >> consumo;
        }
        if (consumo >= 0 and consumo <= 80)
        {
            cout <<"Total a pagar: 12$ ";
        
        }else{
            excedente1 = (consumo - 80) * 0.25 + 12;
            cout <<"Total a pagar: " << excedente1 << "$";
        }
        

       
           
    }else{
        cout <<"Ingrese su consumo: ";
            cin >> consumo;
            while (consumo < 0){

            cout <<"Datos invalidos, vuelva a ingresar: ";
            cin >> consumo;}
        if (consumo >= 0 and consumo <= 150)
        {
            cout <<"Total a pagar: 20$";
            
        }else{

            excedente2 = (consumo - 150) * 0.25 + 20;
            cout <<"Total a pagar: " << excedente2 << "$";
        }
      
     
    } 
        
        
}
    
    







