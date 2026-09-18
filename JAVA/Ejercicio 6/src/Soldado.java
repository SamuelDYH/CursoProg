/*Clase homirga solado */

public class Soldado extends Hormiga{
    public Soldado(int id){
        super(id, "Soldado");
    }

    @Override 
    public void mostrarAccion(){
        System.out.println("La hormiga soldado protege el hormiguero");
    }
}
