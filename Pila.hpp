#ifndef PILA_H
#define PILA_H
#include <iostream>
#include <cstdlib>
#include "nodo.hpp"
#include "pasajero/pasajero.hpp"
#include "cola.hpp"

#pragma once
int id = 1;
using namespace std;

class pila
{
public:
    pila();
    nodo *h; // Puntero que apunta a inicio
    void inicializa();
    void push(pasajero);
    void pop();
    void tamanoPila();
    void topPila();
};

pila::pila()
{
    h = nullptr; // Inicia apuntando a null
}

void pila::inicializa()
{
    h = nullptr;
}

//* *OPERACIONES
void pila::push(pasajero n)
{
    nodo *nuevo_nodo = new nodo(n); // crear nuevo nodo dinamico
    nuevo_nodo->siguiente = h;
    h = nuevo_nodo;
    nuevo_nodo->dato.id = id;
    cout << "Se ha agregado con la ID: " << id << endl;
    id++;
}

void pila::pop()
{
    nodo *aux = h;
    if (aux)
    {
        cout<<"pasajero "<<h->dato.nombre<<" eliminado"<<endl;
        h = aux->siguiente;
        delete (aux);
    }
    else
    {
        cout << "Pila vacia" << endl;
    }
}
void pila::tamanoPila()
{
    nodo *aux = new nodo();
    aux = h;
    int cont = 0;
    while (aux != nullptr)
    {
        cont++;
        aux = aux->siguiente;
    }
}
void pila::topPila()
{
    cout<<"El top de la pila tiene la ID: "<<h->dato.id<<endl;
    cout<<"Nombre del pasajero: "<<h->dato.nombre<<endl;
}
#endif