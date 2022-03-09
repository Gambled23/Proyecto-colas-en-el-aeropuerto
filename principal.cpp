#include <iostream>
#include <cstdlib>
#include <time.h>
#include "pasajero/pasajero.hpp"
#include "nodo.hpp"
#include "cola.hpp"
#include "Pila.hpp"
#include "animacion monito.hpp"
using namespace std;

/* 
*Codigo
//1.- Pedir nombres
//2.- Comprar el Ticket almacenando los datos (Encolar)
//3.- Asignación de Asientos
//4.- Asignar numero de maletas (random)
5.- Cola de revisión de maletas(Encolar) (Tardan segun cuanto equipaje tengan)
6.- Abordar Avión (Apilar)
7.- Bajar de Avión (Desapilar)
8.- Abordar taxi (Encolar)

*Grafico
////1.- Pedir nombres
2.- Comprar el Ticket almacenando los datos (Encolar)
3.- Asignación de Asientos
4.- Asignar numero de maletas (random)
5.- Cola de revisión de maletas(Encolar) (Tardan segun cuanto equipaje tengan)
6.- Abordar Avión (Apilar)
7.- Bajar de Avión (Desapilar)
8.- Abordar taxi (Encolar)
*/
using namespace std;
void pedirNombres();
cola *cola1 = new cola();
int main()
{
    pedirNombres();
    cola1->comprarTicket();
    system("PAUSE");
    return 0;
}
void pedirNombres()
{
    int opc = 1;
    pasajero pasajerAux;
    do
    {
        cout << "Ingresa el nombre del cliente: \n";
        nodo *nuevo_nodo = new nodo();
        cin >> pasajerAux.nombre;
        cola1->queue(pasajerAux);
        cout << "Quiere agregar un nuevo cliente?\n 1) Si\n Otro) No\n";
        cin >>opc;
    } while (opc != 2);
}