#include "stdafx.h"
#include <memory>

using namespace std;

Matkakortti::Matkakortti() {
	omistajanNimi = std::make_unique<string>("");
	saldo = std::make_unique<float>(0.0);
}

//Desktruktori: vapauttaa jäsenmuuttujille varatun tilan oliota hävitettäessä
Matkakortti::~Matkakortti() {
	//cout << "\nVapautettu matkakortti " << *omistajanNimi << "\n";
	//cout << "\nVapautettu matkakortti " << *saldo << "\n";
	//delete &omistajanNimi;
	//delete &saldo;
}

void Matkakortti::alusta(string nimi)
{
	omistajanNimi = std::make_unique<string>(nimi);
	saldo = std::make_unique<float>(0.0);
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
