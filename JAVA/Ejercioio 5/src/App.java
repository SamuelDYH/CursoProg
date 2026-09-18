/*TITULO : Encapsulamiento, getters, setters y validacion 

Enunciadp: 
    Crear una clase llamada cuentaBancaria con atributos privados titular y saldo
    La clase debe permitir consultar y modificar sus datos de forma controlada usando getters, setters y metodos con validacion
        */

public class App {
    public static void main(String[] args) throws Exception {
       CuentaBancaria cuenta1 = new CuentaBancaria("Samuel", 100.00);
       
       System.out.println("====DATOS INICIALES====");
       //Consultamos el titular y el saldo usando los getters
       System.out.println("Titular: " + cuenta1.getTitular());
       System.out.println("Saldo: " + cuenta1.getSaldo());

       System.out.println();

       cuenta1.setTitular("David"); //Cambiamos el nombre del tirular usando el setter
       System.out.println("Nuevo Titular: " + cuenta1.getTitular()); //Mostramos el nuevo titular
    
       System.out.println();

       cuenta1.depositar(50.0);
       cuenta1.retirar(30.0);

       cuenta1.retirar(200.00); //Intentamos realizar un retiro invalido
       cuenta1.depositar(-10);//Intentamos realizar un deposito invalido

       System.out.println();

       System.out.println("===Datos Finales==");
       System.out.println("Titular: " + cuenta1.getTitular());
       System.out.println("Saldo: " + cuenta1.getSaldo());
    }
}
