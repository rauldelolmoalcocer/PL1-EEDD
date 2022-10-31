#ifndef FABRICASERVICE_H
#define FABRICASERVICE_H

#include <iostream>
#include "Vehiculo.h"
#include <string>
#include "Cola.h"
#include <Fabrica.h>
using namespace std;

class FabricaService
{
    public:
        static void GenerateRandomVehiculos(Fabrica *fab);
        static int GernerateRandomNumber();
        static void GenerateNumeroBastidor();

    protected:

    private:
};

#endif // FABRICASERVICE_H
