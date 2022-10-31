#include "FabricaService.h"
#include <iostream>
#include "Vehiculo.h"
#include <string>
#include "Cola.h"
#include <Fabrica.h>
#include <stdlib.h>
#include <ctime>
#include<stdio.h>



using namespace std;

int FabricaService::GernerateRandomNumber(){
    /*
    Funcion que se encarga de generar aleatoriamente numeros.
    */
    return(rand()%26-97);
}

void FabricaService::GenerateNumeroBastidor(){
    // ADA-12345
    srand(time(NULL));
    char random_char;
    string tmp_var = "";
    for(int i = 0; i < 8; i++){
        if(i < 3){
            random_char = GernerateRandomNumber();
            tmp_var.push_back(random_char);
        }else{

        }

    }
    cout << "numero de bastidor " << tmp_var << endl;



}

void FabricaService::GenerateRandomVehiculos(Fabrica *fab){
    /*
        Funcion encargada de la generacion aleatoria de coches y su insercion en la cola de
        vehiculos fabricados.
    */

    srand(time(NULL));

    for(int i= 0; i < 10; i++){

        cout << GernerateRandomNumber() << endl;
    }

    //Numero de bastidor





}
