#ifndef PASAJERO_H
#define PASAJERO_H
#include <iostream>
#include <cstdlib>
#include <time.h>
#pragma once

using namespace std;

class pasajero
{
public:
    pasajero();
    string nombre;
    string destino;
    int numeroTicket;
    int numeroAsiento;
    int numeroMaletas;
    int aux;
    int id;
};

pasajero::pasajero()
{
    srand(time(NULL));
    destino = "Ciudad de Mexico";
    numeroTicket = rand() % 100;
    //numeroMaletas = 1 + rand() % (9 - 1);
}
#endif