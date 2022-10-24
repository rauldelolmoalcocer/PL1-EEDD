#include <iostream>
#include <string>
#include <InteractionUIUtils.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int main()
{

    //Variables de control del menu de usuario
    int optionUser = 999999;

    //pintamos menu de interaccion con el usuario.
    while(optionUser != 0)
    {

        /*

            1. Generar aleatoriamente la cola de automóviles disponibles en la fábrica con NV automóviles.
            2. Generar aleatoriamente la cola de automóviles disponibles en la fábrica solicitando NV por pantalla.
            3. Mostrar en pantalla los datos de la cola de automóviles disponibles en la fábrica.
            4. Avanzar un paso en la simulación: salen NS automóviles de la cola (almacén de la fábrica) y llegan
            a un almacén de zona (elegida aleatoriamente).
            5. Avanzar un paso en la simulación solicitando NS por pantalla: salen NS automóviles de la cola
            (almacén de la fábrica) y llegan a un almacén de zona.
            6. Mostrar en pantalla los datos de los almacenes de zona (camiones o pilas y registro o cola).
            7. Borrar la cola de automóviles disponibles en la fábrica, de los camiones y/o de los registros de zona.
            8. Realizar la simulación hasta finalizar los automóviles disponibles (en cada paso salen NS
            automóviles). En cada uno de los pasos se mostrarán en pantalla los datos de la cola de automóviles
            disponibles (cola del almacén de fábrica) y de los camiones y zonas de reparto (pilas y colas).
            9.Limpiar consola.
            0. Salir.


        */
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
            //Generar aleatoriamente la cola de automóviles disponibles en la fábrica con NV automóviles
            cout << "Generar cola automoviles" << endl;
            break;
        case 2:
            // Generar aleatoriamente la cola de automóviles disponibles en la fábrica solicitando NV por pantalla
            cout << "Generar cola automoviles disponibles" << endl;
            break;
        case 3:
            //Mostrar en pantalla los datos de la cola de automóviles disponibles en la fábrica.
            cout << "Mostrar datos de pila" << endl;
            break;
        case 4:
            //Avanzar un paso en la simulación: salen NS automóviles de la cola (almacén de la fábrica) y llegana un almacén de zona (elegida aleatoriamente).
            break;
        case 5:
            //5. Avanzar un paso en la simulación solicitando NS por pantalla: salen NS automóviles de la cola(almacén de la fábrica) y llegan a un almacén de zona.
            break;
        case 6:
            //6. Mostrar en pantalla los datos de los almacenes de zona (camiones o pilas y registro o cola).
            break;
        case 7:
            // 7. Borrar la cola de automóviles disponibles en la fábrica, de los camiones y/o de los registros de zona.
            break;
        case 8:
            // 8. Realizar la simulación hasta finalizar los automóviles disponibles (en cada paso salen NS automóviles)
            break;

        case 9:
            system("cls");
            break;
        default:
            cout << "ERROR: Te has equivocado vuelve a intentarlo" << endl;

        }


    }
    return 0;
}
