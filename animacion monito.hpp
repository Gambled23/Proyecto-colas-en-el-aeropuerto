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
    for (int i = 0; i < 50; i++) //El 50 es que tanto se mueve a la derecha
    {
        gotoxy(i, 9); //i es el X, y se suma 1 cada que se mueve, para que se mueva a la derecha
        cout << "  3"; //Lo que se imprime en esa posicion de x/y
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
        Sleep(100); //Velocidad con la que se desplaza
    }
    system("pause>>cls");
    return 0;
}