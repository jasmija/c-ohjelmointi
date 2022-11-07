
#pragma once
#include "stdafx.h"
#include <list>

using namespace std;

class Leimaaja
{
private:
	string nimi;
	struct tm aikaLeima;

public:
	Leimaaja();
	bool leimaa(Matkakortti& kortti, Matkatyyppi tyyppi);
	void tulostaTiedot(); // nyt Leimaaja sekottuu käyttöliittymään
	void setLeimaajanKoko(int koko);
};












