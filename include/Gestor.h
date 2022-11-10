#ifndef GESTOR_H
#define GESTOR_H

#include "Fabrica.h"
#include "Zona.h"

using namespace std;

class Gestor
{
    public:


        static void paso_simulacion(Zona *zonaA,Zona *zonaB,Zona *zonaC,Zona *zonaD, Fabrica *fab);


};

#endif // GESTOR_H
