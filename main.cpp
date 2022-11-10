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
#include <time.h>
#include "Pila.h"
#include "Zona.h"
#include "Gestor.h"

#define NUM_AL 100
using namespace std;

int main()
{

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    //Creamos el objeto fabrica.
    Fabrica *fab_vehiculos = new Fabrica("Fabrica Manolo");

    //Creamos las zonas.

    Zona* zonaA = new Zona("A");
    Zona* zonaB = new Zona("B");
    Zona* zonaC = new Zona("C");
    Zona* zonaD = new Zona("D");


    FabricaService::GenerateRandomVehiculos(fab_vehiculos, 10);
    //FabricaService::MostrarDatosPorPantalla(fab_vehiculos);

    Gestor::paso_simulacion(zonaA, zonaB, zonaC, zonaD, fab_vehiculos,10);


    Gestor::ver_almacenes(zonaA, zonaB, zonaC, zonaD);

    Gestor::borrar_registros(zonaA, zonaB, zonaC, zonaD, fab_vehiculos);

    //PROBLEMA REFERIDO A DESAPILAR EN PILA.CPP

   //zonaA->get_cam1()->get_stack()->get_cima()->get_Vehiculo()->to_string();
   //zonaA->get_cam2()->get_stack()->get_cima()->get_Vehiculo()->to_string();

    //zonaA->get_almacen()->get_datos_nodo_frente();


































/*
    //Creamos la cola
    Fabrica *fab = new Fabrica("fabricas manolo");

    FabricaService::GenerateRandomVehiculos(fab, 13);


    FabricaService::MostrarDatosPorPantalla(fab);

    //fab->get_cola_fabricacion()->get_datos_nodo_frente();

*/

/*
    Pila *pila = new Pila();

    Vehiculo *Veh = new Vehiculo("asdsd", "asdd", "sasd", "asdd");
    Vehiculo *Veh1 = new Vehiculo("Manolo", "Pepe", "sasd", "asdd");
    Vehiculo *Veh2 = new Vehiculo("Ejerc", "Juancho", "sasd", "asdd");
    Vehiculo *Veh3 = new Vehiculo("W2ewwqe", "Lucia", "sasd", "asdd");
    Vehiculo *Veh4 = new Vehiculo("weqwec", "Isabel", "sasd", "asdd");


    pila->set_nodo_a_pila(Veh);
    pila->get_data_cima();

    pila->set_nodo_a_pila(Veh1);
    pila->get_data_cima();
    pila->set_nodo_a_pila(Veh2);
    pila->get_data_cima();
    pila->set_nodo_a_pila(Veh3);
    pila->get_data_cima();
    pila->set_nodo_a_pila(Veh4);
    pila->get_data_cima();

    pila->desapilar_nodo();
    pila->get_data_cima();
*/
/*
    Fabrica *fab = new Fabrica("manolo");

    FabricaService::GenerateRandomVehiculos(fab, 4);

    fab->get_cola_fabricacion()->desencolar();
    fab->get_cola_fabricacion()->desencolar();
    fab->get_cola_fabricacion()->desencolar();
    fab->get_cola_fabricacion()->get_datos_nodo_frente();
*/    /*
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
    CUIDADO CON EL NV TENERLO CONTROLADO POSIBLE PROBLEMA CON EL

    */
/*
    //Creamos el objeto fabrica.
    Fabrica *fab_vehiculos = new Fabrica("Fabrica Manolo");

    //Creamos las zonas.

    Zona* zonaA = new Zona("A");
    Zona* zonaB = new Zona("B");
    Zona* zonaC = new Zona("C");
    Zona* zonaD = new Zona("D");




    //Variables de control del menu de usuario
    int optionUser = 999999;
    int NV = NUM_AL;
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
            cout << "Generar cola automoviles, aleatoriamente" << endl;
            cout << "Se van a generar 60 vehiculos aleatoriamente" << endl;

            FabricaService::GenerateRandomVehiculos(fab_vehiculos, NUM_AL);
            break;
        case 2:

            NV = 0;
            // Generar aleatoriamente la cola de autom�viles disponibles en la f�brica solicitando NV por pantalla
            cout << "Generar cola automoviles preguntando a usuario cuantos quire" << endl;
            //Cuidado !!! Excepcion nunca pedirse mas elementos de los que hay en la cola.
            cout << "Cuantos automoviles quieres en la cola?" << endl;
            cin >> NV;

            FabricaService::GenerateRandomVehiculos(fab_vehiculos, NV);



            break;
        case 3:
            //Mostrar en pantalla los datos de la cola de autom�viles disponibles en la f�brica.
            cout << "Mostrar datos de pila" << endl;
            if(!fab_vehiculos->get_cola_fabricacion()->cola_vacia()){
                            FabricaService::MostrarDatosPorPantalla(fab_vehiculos);
            }else{
                SetConsoleTextAttribute(h, 4);
                cout << "ERROR: La cola esta vacia." << endl;
                SetConsoleTextAttribute(h, 7);
            }


            break;
        case 4:
            //Avanzar un paso en la simulaci�n: salen NS autom�viles de la cola (almac�n de la f�brica) y llegana un almac�n de zona (elegida aleatoriamente).


            if(!fab_vehiculos->get_cola_fabricacion()->cola_vacia()){
                Gestor::paso_simulacion(zonaA, zonaB, zonaC, zonaD, fab_vehiculos, FabricaService::GernerateRandomNumber(0, NUM_AL));
            }else{
                SetConsoleTextAttribute(h, 4);
                cout << "ERROR: La cola esta vacia." << endl;
                SetConsoleTextAttribute(h, 7);
            }

            break;
        case 5:
            //5. Avanzar un paso en la simulaci�n solicitando NS por pantalla: salen NS autom�viles de la cola(almac�n de la f�brica) y llegan a un almac�n de zona.

            if(!fab_vehiculos->get_cola_fabricacion()->cola_vacia()){

                int num = 0;
                cout << "Dime el numero de vehiculos que quieres llevar a la FABRICA en la simulacion?" << endl;
                cin >> num;
                cout << NV << endl;
                if(num <= NV){
                    Gestor::paso_simulacion(zonaA, zonaB, zonaC, zonaD, fab_vehiculos, num);
                }else{
                    SetConsoleTextAttribute(h, 4);
                    cout << "ERROR: Cuidado no puedes meter un numero menor que el que tiene la cola" << endl;
                    SetConsoleTextAttribute(h, 7);
                }

            }else{
                SetConsoleTextAttribute(h, 4);
                cout << "ERROR: La cola esta vacia." << endl;
                SetConsoleTextAttribute(h, 7);
            }



            break;
        case 6:
            //6. Mostrar en pantalla los datos de los almacenes de zona (camiones o pilas y registro o cola).

            Gestor::ver_almacenes(zonaA, zonaB, zonaC, zonaD);

            break;

        case 7:
            // 7. Borrar la cola de autom�viles disponibles en la f�brica, de los camiones y/o de los registros de zona.

            break;
        case 8:
            // 8. Realizar la simulaci�n hasta finalizar los autom�viles disponibles (en cada paso salen NS autom�viles)

            if(!fab_vehiculos->get_cola_fabricacion()->cola_vacia()){
                Gestor::paso_simulacion(zonaA, zonaB, zonaC, zonaD, fab_vehiculos, NUM_AL);
            }else{
                SetConsoleTextAttribute(h, 4);
                cout << "ERROR: La cola esta vacia." << endl;
                SetConsoleTextAttribute(h, 7);
            }
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
