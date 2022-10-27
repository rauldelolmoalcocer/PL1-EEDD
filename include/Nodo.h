#ifndef NODO_H
#define NODO_H

#include <iostream>
#include <string>
#include "Vehiculo.h"

class Nodo
{
    public:
        Nodo(Vehiculo *veh, Nodo *siguiente);
        virtual ~Nodo();
        void to_string();

        //anadir proteccion a cola_vacia.
        void cola_vacia(Nodo *frente);

        int* get_Vehiculo_pointer();
        int* get_Nodo_pointer();


    protected:

    private:
        Vehiculo *veh;
        Nodo *siguiente;

        //hay que hacer un toString() para leer los datos del nodo.

};

#endif // NODO_H
