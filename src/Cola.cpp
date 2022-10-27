#include "Cola.h"
#include "Nodo.h"
#include "Vehiculo.h"
#include <iostream>

using namespace std;

Cola::Cola()
{
    this->frente = NULL;
    this->fin = NULL;
}

Cola::~Cola()
{
    //dtor
}

bool Cola::cola_vacia(Nodo *frente){
    return(frente == NULL ? true : false);
}

void Cola::set_nodo_cola(Vehiculo *veh){
    /*
    Metodo encargada de pasarle un nodo yu asignarselo de nuevo a nodo cola.
    */

    //pasamos los datos.
    Nodo *nuevo_nod = new Nodo(veh, NULL);


    if(cola_vacia(frente)){
        //Si cola vacia -> frente = nodo.
        frente = nuevo_nod;

    }else{
        fin->siguiente = nuevo_nod;


    }

    fin = nuevo_nod;
}
Nodo Cola::get_nodo_cola(){
    /*
    Metodo encargada de pasar el primer elemento de la cola.
    */
    return(frente);

}


void Cola::eliminar_nodo_cola(){
    /*
    Metodo encargado de eliminar nodo de frente de cola.
    */

    //COMPROBAR ESTE METODO
    Vehiculo *frente_veh = frente->get_Nodo_pointer();//RIESGO DE QUE ESTO NO TIRE.

    Nodo *aux = frente;

    if(frente = fin){

        frente = NULL;
        fin = NULL;
    }else{
        frente = frente->get_Nodo_pointer();
    }


}
void Cola::get_datos_nodo_frente(){

    /*
    Metodo encargado de mostrar los elementos de un nodo.
    */
    cout << "-----------------FRENTE DE COLA-----------" << endl;
    cout << "Puntero asociado a vehiculo " << frente->get_Vehiculo_pointer() << endl;
    cout << "------------------------------------------" << endl;
    cout << "Numero bastidor: " << frente->veh->set_numero_bastidor() << endl;
    cout << "Modelo: " << frente->veh->set_modelo() << endl;
    cout << "Color: " << frente->veh->set_color() << endl;
    cout << "Concesionario" << frente->veh->set_concesionario() << endl;
    cout << "------------------------------------------" << endl;
    cout << "Puntero a siguiente: " << frente->siguiente() << endl;


}

