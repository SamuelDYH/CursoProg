public class Producto {
    //Creo los atributos de mi clase producto
    String nombre;
    double precio;
    int stock;

    //Constructor para crear el objeto con valores iniciales
    public Producto(String nombre, double precio, int stock){
        this.nombre = nombre; //Guardamos el atributo nombre el valor recibido por el Constructor
        this.precio = precio; //Guardamos el atributo precio el valor recibido por el Constructor
        this.stock = stock;//Guardamos el atributo stock el valor recibido por el Constructor

    }
    
    //CREAR METODOS
    
    //METODO QUE MUESTRA LA INFORMACION DE UN PRODUCTO EN CONSOLA
    public void mostrarinfo(){
        System.out.println("Nombre: " + nombre);//Mostrar el nombre del producto
        System.out.println("Precio: " + precio);//Mostrar el precio del producto
        System.out.println("Stock: " + stock);//Mostrar el stock del producto
    }

    //METODO QUE CALCULA EL VALOR TOTAL DEL INVENTARIO DEL PRODUCTO
 
    public double calcularValorInventario(){
        //Retornamos el resultado de multiplicar precio por stock
        return precio * stock;
    }




}
