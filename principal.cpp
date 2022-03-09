#include <iostream>
#include <cstdlib>
#include <time.h>
#include "pasajero/pasajero.hpp"
#include "nodo.hpp"

/*
1.- Comprar el Tiket almacenando los datos (Encolar)//TODO:
2.- Asignación de Asientos                          //TODO:
3.- Lista de revisión de pasajeros(Encolar)         //TODO:
4.- Abordar Avión (Apilar)                          //TODO:
5.- Bajar de Avión (Desapilar)                      //TODO:
6.- Abordar taxi (Encolar)                          //TODO:
7.- Asignar maletas
*/
using namespace std;
void asignarMaletas();
void asignarAsiento();
int main()
{
    int opc = 1;
    do
    {
        cout << "Ingresa el nombre del cliente: \n";
        nodo *nuevo_nodo = new nodo();
        cin >> nuevo_nodo->dato.nombre;
        cout <<"Quiere agregar un nuevo cliente?\n 1) Si\n Cualquier otra opcion) No\n";
    } while (opc == 1);

    return 0;
}
void asignarAsiento()
{
}