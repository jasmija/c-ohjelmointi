#include "stdafx.h"

using namespace std;
Matkakortti kortti;
string nimi;
int i = 0;
#define MAX 5

typedef struct tapahtuma {
    string nimi;
    struct tm aika;

    friend ostream& operator << (ostream& os, const tapahtuma& t);
} leimausTapahtuma;

leimausTapahtuma t, * osoitin, tapahtumat[MAX];


Leimaaja::Leimaaja()
{
}

bool Leimaaja::leimaa(Matkakortti& kortti, Matkatyyppi tyyppi)
{
    bool ok = kortti.matkusta(tyyppi);
    
    if (ok) {
        if (i < MAX) {
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
        cout << "\n\t\tRahat ei riita, leimausta ei tehty!";
    }
    return ok;
}

void Leimaaja::tulostaTiedot()
{
    int koko = 2;
    for (int a = 0; a < i; a++)
    {
        cout << "\n\t\t\t" << tapahtumat[a].nimi << " " << 1900 + tapahtumat[a].aika.tm_year << "." << 1 + tapahtumat[a].aika.tm_mon << "." << tapahtumat[a].aika.tm_mday << " " << tapahtumat[a].aika.tm_hour << ":" << tapahtumat[a].aika.tm_min << ":" << tapahtumat[a].aika.tm_sec << "\n";
    }
}

/*std::ostream& operator<<(ostream& os, const tapahtuma& l) {
    return os << l.nimi;
}*/

/*ostream& operator << (ostream& out, const tapahtuma& l)
{
    return out << l.nimi;
}*/

/*ostream& operator << (ostream& os, const tapahtuma& t)    //Overloaded operator for '<<'{                                                                                    //for struct output
{
    os << t.nimi
        << t.aika.tm_year;
    return os;
}*/






