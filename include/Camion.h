#ifndef CAMION_H
#define CAMION_H
#include <string>
#include "Pila.h"

using namespace std;

class Camion
{

    public:
        Camion(string zona_asig);
        virtual ~Camion();

        string get_zona_asig();
        Pila* get_stack();
        int get_capacidad();
        int get_num_nodos();

        void incremetar_capacidad();
        bool overflow();

        void to_string();

    private:

        string zona_asig;
        Pila *stack_;
        int capacidad;
        int num_nodos;


};

#endif // CAMION_H
