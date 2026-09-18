/*DDescripcion.
    Clase padre que representa una hormiga general
    Aqui colocamos los atributos  */

public class Hormiga {
    private int id;
    private String estado;
    private String tipo;

    //Constructor
    public Hormiga(int id, String tipo){
        this.id = id;
        this.tipo = tipo;
        this.estado = "VIVA";
    }

    //GETTERS
    public int getid(){
        return id;
    }
    public String gettipo(){
        return tipo;
    }

    public String getestado(){
        return estado;
    }

    //Setter para cambiar el estado
    public void setestado(String estado){
        this.estado = estado;
    }
        
    //Metodo que luego sera sobreescrito 
    public void mostrarAccion(){
        System.out.println("La hormiga realiza una accion general");

    }
    

    public void mostrarInfo(){
        System.out.println("ID: " + id + "  Tipo: " + tipo + "  Estado: " + estado);
    }
} 
