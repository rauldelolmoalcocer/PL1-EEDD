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


void Gestor::paso_simulacion(Zona* zonaA,Zona* zonaB,Zona* zonaC,Zona* zonaD, Fabrica* fab, int NV){

    /*
    se sacan NS automóviles de la cola (almacen de la fabrica) y se llevan a uno de los camiones (pila),
    en funcion de la zona de destino (elegida aleatoriamente).

    */
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    //int num_coches_salen;
    int contador = 0;
    int camlleno;
    string zonas[4] = {"A", "B", "C", "D"};




    cout << "Vamos a avanzar en un paso de la emulacion" << endl;
    //cout << "Dime el numero de coches que quieres que salgan de la fabrica" << endl;
    //cin >> num_coches_salen;
    Vehiculo *veh;

    while(NV > contador){

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

void Gestor::ver_almacenes(Zona *zonaA,Zona *zonaB,Zona *zonaC,Zona *zonaD){

    cout << "Vamos a imprimir por pantalla los datos de los almacenes" << endl;

    cout << "ZONA A" << endl;
    ver_cola_almacen(zonaA->get_almacen());

    cout << "CAMIONES A1" << endl;
    ver_camion(zonaA->get_cam1());
    cout << "CAMIONES A2" << endl;
    ver_camion(zonaA->get_cam2());

    //------------------------------------------------------------------------------

     cout << "ZONA B" << endl;
    ver_cola_almacen(zonaB->get_almacen());

    cout << "CAMIONES B1" << endl;
    ver_camion(zonaB->get_cam1());
    cout << "CAMIONES B2" << endl;
    ver_camion(zonaB->get_cam2());

    //------------------------------------------------------------------------------


     cout << "ZONA C" << endl;
    ver_cola_almacen(zonaC->get_almacen());

    cout << "CAMIONES C1" << endl;
    ver_camion(zonaC->get_cam1());
    cout << "CAMIONES C2" << endl;
    ver_camion(zonaC->get_cam2());

    //------------------------------------------------------------------------------

     cout << "ZONA D" << endl;
    ver_cola_almacen(zonaD->get_almacen());

    cout << "CAMIONES D1" << endl;
    ver_camion(zonaD->get_cam1());
    cout << "CAMIONES D2" << endl;
    ver_camion(zonaD->get_cam2());

    //------------------------------------------------------------------------------

}

void Gestor::ver_cola_almacen(Cola *col){

    cout << "Vamos a ver la cola del almacen" << endl;

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    Cola *aux = new Cola();

    if(!col->cola_vacia()){


       while(!col->cola_vacia()){

            //pintamos los datos del frente de la cola.
            SetConsoleTextAttribute(h, 2);
            col->get_frente_cola()->get_Vehiculo()->to_string();
            SetConsoleTextAttribute(h, 7);

            //hazme una cima de cola y insertamela en la cola auxiliar
            aux->set_nodo_cola(col->get_frente_cola()->get_Vehiculo());

            //desapilamos
            col->desencolar();

        }

        col = aux;
        delete aux;
    }else{

        SetConsoleTextAttribute(h, 4);
        cout << "ERROR:La cola esta vacia." << endl;
        SetConsoleTextAttribute(h, 7);

    }


}

void Gestor::ver_camion(Camion *cam){


    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    Pila *pila = cam->get_stack();
    Pila *aux = new Pila();
    int cont = 0;

    if(!pila->cola_vacia()){
        while(cont < cam->get_num_nodos()){

            SetConsoleTextAttribute(h, 2);
            pila->get_cima()->get_Vehiculo()->to_string();
            SetConsoleTextAttribute(h, 7);

            aux->set_nodo_a_pila(pila->get_cima()->get_Vehiculo());
            pila->desapilar_nodo();

            cont+= 1;

        }
        pila = aux;
    }else{
        SetConsoleTextAttribute(h, 4);
        cout << "ERROR:Camion vacio" << endl;
        SetConsoleTextAttribute(h, 7);

    }
}

void Gestor::borrar_registros(Zona *zonaA,Zona *zonaB,Zona *zonaC,Zona *zonaD, Fabrica *fab){

    borrar_zona(zonaA);
   // borrar_zona(zonaB);
    //borrar_zona(zonaC);
   // borrar_zona(zonaD);

    //while(fab->get_cola_fabricacion()->get_frente_cola() != NULL){

        //fab->get_cola_fabricacion()->desencolar();
    //}




}

void Gestor::borrar_zona(Zona *zona){
    cout << "He entrado" << endl;
    int cont = 0;

    while(zona->get_almacen()->get_frente_cola() != NULL){
      zona->get_almacen()->desencolar();
      cout << "Desapilado##################################################################################" << endl;
    }



    //cout << "pila vacia " << zona->get_cam1()->get_num_nodos() << endl;
    //zona->get_cam1()->get_stack()->desapilar_nodo();
   /*
    while(cont < zona->get_cam1()->get_num_nodos()){
        zona->get_cam1()->get_stack()->desapilar_nodo();
        zona->get_cam1()->decrementar_capacidad();

        cont+= 1;
    }

    cont = 0;
    while(cont < zona->get_cam2()->get_num_nodos()){
        zona->get_cam2()->get_stack()->desapilar_nodo();
        zona->get_cam2()->decrementar_capacidad();

        cont+= 1;
    }
*/

}


