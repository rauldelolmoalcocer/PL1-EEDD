#ifndef CAMION_H
#define CAMION_H
#include <string>

using namespace std;

class Camion
{

    public:
        Camion(string numero_bastidor, string modelo, string color, string concesionario);
        virtual ~Camion();
        void to_string();
    private:
        string numero_bastidor;
        string modelo;
        string color;
        string concesionario;
};

#endif // CAMION_H
