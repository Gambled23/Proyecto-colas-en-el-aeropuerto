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
    int numeroTicket;
    int numeroAsiento;
    int numeroMaletas;
    int aux;
    int id;
};

pasajero::pasajero()
{

}
#endif