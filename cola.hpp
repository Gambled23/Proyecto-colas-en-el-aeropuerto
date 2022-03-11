#ifndef COLA_H
#define COLA_H
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <Windows.h>
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
    void comprarTicket(); // todo
    void asignarAsientos();
    void asignarNumeroMaletas(); // todo
    void first();
    void last();
    void tamanio();
    void mostrarCola();
    void mostrarPasajeros();
    int numeroMaletas(int);
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
    ID++;
    cola::asignarAsientos();
    cola::asignarNumeroMaletas();
    cola::comprarTicket();
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
int asiento = 1;
void cola::asignarAsientos()
{
    nodo *aux = new nodo();
    aux = t;
    aux->dato.numeroAsiento = asiento;
    asiento++;
}
void cola::asignarNumeroMaletas()
{
    nodo *aux = new nodo();
    aux = t;
    srand(time(NULL));
    aux->dato.numeroMaletas = 1 + rand() % (9 - 1);
}
void cola::comprarTicket()
{
    nodo *aux = new nodo();
    aux = t;
    t->dato.numeroTicket = 1 + rand() % 1000;
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
void cola::mostrarCola()
{
    nodo *aux = new nodo();
    aux = h;
    while (aux != nullptr)
    {
        cout << aux->dato.id << "-*" << aux->dato.nombre << "*    ";
        aux = aux->siguiente;
    }
}
void cola::mostrarPasajeros()
{
    nodo *aux = new nodo();
    aux = h;
    while (aux)
    {
        cout << "\t\t*Pasajero " << aux->dato.id<<"*" << endl
             << "Nombre: " << aux->dato.nombre << endl
             << "Destino: " << aux->dato.destino << endl
             << "Numero de ticket: " << aux->dato.numeroTicket << endl
             << "Numero de asiento: " << aux->dato.numeroAsiento << endl
             << "Numero de maletas: " << aux->dato.numeroMaletas << endl
             << endl;
        aux = aux->siguiente;
        system("PAUSE");
        system("cls");
    }
}
int cola::numeroMaletas(int n)
{
    nodo *aux = new nodo();
    aux = h;
    int i = 1;
    while (i < n)
    {
        aux = aux->siguiente;
        i++;
    }
    return aux->dato.numeroMaletas;
}
#endif