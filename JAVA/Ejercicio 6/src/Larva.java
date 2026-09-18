/*
Descripcion:
Clase hija que representa a una larva

*/

public class Larva extends Hormiga{
    public Larva(int id){
        // llamamos al cosntructor de la clase padre
        super(id, "Larva"); 
    }
    
    @Override 
    public void mostrarAccion(){
        System.out.println("La larva esta creciendo dentro del hormiguer");

    }


}
