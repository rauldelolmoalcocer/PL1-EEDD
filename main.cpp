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

            1. Generar aleatoriamente la cola de autom�viles disponibles en la f�brica con NV autom�viles.
            2. Generar aleatoriamente la cola de autom�viles disponibles en la f�brica solicitando NV por pantalla.
            3. Mostrar en pantalla los datos de la cola de autom�viles disponibles en la f�brica.
            4. Avanzar un paso en la simulaci�n: salen NS autom�viles de la cola (almac�n de la f�brica) y llegan
            a un almac�n de zona (elegida aleatoriamente).
            5. Avanzar un paso en la simulaci�n solicitando NS por pantalla: salen NS autom�viles de la cola
            (almac�n de la f�brica) y llegan a un almac�n de zona.
            6. Mostrar en pantalla los datos de los almacenes de zona (camiones o pilas y registro o cola).
            7. Borrar la cola de autom�viles disponibles en la f�brica, de los camiones y/o de los registros de zona.
            8. Realizar la simulaci�n hasta finalizar los autom�viles disponibles (en cada paso salen NS
            autom�viles). En cada uno de los pasos se mostrar�n en pantalla los datos de la cola de autom�viles
            disponibles (cola del almac�n de f�brica) y de los camiones y zonas de reparto (pilas y colas).
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
    return 0;
}
