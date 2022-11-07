#pragma once
class Piste
{
private:
        int x, y;
        char c;
        void peita();
public:
        Piste(); // konstruktori
        Piste(int initX, int initY);
        ~Piste(); // destruktori
        void aseta(int initX, int initY);
        void piirra();
        void piirra(char c);
        void siirra(int newX, int newY);
		int Pal_x();
        int Pal_y();
};

void gotoxy(int x,int y); // tätä tarvitaan myös Neliössä


