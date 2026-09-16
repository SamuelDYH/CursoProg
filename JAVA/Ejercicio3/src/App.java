/*Titulo: Ejercicio 1 -Clase, objeto y atributos
Enunciados
Crear una clasellamada estudiantes con los atributos nombre, edad y carrera
Luego, desde la clase principal, crear dos objetos y mostrar sus datos en consola */





public class App {
    public static void main(String[] args){
        // Aqui creamos el objeto tipo estudiante
        Estudiante estudiante1 = new Estudiante();

        //Asignamos el valor "Samuel" al atributo nombre del objeto estudiante1  
        estudiante1.nombre = "Samuel";

        //Asignamos el valor 18 al atributo edad del objeto estudiante1
        estudiante1.edad = 18;

        //Asignamos el valor "Ing.Software" al atributo carrera del objeto estudiante1
        estudiante1.carrera = "Ing. Software";

        Estudiante estudiante2 = new Estudiante();
        estudiante2.nombre = "David";
        estudiante2.edad = 15;
        estudiante2.carrera = "Arquitectura";

        System.out.println("======ESTUDIANTE 1======");
        System.out.println("Nombre: " + estudiante1.nombre);
        System.out.println("Edad: " + estudiante1.edad );
        System.out.println("Careera: " + estudiante1.carrera);

        System.out.println();//Imprimimos una linea en blanco

        System.out.println("======ESTUDIANTE 2======");
        System.out.println("Nombre: " + estudiante2.nombre);
        System.out.println("Edad: " + estudiante2.edad );
        System.out.println("Careera: " + estudiante2.carrera);
    }    
}