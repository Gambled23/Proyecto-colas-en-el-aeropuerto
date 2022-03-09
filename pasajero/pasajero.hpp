#ifndef PASAJERO_H
#define PASAJERO_H
#include <iostream>
#include <cstdlib>
#pragma once

using namespace std;

class pasajero
{
public:
    pasajero();
    string nombre;
    int asiento;
    int numeroMaletas;
    int aux;
    string destinoVuelo;
};

pasajero::pasajero()
{

}
#endif