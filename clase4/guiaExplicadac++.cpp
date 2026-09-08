/*GUIA EXPLICADA PARA LA SINTAXIS DE C++
1) #include<iostream> 
    Esto le da al programa la capacidad de usar funciones de entrada y salida

2) using namespace std;
    Esto es para no escribir std:: antes de cada funcion de la biblioteca estandar, como 
    cout y cin

3) int main(){}
    Main es la puerta de entrada. Es la funcion principal que se ejecuta cuando el programa comienza

4) cout << "texto";
    Esto imprime en pantalla el texto que se encuentra entre comillas.
    Es el equivalente al ESCRIBIR en Pseint
    Esto es la salida de datos.

5) cin >> variable;
    Esto es para recibir datos del usuario. 
    Es el equivalente al LEER en Pseint 
    Esto es la entrada de datos 

6) endl 
    Es igual al un salto de linea (ENTER)

7) return 0;
    Esto indica que el programa ha terminado correctamente. Es una forma de decirle al 
    sistema operativo que todo ha salido bien.

8) {}
    marcan el bloque de codigo 

9) ;
    significa para terminar una instruccion, si falta da un error

10) // 
    sirve para comentar una linea. 

11) /... /
     sirve para comentar varias lineas 
  
12) float
    para guardar una variable

13) for
    Un numero determinado de repeticopnes

14) While 
    No se sabe cuntas veces se va a repetir    

15) doubel
    mas precision en calculos

16) return 0
    Termina el progrma

17) Switch
es una estructura de seleccion que permite ejecutar diferentes blowur dfr codigo segun el valor de una variable. SE USA CUANDO HAY VARIAS OPCIONES NUMERICAS O FIJAS, SE QUIERE ORGANIZAR MRJOR UN MENU, CADA OPCION REPRESENTA UN CASO DISTINTO

Diferecia rapida con if/else
     if/else sirve mas cuando las condiciones pueden ser variadas o complejas
     switch sirve mas cuando comprasras una sola variable contra vatiod valores concretos




CONDICIONALES EN C++
1. ESTRUCTURA BASICA(if/else)
    if(condicion) { 
    /se ejcuta si la condicion es verdadera
     }else{
    /se ejecuta si la condicion es falsa      
2. Varias condiciones con else if
    is( nota >= 9){
        cout << "Aprobado" << endl;
    }else{
        cout << "Reprobado" << endl;
    }
        
OPERADORES DE COMPARACION (Los que mas se usan)
== igual a (OJO: no es lo mismo que el =)
! = diferente de
> mayor que 
< menor que
>= mayor o igual 
<= menor o igual

OPERADORES LOGICOS
1 .&& AND : ambas condiciones deben cumplirse 
2. || OR: se cumple una u otra
3. ! Not: negacion */
