#pragma once
#include "stdafx.h"
#include <memory>
using namespace std;

enum Matkatyyppi {HELSINKI, SEUTU};

#define HELSINKIHINTA (float)2.8 // const float HELSINKIHINTA = (float)2.8;
#define SEUTUHINTA (float)4.0

//Kaikki kyttäjälle näkyvä tulostus tulee pääohjelmasta/käyttöliittymästä

class Matkakortti
{
private:
	std::unique_ptr<string> omistajanNimi;
	std::unique_ptr<float> saldo;

public:
	Matkakortti();
	~Matkakortti();
	void alusta(string nimi);
	void lataa(float lisays);
	bool matkusta(Matkatyyppi tyyppi);
	string& palautaNimi();
	float palautaSaldo();
};

