#include "stdafx.h"
using namespace std;

Matkakortti::Matkakortti() {
	omistajanNimi = new string("");
	saldo = new float[20]();
	//cout << "Kortin tiedot: nimi " << *omistajanNimi << ", saldo " << *saldo;
}

//Desktruktori: vapauttaa jäsenmuuttujille varatun tilan oliota hävitettäessä
Matkakortti::~Matkakortti() {
	delete omistajanNimi;
	delete saldo;
}

void Matkakortti::alusta(string nimi)
{
	*omistajanNimi = nimi;
	*saldo = (float)0.0;
}

void Matkakortti::lataa(float lisays)
{
	*saldo = *saldo + lisays;
}

bool Matkakortti::matkusta(Matkatyyppi tyyppi)
{
	if (tyyppi == HELSINKI) {
		
		if (*saldo >= HELSINKIHINTA) {
			*saldo = *saldo - HELSINKIHINTA;
			return true;
		}
		else {
			*saldo = *saldo;
			return false;
		}
	}
	else {
		if (*saldo >= SEUTUHINTA) {
			*saldo = *saldo - SEUTUHINTA;
			return true;
		}
		else {
			*saldo = *saldo;
			return false;
		}
	}
}

string& Matkakortti::palautaNimi()
{
	return *omistajanNimi;
}

float Matkakortti::palautaSaldo()
{
	return *saldo;
}
