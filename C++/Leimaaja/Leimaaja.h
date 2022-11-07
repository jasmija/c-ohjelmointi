#pragma once
#include "stdafx.h"

using namespace std;

//class Matkakortti; // forward-määrittely

class Leimaaja
{
private:
	string viimeisinLeimaaja;
	struct tm aikaLeima;
	Leimaustapahtuma** leimaukset;

public:
	Leimaaja();
	bool leimaa(Matkakortti& kortti, Matkatyyppi tyyppi);
	void tulostaTiedot(); // nyt Leimaaja sekottuu käyttöliittymään
	void aikaLeimatesti();
};

