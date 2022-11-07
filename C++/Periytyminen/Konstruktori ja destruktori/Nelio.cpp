#include "StdAfx.h"
#include "Nelio.h"

#include "Piste.h"

using namespace std;

Nelio::Nelio():Piste(5, 5)
{
        size = 5;
		/*cout << "Neliön konstruktori";
		cin.get();*/

}
Nelio::Nelio(int initX, int initY, int initSize):Piste(initX, initY)
{
        size = initSize;
}
Nelio::~Nelio()
{
	/*cout << "Neliön destruktori";
	cin.get();*/
}
void Nelio::piirra()
{
    int i;
    gotoxy(Pal_x(), Pal_y());
    for (i=0;i<size-1;i++)
        cout << "_";                        // ------- (ylempi)
    gotoxy(Pal_x(), Pal_y()+size);
    for (i=0;i<size;i++)
        cout << "_";                        // -------- (alempi)
    for (i=1;i<size+1;i++)
    {
        gotoxy(Pal_x()-1, Pal_y()+i);
        cout << '|';                        // |       |
        gotoxy(Pal_x()+size-1, Pal_y()+i);  // |       |
        cout << '|';
    }
}
void Nelio::siirra(int initX, int initY)
{
        peita();
        aseta(initX, initY);
        piirra();
} 
void Nelio::peita()
{
    int i;
    gotoxy(Pal_x(), Pal_y());
    for (i=0;i<size-1;i++)
        cout << " ";                        // ------- (ylempi)
    gotoxy(Pal_x(), Pal_y()+size);
    for (i=0;i<size;i++)
        cout << " ";                        // -------- (alempi)
    for (i=1;i<size+1;i++)
    {
        gotoxy(Pal_x()-1, Pal_y()+i);
        cout << ' ';                        // |       |
        gotoxy(Pal_x()+size-1, Pal_y()+i);  // |       |
        cout << ' ';
    }
}