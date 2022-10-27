#include "Nodo.h"
#include <string>
#include <iostream>

using namespace std;

Nodo::Nodo(Vehiculo *veh, Nodo *siguiente)
{
    this->veh = veh;
    this->siguiente = siguiente;
}
Nodo::~Nodo()
{
    //dtor
}

int* Nodo::get_Vehiculo_pointer(){
    return(&veh);
}
int* get_Nodo_pointer(){
    return(&siguiente);
}


Nodo::to_string(){
    cout << "Puntero a Nodo:" << siguiente << "vehiculo" << veh << endl;
}
