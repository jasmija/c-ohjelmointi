#include "StdAfx.h"
#include "Piste.h"

using namespace std;

void gotoxy(int x,int y){
  HANDLE hConsole;
  COORD cursorLoc;
  std::cout.flush();
  cursorLoc.X = x;
  cursorLoc.Y = y;
  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleCursorPosition(hConsole, cursorLoc);
}

/*Piste::Piste() // konstruktori
{
		gotoxy(x, y);
        cout << "Luon pisteen näytölle.";
        x=y=1;
}*/
Piste::Piste():x(1), y(1) // konstruktori
{
        //cout << "Luon pisteen näytölle.";
        //x=y=1;
        c = '.';
		/*gotoxy(x, y);
        cout << "Pisteen konstruktori";
		cin.get();*/

}
Piste::Piste(int initX, int initY)
{
        aseta(initX, initY);
        c = '.';
		/*gotoxy(x, y);
        cout << "Pisteen konstruktori";
		cin.get();*/
}
Piste::~Piste()
{
        gotoxy(x, y);
        cout << "Hävitän itseni";
        _sleep(500);
        //cin.get();
}

void Piste::aseta(int initX, int initY)
{
        x = initX;
        y = initY;
}
void Piste::piirra()
{
        c = '.';
        gotoxy(x, y);
        cout << c;
}
void Piste::piirra(char c)
{
        gotoxy(x, y);
        this->c = c;
        cout << c;
}
void Piste::siirra(int newX, int newY)
{
        peita();
        aseta(newX, newY);
        piirra(c);
}
void Piste::peita()
{
        gotoxy(x, y);
        cout << ' ';
}
int Piste::Pal_x()
{
        return x;
}
int Piste::Pal_y()
{
        return y;
}
