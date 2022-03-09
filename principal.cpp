#include <iostream>
#include <cstdlib>
#include <time.h>
#include "pasajero/pasajero.hpp"
#include "nodo.hpp"

/*
////1.- Pedir nombres
2.- Comprar el Tiket almacenando los datos (Encolar)
3.- Asignación de Asientos
4.- Asignar numero de maletas (random)
5.- Cola de revisión de maletas(Encolar) (Tardan segun cuanto equipaje tengan)
6.- Abordar Avión (Apilar)
7.- Bajar de Avión (Desapilar)
8.- Abordar taxi (Encolar)
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
        cout << "Quiere agregar un nuevo cliente?\n 1) Si\n Cualquier otra opcion) No\n";
    } while (opc == 1);

    return 0;
}
void asignarAsiento()
{
}