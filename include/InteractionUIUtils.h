#ifndef INTERACTIONUIUTILS_H
#define INTERACTIONUIUTILS_H


#include <iostream>
#include <string>

using namespace std;

class InteractionUIUtils
{
    /*

    1. Generar aleatoriamente la cola de automoviles disponibles en la fabrica con NV automoviles.
    2. Generar aleatoriamente la cola de automoviles disponibles en la fabrica solicitando NV por pantalla.
    3. Mostrar en pantalla los datos de la cola de automoviles disponibles en la fabrica.
    4. Avanzar un paso en la simulaci�n: salen NS automoviles de la cola (almacen de la fabrica) y llegan
    a un almacen de zona (elegida aleatoriamente).
    5. Avanzar un paso en la simulacion solicitando NS por pantalla: salen NS automoviles de la cola
    (almac�n de la fabrica) y llegan a un almacen de zona.
    6. Mostrar en pantalla los datos de los almacenes de zona (camiones o pilas y registro o cola).
    7. Borrar la cola de automoviles disponibles en la f�brica, de los camiones y/o de los registros de zona.
    8. Realizar la simulacion hasta finalizar los autom�viles disponibles (en cada paso salen NS
    autom�viles). En cada uno de los pasos se mostraran en pantalla los datos de la cola de automoviles
    disponibles (cola del almacen de fabrica) y de los camiones y zonas de reparto (pilas y colas).
    0. Salir.
    */



    public:
        static void printMenu();

};

#endif // INTERACTIONUIUTILS_H
