#include "Camion.h"
#include <string>
#include <iostream>

using namespace std;

Camion::Camion(string numero_bastidor, string modelo, string color, string concesionario)
{
    this->numero_bastidor = numero_bastidor;
    this->modelo = modelo;
    this->color = color;
    this->concesionario = concesionario;
}

Camion::~Camion()
{
    //dtor
}


void Camion::to_string(){
    cout << "Numero de bastidores " << numero_bastidor << " , Modelo " << modelo << " , Color " << color << " , Concesionario " << concesionario << endl;

}
