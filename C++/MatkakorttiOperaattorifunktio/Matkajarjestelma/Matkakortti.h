#pragma once
#include "stdafx.h"
using namespace std;

enum Matkatyyppi {HELSINKI, SEUTU};

#define HELSINKIHINTA (float)2.8 // const float HELSINKIHINTA = (float)2.8;
#define SEUTUHINTA (float)4.0

//Kaikki kyttäjälle näkyvä tulostus tulee pääohjelmasta/käyttöliittymästä

class Matkakortti
{
private:
	string omistajanNimi;
	float saldo;

public:
	void alusta(string nimi);
	void lataa(float lisays);
	bool matkusta(Matkatyyppi tyyppi);
	//void tulostaTiedot(); //ongelma: sovellus pitäisi kirjoittaa irrallaan käyttöliittymästä
	string& palautaNimi();
	float palautaSaldo();
	friend ostream& operator << (ostream& out, const Matkakortti& c);
};

