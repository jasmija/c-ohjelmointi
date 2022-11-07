#pragma once
#include "stdafx.h"

using namespace std;

//class Matkakortti; // forward-m��rittely

class Leimaaja
{
private:
	string viimeisinLeimaaja;
	struct tm aikaLeima;
	Leimaustapahtuma** leimaukset;

public:
	Leimaaja();
	bool leimaa(Matkakortti& kortti, Matkatyyppi tyyppi);
	void tulostaTiedot(); // nyt Leimaaja sekottuu k�ytt�liittym��n
	void aikaLeimatesti();
};

