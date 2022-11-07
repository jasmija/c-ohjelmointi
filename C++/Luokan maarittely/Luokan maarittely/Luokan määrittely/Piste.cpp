#include "StdAfx.h"
#include "Piste.h"

using namespace std;

// tämä löytyi Borlandin ympäristöstä conio.h-tiedostosta...
void gotoxy(int x,int y){ 
  HANDLE hConsole;
  COORD cursorLoc;
  std::cout.flush();
  cursorLoc.X = x;
  cursorLoc.Y = y;
  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleCursorPosition(hConsole, cursorLoc);
}

void Piste::aseta(int initX, int initY)
{
        x = initX;
        y = initY;
}
void Piste::piirra()
{
        gotoxy(x, y);
        cout << '.';
}
void Piste::siirra(int newX, int newY)
{
        peita();
        aseta(newX, newY);
        piirra();
}
void Piste::peita()
{
        gotoxy(x, y);
        cout << ' ';
}
