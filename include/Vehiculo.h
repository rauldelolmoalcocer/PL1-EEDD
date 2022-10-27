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

        string get_numero_bastidor();
        string get_modelo();
        string get_color();
        string get_concesionario();

    private:
        string numero_bastidor;
        string modelo;
        string color;
        string concesionario;
};

#endif // VEHICULO_H
