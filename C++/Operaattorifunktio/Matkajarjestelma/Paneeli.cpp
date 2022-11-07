#include "stdafx.h"
using namespace std;
Leimaaja leimaaja;

Paneeli::Paneeli()
{
}

void Paneeli::naytaPaneeli(bool ok, bool ok2)
{
    if (ok == 1 && ok2 == true) {
        cout << "\n\t\t\tVihrea paneeli " << ok;
        system("color 2E");
        
    }
    else {
        cout << "\n\t\t\tPunainen paneeli " << ok;
        system("color 4E");
    }

    cin.get();
    system("color 0E");
}
    




