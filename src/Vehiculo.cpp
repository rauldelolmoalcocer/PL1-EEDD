#include "Vehiculo.h"
#include <string>
#include <iostream>
#include <Nodo.h>

using namespace std;

Vehiculo::Vehiculo(string numero_bastidor, string modelo, string color, string concesionario)
{
    this->numero_bastidor = numero_bastidor;
    this->modelo = modelo;
    this->color = color;
    this->concesionario = concesionario;
}

Vehiculo::~Vehiculo()
{
    //dtor
}

string Vehiculo::get_numero_bastidor(){
    return(numero_bastidor);

}
string Vehiculo::get_modelo(){
    return(modelo);
}
string Vehiculo::get_color(){
    return(color);
}
string Vehiculo::get_concesionario(){
    return(concesionario);
}


void Vehiculo::to_string(){
    cout << "Numero de bastidores " << numero_bastidor << " , Modelo " << modelo << " , Color " << color << " , Concesionario " << concesionario << endl;

}
