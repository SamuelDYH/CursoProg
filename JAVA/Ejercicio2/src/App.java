/*CREACION DE OBJETOS
Crear un objeto de tipo persona, asignar valores a sus atributos y mostrarlos en consola  */



public class App { //CLASE PRINCIPAL DEL PROGRAMA  
    public static void main(String[] args) throws Exception {
        //Aqui cramos un objeto de tipo persona llamado persona 1
        Persona persona1 = new  Persona();
        // int nombre de la variable = crear un nuevo objeto
        
        // Asignamos un valor al atributo nombre del objeto  
        persona1.nombre = "Samuel";

        //"TOD0 LO QUE SEA TEXTO O STRING VA ENTRE COMILLAS"

        // Asignamos un valor al atributo edad del objeto
        persona1.edad = 18; 

        //SIEMPRE PARA PODER MOSTRAR UN TEXTO EN CONSOLA
        System.out.println("Nombre: " + persona1.nombre);
        System.out.println("Edad: " + persona1.edad);
    }
}
