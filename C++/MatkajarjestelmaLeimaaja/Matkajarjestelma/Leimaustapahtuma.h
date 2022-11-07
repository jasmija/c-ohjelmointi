
#pragma once
#include "stdafx.h"

using namespace std;

class Leimaustapahtuma
{
private:

	struct tm aikaLeima;
	string omistajanNimi;

public:
	Leimaustapahtuma();
	void palautaString();
	void alusta(string nimi);
	struct tm setAikaLeima();
};