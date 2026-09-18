/*
TITULO: Ejercicio2 -Constructoe y metodos
ENUNCIADO
    Crear una clase llamada Producto con los atributos nombre, precio, stok
    la calse debe tener un constructor, un metodo para mostrar informacion y
    y un metodo para calcular el valor total de inventario      */

public class App {
    public static void main(String[] args) throws Exception {
        // Creamos el primer objeto usando el constructor
        Producto producto1 = new Producto("Mouse", 15.5, 10);
        
        // Creamos el segundo onjeto con el constructor
        Producto producto2 = new Producto("Teclado", 25.00, 5);
        
        System.out.println("====PRODUCTO 1====");
        // Llamamos al metodo mostrarinfo del primer onjeto
        producto1.mostrarinfo();

        System.out.println("Valor total en el inventario: " + producto1.calcularValorInventario());

        System.out.println();

        System.out.println("====PRODUCTO 2====");
        // Llamamos a la funciom
        producto2.mostrarinfo();

        System.out.println("Valor total en el inventario: " + producto2.calcularValorInventario());
    }


}
