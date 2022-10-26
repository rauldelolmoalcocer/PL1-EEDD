#ifndef VEHICULO_H
#define VEHICULO_H
#include <string>
#include <iostream>

using namespace std;

class Vehiculo
{
   public:
        Vehiculo(string numero_bastidor, string modelo, string color, string concesionario);
        virtual ~Vehiculo();
        void to_string();
    private:
        string numero_bastidor;
        string modelo;
        string color;
        string concesionario;
};

#endif // VEHICULO_H
