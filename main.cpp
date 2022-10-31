#include <iostream>
#include <string>
#include <InteractionUIUtils.h>
#include <Cola.h>
#include <stdlib.h>
#include <windows.h>
#include <Camion.h>
#include "Vehiculo.h"
#include "Fabrica.h"
#include "FabricaService.h"


using namespace std;

int main()
{
    FabricaService::GenerateNumeroBastidor();




















    /*
    Vehiculo *Veh = new Vehiculo("asdsd", "asdd", "sasd", "asdd");
    Vehiculo *Veh1 = new Vehiculo("Manolo", "Pepe", "sasd", "asdd");
    Vehiculo *Veh2 = new Vehiculo("Ejerc", "Juancho", "sasd", "asdd");
    Veh->to_string();

    Cola *cola = new Cola();

    cola->set_nodo_cola(Veh);

    cola->get_datos_nodo_frente();

    cola->set_nodo_cola(Veh1);

    cola->get_datos_nodo_frente();

    cout << "Fin de cola" <<cola->get_nodo_cola_fin()->get_Vehiculo()->get_modelo() << endl;

    cola->set_nodo_cola(Veh2);
    cout << "Fin de cola" <<cola->get_nodo_cola_fin()->get_Vehiculo()->get_modelo() << endl;


    cola->desencolar();

    cola->get_datos_nodo_frente();

    cola->desencolar();
    cola->get_datos_nodo_frente();

    cola->desencolar();
    cola->get_datos_nodo_frente();
    */
    /*
    //Variables de control del menu de usuario
    int optionUser = 999999;

    //pintamos menu de interaccion con el usuario.
    while(optionUser != 0)
    {

        //system("cls");

        //Imprimos la interfaz de usuario.
        InteractionUIUtils::printMenu();

        //Pedimos los datos al usuario

        cout << "Elija la opcion que desea ejecutar:" << endl;
        cin >> optionUser;

        switch(optionUser)
        {



        //Opciones del menu de interaccion con el usuario.

        case 0:
            //Salir del menu.
            optionUser = 0;
            cout << "Salir" << endl;
            break;

        case 1:
            //Generar aleatoriamente la cola de autom�viles disponibles en la f�brica con NV autom�viles
            cout << "Generar cola automoviles" << endl;
            break;
        case 2:
            // Generar aleatoriamente la cola de autom�viles disponibles en la f�brica solicitando NV por pantalla
            cout << "Generar cola automoviles disponibles" << endl;
            break;
        case 3:
            //Mostrar en pantalla los datos de la cola de autom�viles disponibles en la f�brica.
            cout << "Mostrar datos de pila" << endl;
            break;
        case 4:
            //Avanzar un paso en la simulaci�n: salen NS autom�viles de la cola (almac�n de la f�brica) y llegana un almac�n de zona (elegida aleatoriamente).
            break;
        case 5:
            //5. Avanzar un paso en la simulaci�n solicitando NS por pantalla: salen NS autom�viles de la cola(almac�n de la f�brica) y llegan a un almac�n de zona.
            break;
        case 6:
            //6. Mostrar en pantalla los datos de los almacenes de zona (camiones o pilas y registro o cola).
            break;
        case 7:
            // 7. Borrar la cola de autom�viles disponibles en la f�brica, de los camiones y/o de los registros de zona.
            break;
        case 8:
            // 8. Realizar la simulaci�n hasta finalizar los autom�viles disponibles (en cada paso salen NS autom�viles)
            break;

        case 9:
            system("cls");
            break;
        default:
            cout << "ERROR: Te has equivocado vuelve a intentarlo" << endl;

        }





    }

           */

    return 0;
}
