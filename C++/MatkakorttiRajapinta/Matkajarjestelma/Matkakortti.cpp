#include "stdafx.h"
using namespace std;
float saldo = 0;

void Matkakortti::alusta(string nimi)
{
	omistajanNimi = nimi;
	saldo = (float)0.0;
}

void Matkakortti::lataa(float lisays)
{
	saldo = saldo + lisays;
}

bool matkusta(Matkatyyppi tyyppi)
{
	// liian pienell� saldolla ei saa matkustaa
	// true jos matka onnistuu ja false jos ep�onnistuu
	//float saldoa = saldo - tyyppi;
	//cout << "Saldo - tyyppi: " << saldo << "-" << tyyppi << " = " << saldoa << "\n";'
	cout << "Saldo " << saldo;

	if (tyyppi == HELSINKI) {
		
		if (saldo >= HELSINKIHINTA) {
			saldo = saldo - HELSINKIHINTA;
			return true;
		}
		else {
			saldo = saldo;
			return false;
		}
	}
	else {
		if (saldo >= SEUTUHINTA) {
			saldo = saldo - SEUTUHINTA;
			return true;
		}
		else {
			saldo = saldo;
			return false;
		}
	}
}

string& Matkakortti::palautaNimi()
{
	return omistajanNimi;
}

float Matkakortti::palautaSaldo()
{
	return saldo;
}

