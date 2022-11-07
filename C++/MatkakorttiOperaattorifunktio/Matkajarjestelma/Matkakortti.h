#pragma once
#include "stdafx.h"
using namespace std;

enum Matkatyyppi {HELSINKI, SEUTU};

#define HELSINKIHINTA (float)2.8 // const float HELSINKIHINTA = (float)2.8;
#define SEUTUHINTA (float)4.0

//Kaikki kytt�j�lle n�kyv� tulostus tulee p��ohjelmasta/k�ytt�liittym�st�

class Matkakortti
{
private:
	string omistajanNimi;
	float saldo;

public:
	void alusta(string nimi);
	void lataa(float lisays);
	bool matkusta(Matkatyyppi tyyppi);
	//void tulostaTiedot(); //ongelma: sovellus pit�isi kirjoittaa irrallaan k�ytt�liittym�st�
	string& palautaNimi();
	float palautaSaldo();
	friend ostream& operator << (ostream& out, const Matkakortti& c);
};

