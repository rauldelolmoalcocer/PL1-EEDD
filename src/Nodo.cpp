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
