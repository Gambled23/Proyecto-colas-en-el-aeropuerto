#include <iostream>
#include <cstdlib>
#include <time.h>
#include <Windows.h>
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
//5.- Cola de revisión de maletas(Encolar) (Tardan segun cuanto equipaje tengan)
//6.- Abordar Avión (Apilar) (Se hace al mismo momento de pedir los nombres)
7.- Bajar de Avión (Desapilar)
8.- Abordar taxi (Encolar)

*Grafico
//1.- Pedir nombres
//2.- Comprar el Ticket almacenando los datos (Encolar)
//3.- Desemcolar compra de tickets
//4.- Asignación de Asientos
//5.- Asignar numero de maletas (random)
//6.- Cola de revisión de maletas(Encolar) (Tardan segun cuanto equipaje tengan)
//7.- Abordar Avión (Apilar)
8.- Bajar de Avión (Desapilar)
9.- Abordar taxi (Encolar)
*/
using namespace std;
void pedirNombres();
void animacionMonitoEncolar();
void animacionMonitoDesencolar();
void animacionMonitoEncolarMaletas();
void animacionMonitoDesencolarMaletas();
void animacionViajeAvion();
cola *cola1 = new cola();
pila *pila1 = new pila();
int main()
{
    pedirNombres();
    animacionMonitoEncolar();
    Sleep(500);
    animacionMonitoDesencolar();
    system("cls");
    cola1->mostrarPasajeros();
    animacionMonitoEncolarMaletas();
    animacionMonitoDesencolarMaletas();
    animacionViajeAvion();
    system("PAUSE");
    return 0;
}
int numeroPasajeros = 0;
void pedirNombres()
{
    int opc = 1;
    pasajero pasajeroAux;
    do
    {
        cout << "Ingresa el nombre del cliente: \n";
        nodo *nuevo_nodo = new nodo();
        cin >> pasajeroAux.nombre;
        cola1->queue(pasajeroAux);
        pila1->push(pasajeroAux);
        numeroPasajeros++;
        cout << "Quiere agregar un nuevo cliente?\n 1) Si\n Otro) No\n";
        cin >> opc;
    } while (opc != 2);
}
void animacionMonitoEncolar()
{
    system("cls");
    cola1->mostrarCola();
    int ban = 0;
    int j = 0;
    int k = 90;
    int id = 1;

    do
    {
        for (int i = 0; i < k; i++) // El 50 es que tanto se mueve a la derecha
        {
            gotoxy(95, 8);
            cout << "------------------";
            gotoxy(95, 9);
            cout << "|";
            gotoxy(95, 11);
            cout << "|";
            gotoxy(95, 12);
            cout << "|";
            gotoxy(100, 9);
            cout << " Tickets";
            gotoxy(100, 10);
            cout << "  o";
            gotoxy(100, 11);
            cout << " /|\\";
            gotoxy(100, 12);
            cout << " / \\";
            gotoxy(i, 9);       // i es el X, y se suma 1 cada que se mueve, para que se mueva a la derecha
            cout << "  " << id; // Lo que se imprime en esa posicion de x/y
            gotoxy(i, 10);
            cout << "  o";
            gotoxy(i, 11);
            cout << " /| \\";
            if (ban == 0)
            {
                gotoxy(i, 12);
                cout << " / ";
                ban = 1;
            }
            else
            {
                gotoxy(i, 12);
                cout << "   \\";
                ban = 0;
            }
            Sleep(10); // Velocidad con la que se desplaza
        }
        j++;
        k -= 7;
        id++;
    } while (j != numeroPasajeros);
}
void animacionMonitoDesencolar()
{
    int id;
    int count = 1;
    int auxNumeroPasajeros = numeroPasajeros + 1;
    do
    {
        system("cls");
        cola1->mostrarCola();
        int j = 1;
        int k = 0;
        id = 0 + count;
        while (j < auxNumeroPasajeros)
        {
            gotoxy(95, 8);
            cout << "------------------";
            gotoxy(95, 9);
            cout << "|";
            gotoxy(95, 11);
            cout << "|";
            gotoxy(95, 12);
            cout << "|";
            gotoxy(100, 9);
            cout << " Tickets";
            gotoxy(100, 10);
            cout << "  o";
            gotoxy(100, 11);
            cout << " /|\\";
            gotoxy(100, 12);
            cout << " / \\";
            gotoxy(90 - k, 9);  // i es el X, y se suma 1 cada que se mueve, para que se mueva a la derecha
            cout << "  " << id; // Lo que se imprime en esa posicion de x/y
            gotoxy(90 - k, 10);
            cout << "  o";
            gotoxy(90 - k, 11);
            cout << " /| \\";
            gotoxy(90 - k, 12);
            cout << " / \\";
            Sleep(10); // Velocidad con la que se desplaza
            j++;
            k += 7;
            id++;
        }
        auxNumeroPasajeros--;
        count++;
        Sleep(700);
    } while (auxNumeroPasajeros > 0);
}
void animacionMonitoEncolarMaletas()
{
    system("cls");
    cola1->mostrarCola();
    int ban = 0;
    int j = 0;
    int k = 90;
    int id = 1;

    do
    {
        for (int i = 0; i < k; i++) // El 50 es que tanto se mueve a la derecha
        {
            gotoxy(96, 7);
            cout << "Revision de maletas";
            gotoxy(95, 8);
            cout << "------------------";
            gotoxy(95, 9);
            cout << "|";
            gotoxy(95, 12);
            cout << "|";
            gotoxy(100, 10);
            cout << "  o";
            gotoxy(100, 11);
            cout << " /|\\";
            gotoxy(100, 12);
            cout << " / \\";
            gotoxy(i, 9);       // i es el X, y se suma 1 cada que se mueve, para que se mueva a la derecha
            cout << "  " << id; // Lo que se imprime en esa posicion de x/y
            gotoxy(i, 10);
            cout << "  o";
            gotoxy(i - 2, 11);
            cout << " []/| \\";
            if (ban == 0)
            {
                gotoxy(i, 12);
                cout << " / ";
                ban = 1;
            }
            else
            {
                gotoxy(i, 12);
                cout << "   \\";
                ban = 0;
            }
            Sleep(10); // Velocidad con la que se desplaza
        }
        j++;
        k -= 7;
        id++;
    } while (j != numeroPasajeros);
}
void animacionMonitoDesencolarMaletas()
{
    int id;
    int count = 1;
    int numeroMaletas;
    int auxNumeroPasajeros = numeroPasajeros + 1;
    do
    {
        system("cls");
        cola1->mostrarCola();
        int j = 1;
        int k = 0;
        id = 0 + count;
        while (j < auxNumeroPasajeros)
        {
            gotoxy(96, 7);
            cout << "Revision de maletas";
            gotoxy(95, 8);
            cout << "------------------";
            gotoxy(95, 9);
            cout << "|";
            gotoxy(95, 12);
            cout << "|";
            gotoxy(100, 10);
            cout << "  o";
            gotoxy(100, 11);
            cout << " /|\\";
            gotoxy(100, 12);
            cout << " / \\";
            gotoxy(90 - k, 9);  // i es el X, y se suma 1 cada que se mueve, para que se mueva a la derecha
            cout << "  " << id; // Lo que se imprime en esa posicion de x/y
            gotoxy(90 - k, 10);
            cout << "  o";
            gotoxy(88 - k, 11);
            cout << " []/| \\";
            gotoxy(90 - k, 12);
            cout << " / \\";
            Sleep(10); // Velocidad con la que se desplaza
            j++;
            k += 7;
            id++;
        }
        auxNumeroPasajeros--;
        numeroMaletas = cola1->numeroMaletas(count);
        gotoxy(0, 3);
        cout << "Numero de maletas: " << numeroMaletas;
        count++;
        Sleep(numeroMaletas * 500);
    } while (auxNumeroPasajeros > 0);
}
void animacionViajeAvion()
{

    int i = 0;
    int x = 1;
    do
    {
        system("cls");
        gotoxy(40, 10);
        cout << "Tiempo despues";
        if (x == 1)
        {
            gotoxy(55, 10);
            cout<<".";
            x = 2;
        }
        else if (x == 2)
        {
            gotoxy(57, 10);
            cout<<".";
            x = 3;
        }
        else
        {
            gotoxy(59, 10);
            cout<<".";
            x = 1;
        }
        Sleep(200);
        i++;
    } while (i < 20);
}