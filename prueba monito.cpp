#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;
void gotoxy(int x, int y)
{
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}
int main(int argc, char **argv)
{
    system("cls");
    int ban = 0;
    int j = 0;
    int lim = 3;
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
            gotoxy(i, 9);  // i es el X, y se suma 1 cada que se mueve, para que se mueva a la derecha
            cout << "  "<<id; // Lo que se imprime en esa posicion de x/y
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
    } while (j != lim);

    system("pause>>cls");
    return 0;
}