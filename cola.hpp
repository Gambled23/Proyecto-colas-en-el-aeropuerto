#ifndef COLA_H
#define COLA_H
#include <iostream>
#include <cstdlib>
#include "nodo.hpp"
#include "pasajero/pasajero.hpp"
#pragma once

using namespace std;
int ID = 1;
class cola
{
public:
    nodo *h;
    nodo *t;
    cola();
    void inicializa();
    void queue(pasajero);
    void dequeue();
    void first();
    void last();
    void tamanio();
};

cola::cola()
{
    h = nullptr;
    t = nullptr;
}
void cola::inicializa()
{
    h = nullptr;
    t = nullptr;
}
void cola::queue(pasajero n)
{
    nodo *nuevo_nodo = new nodo(n);
    if (h == nullptr) // si es el 1er elemento
    {
        h = nuevo_nodo;
        t = nuevo_nodo;
    }
    else
    {
        t->siguiente = nuevo_nodo;
        t = nuevo_nodo;
    }
    nuevo_nodo->dato.id = ID;
    cout << "Se ha agregado con la ID '" << ID << "'" << endl;
    ID++;
}
void cola::dequeue()
{
    nodo *aux = new nodo();
    aux = h;
    if (h == nullptr) // Si no hay elementos
    {
        cout << "Cola vacia\n";
    }
    else if (h == t) // Si es el unico elemento
    {
        delete (aux);
        h = nullptr;
        t = nullptr;
    }
    else // Si no es el unico elemento
    {
        h = h->siguiente;
        delete (aux);
    }
}
void cola::first()
{
    if (h)
    {
        cout << "El primer elemento de la cola tiene la ID: " << h->dato.id << endl;
        cout << "Nombre del pasajero: " << h->dato.nombre << endl;
    }
    else
    {
        cout << "Pila vacia\n";
    }
}
void cola::last()
{
    if (h)
    {
        cout << "El ultimo elemento de la cola tiene la ID: " << t->dato.id << endl;
        cout << "Nombre del pasajero: " << t->dato.nombre << endl;
    }
    else
    {
        cout << "Pila vacia\n";
    }
}
void cola::tamanio()
{
    nodo *aux = new nodo();
    aux = h;
    int cont = 0;
    while (aux != nullptr)
    {
        cont++;
        aux = aux->siguiente;
    }
    cout << "La lista tiene " << cont << " elementos" << endl;
}
#endif