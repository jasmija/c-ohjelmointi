#pragma once
#include "Piste.h"

class Nelio: public Piste 
{
private:
	int size; // neliön sivun pituus
    void peita();
public:
	Nelio();
	Nelio(int initX, int initY, int initSize);
    ~Nelio();

    void piirra();
    void siirra(int initX, int initY);
};

