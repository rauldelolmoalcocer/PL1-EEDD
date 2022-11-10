#include "Gestor.h"
#include <iostream>
#include "Fabrica.h"

#include <string>
#include <InteractionUIUtils.h>
#include <Cola.h>
#include <stdlib.h>
#include <windows.h>
#include <Camion.h>
#include "Vehiculo.h"

#include "FabricaService.h"
#include <time.h>
#include "Pila.h"
#include "Zona.h"
using namespace std;


void Gestor::paso_simulacion(Zona* zonaA,Zona* zonaB,Zona* zonaC,Zona* zonaD, Fabrica* fab){

    /*
    se sacan NS automóviles de la cola (almacen de la fabrica) y se llevan a uno de los camiones (pila),
    en funcion de la zona de destino (elegida aleatoriamente).

    */
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    int num_coches_salen;
    int contador = 0;
    int camlleno;
    string zonas[4] = {"A", "B", "C", "D"};




    cout << "Vamos a avanzar en un paso de la emulacion" << endl;
    cout << "Dime el numero de coches que quieres que salgan de la fabrica" << endl;
    cin >> num_coches_salen;
    Vehiculo *veh;

    while(num_coches_salen > contador){

        cout << "Se va a desencolar el coche.." << endl;
        fab->get_cola_fabricacion()->get_datos_nodo_frente();

        //recogemos el vehiculo con un puntero
        veh = fab->get_cola_fabricacion()->get_frente_cola()->get_Vehiculo();

        //TESTING

        //Desencolamos el coche de la fabrica.
        fab->get_cola_fabricacion()->desencolar();


        //Le asignamos ZonaAleatoriamente
        int zone = FabricaService::GernerateRandomNumber(0,3);

        SetConsoleTextAttribute(h, 5);
        cout << "Zona caida ..." << zonas[zone] << endl;
        SetConsoleTextAttribute(h, 7);

        switch(zone){//Tocado

        case 0:
            cout << "Estoy aqui dentro"<< endl;
            //Zona asignada a
            camlleno = zonaA->set_veh_almacen(veh);
            cout << "El camion esta lleno?" << camlleno << endl;
           if(camlleno) {
                //lo llevamos al almacen
                SetConsoleTextAttribute(h, 11);
                cout << "Vamos a borrar EL CAMION" << endl;
                SetConsoleTextAttribute(h, 7);
                zonaA->llevar_veh_almacen();
                cout << "He salido!!!" << endl;
           }
            break;

        case 1:
            camlleno = zonaB->set_veh_almacen(veh);

            if(camlleno) {
                //lo llevamos al almacen
                  SetConsoleTextAttribute(h, 11);
                cout << "Vamos a borrar EL CAMION" << endl;
                SetConsoleTextAttribute(h, 7);
                zonaB->llevar_veh_almacen();
                cout << "He salido!!!" << endl;
           }
            break;

        case 2:
            camlleno = zonaC->set_veh_almacen(veh);
            if(camlleno) {
                //lo llevamos al almacen
                  SetConsoleTextAttribute(h, 11);
                cout << "Vamos a borrar EL CAMION" << endl;
                SetConsoleTextAttribute(h, 7);
                zonaC->llevar_veh_almacen();
                cout << "He salido!!!" << endl;
           }

            break;
        case 3:
            camlleno = zonaD->set_veh_almacen(veh);

            if(camlleno) {
                //lo llevamos al almacen
                SetConsoleTextAttribute(h, 11);
                cout << "Vamos a borrar EL CAMION" << endl;
                SetConsoleTextAttribute(h, 7);
                zonaD->llevar_veh_almacen();
                cout << "He salido!!!" << endl;
           }
            break;

        default:
            cout << "ERROR: Algo ha pasado con la generacion aleatoria de numeros" << endl;
        }



        contador += 1;


    }


}
