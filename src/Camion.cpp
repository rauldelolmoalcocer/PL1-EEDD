#include "Camion.h"
#include <string>
#include <iostream>
#include "Pila.h"
using namespace std;

Camion::Camion(string zona_asig)
{
    this->zona_asig;
    this->stack_ = new Pila();
    this->capacidad = 10;
    this->num_nodos = 0;
}

Camion::~Camion()
{
    //dtor
}

string Camion::get_zona_asig(){
    return(zona_asig);

}
Pila* Camion::get_stack(){
    return(stack_);
    }
int Camion::get_capacidad(){
    return(capacidad);

}

int Camion::get_num_nodos(){
    return(num_nodos);
}

void Camion::incremetar_capacidad(){
    this->capacidad = capacidad + 1;

}
bool Camion::overflow(){
    return(capacidad == num_nodos ? true : false);
}
void Camion::to_string()
{
    cout << "" << endl;

}
