// Luokan m‰‰rittely.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Piste.h"

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	Piste omaPiste; // olion luonti
    omaPiste.aseta(5,5);
    omaPiste.piirra();
    cin.get();
    omaPiste.siirra(75, 19);
    cin.get();
	return 0;
}

