#ifndef COLA_H
#define COLA_H

#include "Nodo.h"
#include <string>
#include <iostream>

using namespace std;


/* CLASE COLA
Por defecto se generar vacia con el fin de que el usuario instroducca los datos
con los getters y setters correspondientes.
*/
class Cola
{
    public:
        Cola();
        virtual ~Cola();

        //geters y setters de cola

        void get_nodo_cola(Nodo *nod);//inserta un nodo a la cola
        Nodo set_nodo_cola(); //Devuelve un nodo
        void eliminar_nodo_cola();//elimina el dato de la cola

    protected:

    private:
        Nodo *frente;
        Nodo *fin;
};

#endif // COLA_H
