
#include "stdafx.h"
using namespace std;

void Leimaustapahtuma::alusta(string nimi)
{
	struct tm aikaLeima;
	time_t now = time(0);
	localtime_s(&aikaLeima, &now);
	omistajanNimi = nimi;

}

void Leimaustapahtuma::palautaString()
{
	cout << "PalautaString Leimaustapahtuma: " << "nimi" << 1900 + aikaLeima.tm_year << "." << 1 + aikaLeima.tm_mon << "." << aikaLeima.tm_mday << " " << aikaLeima.tm_hour << ":" << aikaLeima.tm_min << ":" << aikaLeima.tm_sec;
}

