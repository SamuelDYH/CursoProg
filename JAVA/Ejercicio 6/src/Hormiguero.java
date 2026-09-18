/*Clase gestera que administra la clase de listas
Aqui aplicamos coleccion, busqueda y logica basica */
import java.util.ArrayList;
public class Hormiguero {
    private ArrayList<Hormiga> listaHormigas;

    //Constructor
    public Hormiguero(){
        listaHormigas = new  ArrayList<>();
    }

    //Metodo para agregar una larva
    public void agregarLarca(int id){
        listaHormigas.add(new Larva(id));
        System.out.println("Larva agregada correctamente");
    }

    //Metodo para agregar soldado
    public void agregarSoldado(int id){
        listaHormigas.add(new Soldado(id));
        System.out.println("Soldado agregada correctamente");
    }

    //Metodo para mostrar todas las hormigas
    public void mostrarHormigas(){
        if (listaHormigas.isEmpty()) {
            System.out.println("No hay hormigas registradas");
            return ;    
        }
        for(Hormiga hormiga : listaHormigas){
            hormiga.mostrarInfo();
            hormiga.mostrarAccion();//Polimorfismo
            System.out.println("------------------------");
        }
    }


    //mETDO PARA BUSCAR UNA HORMIGA
    public Hormiga buscarPorID(int id){
        for(Hormiga hormiga : listaHormigas){
            if (hormiga.getid() == id) {
                return hormiga;
            }
        }
        return null;
    }

    //Metodo alimentar hormiga
    public void alimentarHormiga(int id){
        Hormiga hormiga = buscarPorID(id);

        if (hormiga == null) {
            System.out.println("No existe una hormiga con ese ID");
            return ;
        }
        if (hormiga.getestado().equals("MUerta")){
            System.out.println("No se puede alimentar a una hormiga muerta ");
            return; 
        } 

        System.out.println("Hormiga encontrada"); 
        System.out.println();
        System.out.println("La hormiga ha sido alimentada correctamente");     
         
    }

    //Metodo para cambiar el estado de una hormiga muerta
    public void eliminarHormiga(int id){
        Hormiga hormiga = buscarPorID(id);
        if (hormiga == null) {
            System.out.println("No existe una hormiga con ese ID");
            return; 
        }
        System.out.println("La hormiga ahora esta en estado muerto");

    }
}
