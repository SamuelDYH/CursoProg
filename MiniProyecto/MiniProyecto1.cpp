#include <iostream>
#include <string>
using namespace std;
void numeroDeDatos(int &x);
    void leerJuego(string juegos[], int &x, int &i);
    void mostrarRegistros(string juegos[], int &i, int x);
    void buscarDato(string juegos[],string buscando, int &i, int posicion, int &x);
    int juegosAcabados(int &x, int &acabados, int &juegosTotales);
    void mostrarResultado(int juegosTotales);
    void duracion(int tiempo);
int main(){
    string juegos[20];
    int i, opcion, tiempo;
    int x = 0;
    int acabados = 0;
    int juegosTotales = 0;
    int posicion = -1;
    string buscando;
    string saliendo;
    do
    {
        cout <<"*******MENU PRINCIPLAS*******"<< endl;
    cout <<"1.Registrar datos"<< endl;
    cout <<"2.Mostrar todos los registros"<< endl;
    cout <<"3.Buscar un registro"<< endl;
    cout <<"4.Mostrar reporte general"<< endl;
    cout <<"5.Ejecutar el componente creativo"<< endl;
    cout <<"6.Salir"<< endl;
    cin >> opcion;
      switch (opcion)
    {
    case 1:
        numeroDeDatos(x);
        leerJuego(juegos, x, i);
        break;
    case 2: 
        mostrarRegistros(juegos, i, x);    
        break;
    case 3:
        buscarDato(juegos, buscando, i, posicion, x);
        break;
    case 4:
        juegosAcabados(x, acabados, juegosTotales);
        mostrarResultado(juegosTotales);
        break;
    case 5:
        duracion(tiempo);   
        break;
    case 6:
        cout <<"Saliendo...";
        break;         
    default:
        break;
    }
       
    } while (opcion != 6);
    
}
void numeroDeDatos(int &x){
    cout << "Ingrese el numero de datos que va ingresar: " << endl;
    cin >> x;
    while (x < 0 or x > 20)
    {
        cout << "Dato invalido, vuelva a ingresar: ";
        cin >> x;   
    }
}

void leerJuego(string juegos[], int &x, int &i){
    cout <<"Ingrese los nombres de los juegos" << endl;
    for ( i = 0; i < x; i++)
    {
        cout <<"Nombre " << i + 1 <<" : " << endl;
        cin >> juegos[i]; 
    }
}
void mostrarRegistros(string juegos[], int &i, int x){
    cout << "Datos registrados " << endl;
    for ( i = 0; i < x; i++)
    {
        cout <<" - " << juegos[i] << endl;
    }
}
void buscarDato(string juegos[],string buscando, int &i, int posicion, int &x){
    cout << "Ingrese el nombre del juego que busca: ";
    cin >> buscando;
    bool encontrado = false;
  for ( i = 0; i < x; i++)
  {
    if (juegos[i] == buscando  )
    {
        cout << "Juego encontrado: " << juegos[i] << endl;
        encontrado = true;
    }
  }if (!encontrado)
    {
        cout << "Nombre no registrado.";
    }
    }

int juegosAcabados(int &x, int &acabados, int &juegosTotales){
    cout << "Ingrese el numero de juegos que ha jugados: ";
    cin >> acabados;
    cout << endl;
    juegosTotales = x - acabados;
    return juegosTotales;
       
}
void mostrarResultado(int juegosTotales){
    cout <<"Juegos por disfrtuar: " << juegosTotales << endl;

}

void duracion(int tiempo){
    cout << "Ingrese el numero de horas que desea jugar (Maximo 4Horas): ";
    cin >> tiempo;
    switch (tiempo)
    {
    case 1:
    cout <<"Sesion corta. Dispones de 1 hora de juego" << endl;
        
        break;
    case 2:
    cout <<"Sesion casual. Dispones de 2 horas de juego aprovechalos"<< endl;
        break;
    case 3:
    cout <<"Sesion gamer. Dispones de 3 horas para disfrutar "<< endl;
        break;
    case 4:
    cout <<"Sesion maxima. Cuentas con 4 horas de juego no olvides tomar un descanso"<< endl;
        break;        
    default:
    cout <<"Numero de horas invalidas, intente de nuevo"<< endl;
        break;
    }

}
