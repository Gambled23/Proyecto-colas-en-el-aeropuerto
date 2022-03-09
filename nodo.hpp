#ifndef NODO_H
#define NODO_H
#pragma once
#include "pasajero/pasajero.hpp"
using namespace std; 

class nodo
{
public:
    pasajero dato;
    nodo *siguiente;
    nodo();
    nodo(pasajero e)
    {
        dato = e;
        siguiente = nullptr;
    };

private:
};

nodo::nodo()
{
    siguiente = nullptr;
}
#endif