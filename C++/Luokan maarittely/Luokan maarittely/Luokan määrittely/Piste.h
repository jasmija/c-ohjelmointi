#pragma once
class Piste
{
private:
        int x, y;
        void peita();
public:
        void aseta(int initX, int initY);
        void piirra();
        void siirra(int newX, int newY);
};


