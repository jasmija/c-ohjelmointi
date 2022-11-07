#include "stdafx.h"

using namespace std;
Matkakortti kortti;
string nimi;
int i = 0;
int MAX = 5;

typedef struct tapahtuma {
    string nimi;
    struct tm aika;
} leimausTapahtuma;

leimausTapahtuma t, * osoitin, tapahtumat[5];


Leimaaja::Leimaaja()
{
}

bool Leimaaja::leimaa(Matkakortti& kortti, Matkatyyppi tyyppi)
{
    Paneeli paneeli;
    bool ok = kortti.matkusta(tyyppi);
    bool ok2 = false;
    if (ok) {
        if (i < MAX) {
            ok2 = true;
            osoitin = &tapahtumat[i];
            string nimi = kortti.palautaNimi();
            osoitin->nimi = nimi;
            time_t now = time(0);
            localtime_s(&osoitin->aika, &now);
            i++;
        }
        else {
            cout << "\n\t\t\tLeimaaja taynna, leimausta ei tallennettu...";  
        }
    }
    else {
        cout << "\n\t\t\tRahat ei riita, leimausta ei tehty!";
    }
    paneeli.naytaPaneeli(ok, ok2);
    return ok;
}

/*Leimaaja operator==(Matkakortti& kortti, Matkatyyppi tyyppi)
{
    kortti.matkusta(HELSINKI);
}*/

ostream& operator<<(ostream& os, const Leimaaja &leimaaja)
{
    leimaaja.print(os);
    return os;
}

void Leimaaja::tulostaTiedot()
{
    for (int a = 0; a < i; a++)
    {
        cout << "\n\t\t\t" << tapahtumat[a].nimi << " " << 1900 + tapahtumat[a].aika.tm_year << "." << 1 + tapahtumat[a].aika.tm_mon << "." << tapahtumat[a].aika.tm_mday << " " << tapahtumat[a].aika.tm_hour << ":" << tapahtumat[a].aika.tm_min << ":" << tapahtumat[a].aika.tm_sec << "\n";
    }
}

void Leimaaja::setLeimaajanKoko(int koko) {
     MAX = koko;
     cout << "\n\t\t\tLeimaajan koko nyt: " << MAX;
}

void Leimaaja::print(ostream& os) const{
    for (int a = 0; a < i; a++)
    {
        os << tapahtumat[a].nimi << " " << 1900 + tapahtumat[a].aika.tm_year << "." << 1 + tapahtumat[a].aika.tm_mon << "." << tapahtumat[a].aika.tm_mday << " " << tapahtumat[a].aika.tm_hour << ":" << tapahtumat[a].aika.tm_min << ":" << tapahtumat[a].aika.tm_sec << "\n";
    }
}


