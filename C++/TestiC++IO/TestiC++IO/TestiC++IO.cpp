// TestiC++IO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "stdafx.h"

using namespace std;

int main()
{

    //char nimi[21], asuinPaikka[41];
    string nimi, asuinPaikka;
    int ika;
    cout << "\nAnna nimesi: "; // alla 3 eri tapaa lukea merkkijonoja
    //cin >> nimi; // ei hyv�ksy esim.v�lily�ntej�
    //cin.getline(nimi, 21, '\n');
    getline(cin, nimi);
    cout << "\nAnna ik�si: "; // alla 2 tapaa lukea numeerisia tietoja, getIntFromStream() on t�ll� kurssilla k�ytett�v� kustomoitu tapa
    ika = getIntFromStream(); // pyydet��n kokonaisluku
    //cin >> ika;
    //cin.get(); // kulutetaan enterin painallus
    cout << "\nAsuinpaikkasi: ";
    //cin >> asuinPaikka;
    //cin.getline(asuinPaikka, 41, '\n');
    getline(cin, asuinPaikka);
    cout << "\nNimesi: " << nimi << " ik�si: " << ika << " asuinpaikkasi: " << asuinPaikka;
    cin.get(); // enterin painallus

}


