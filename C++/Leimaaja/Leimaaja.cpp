#include "stdafx.h"

using namespace std;

Leimaaja::Leimaaja()
{
}

bool Leimaaja::leimaa(Matkakortti& kortti, Matkatyyppi tyyppi)
{
    bool ok = kortti.matkusta(tyyppi);
    if (ok) {
        Leimaustapahtuma* uusiLeimaus;
    }
    return ok;
}

void Leimaaja::tulostaTiedot()
{
}

void Leimaaja::aikaLeimatesti()
{
    time_t      sekunnit;

    // Get time in seconds
    time(&sekunnit);

    // Convert time to struct tm form 
    localtime_s(&aikaLeima, &sekunnit);
    gotoxy(35, 15);
    // Print local time as a string.
    cout << aikaLeima.tm_hour << ":" << aikaLeima.tm_min << ":" << aikaLeima.tm_sec; // C4996
    cout << "\n";
}
