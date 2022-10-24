#include "InteractionUIUtils.h"

#include <iostream>
#include <string>

using namespace std;

void InteractionUIUtils::printMenu(){

    /*
        OBJ:Imprimir el menu interaccion con el usuario y elegir la operacion que se desea realizar
        PRE: NULL
        printMenu--> secuencia de Strings por pantalla
    */
    cout << "|-----------------------------------------------------------------------Menu de Interaccion-------------------------------------------------------------|" <<endl;
    cout << "|-------------------------------------------------------------------------------------------------------------------------------------------------------|"<< endl;
    cout << "|1. Generar aleatoriamente la cola de automoviles disponibles en la fabrica con NV automoviles.                                                         |"<< endl;
    cout << "|2. Generar aleatoriamente la cola de automoviles disponibles en la fabrica solicitando NV por pantalla.                                                |"<< endl;
    cout << "|3. Mostrar en pantalla los datos de la cola de automoviles disponibles en la fabrica.                                                                  |"<< endl;
    cout << "|4. Avanzar un paso en la simulacion: salen NS automoviles de la cola (almacen de la fabrica) y llegada un almacen de zona (elegida aleatoriamente).    |"<< endl;
    cout << "|5. Avanzar un paso en la simulacion solicitando NS por pantalla: salen NS automoviles de la cola(almacen de la fabrica) y llegan a un almacen de zona. |"<< endl;
    cout << "|6. Mostrar en pantalla los datos de los almacenes de zona (camiones o pilas y registro o cola).                                                        |"<< endl;
    cout << "|7. Borrar la cola de automoviles disponibles en la fabrica, de los camiones y/o de los registros de zona.                                              |"<< endl;
    cout << "|8. Realizar la simulacion hasta finalizar los automoviles disponibles.                                                                                 |"<< endl;
    cout << "|9. Limpiar datos de la pantalla                                                                                                                        |"<< endl;
    cout << "|0. Salir.                                                                                                                                              |"<< endl;
    cout << "|-------------------------------------------------------------------------------------------------------------------------------------------------------|"<< endl;


}
