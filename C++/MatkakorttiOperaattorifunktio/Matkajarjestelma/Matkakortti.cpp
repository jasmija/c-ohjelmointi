#include "stdafx.h"
using namespace std;

void Matkakortti::alusta(string nimi)
{
	omistajanNimi = nimi;
	saldo = (float)0.0;
}

void Matkakortti::lataa(float lisays)
{
	saldo = saldo + lisays;
}

bool Matkakortti::matkusta(Matkatyyppi tyyppi)
{
	// liian pienellä saldolla ei saa matkustaa
	// true jos matka onnistuu ja false jos epäonnistuu
	//float saldoa = saldo - tyyppi;
	//cout << "Saldo - tyyppi: " << saldo << "-" << tyyppi << " = " << saldoa << "\n";
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

ostream& operator << (ostream& out, const Matkakortti& m)
{
	return out << "\n\t\t\tOperaattorifunktion avulla tulostus: " << m.omistajanNimi << ", " << m.saldo;
}
