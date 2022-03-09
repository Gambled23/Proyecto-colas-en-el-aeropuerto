#include <iostream>
#include <cstdlib>
#include <time.h>
#include "pasajero/pasajero.hpp"
/*
1.- Comprar el Tiket almacenando los datos (Encolar)//TODO:
2.- Asignación de Asientos                          //TODO:
3.- Lista de revisión de pasajeros(Encolar)         //TODO:
4.- Abordar Avión (Apilar)                          //TODO:
5.- Bajar de Avión (Desapilar)                      //TODO:
6.- Abordar taxi (Encolar)                          //TODO:
7.- Asignar maletas
*/
pasajero maria, pedro, juan, ricardo, victor, tania, esteban, pablo;
using namespace std;
void asignarMaletas();
void asignarAsiento();
int main()
{
    asignarMaletas();
    return 0;
}
void asignarAsiento()
{
    maria.numeroMaletas = rand()%10;
    pedro.numeroMaletas = rand()%10;
    juan.numeroMaletas = rand()%10;
    tania.numeroMaletas = rand()%10;
    ricardo.numeroMaletas = rand()%10;
    victor.numeroMaletas = rand()%10;
    esteban.numeroMaletas = rand()%10;
    pablo.numeroMaletas = rand()%10;
}