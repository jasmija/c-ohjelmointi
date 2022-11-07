/*Teht‰v‰ 3. Toteuta matkakortti-ohjelma, jolla voit îmatkustaaî julkisissa liikennev‰lineiss‰. Matkakorttiin liittyy ainakin seuraavat toiminnot:
1. matkakortin alustus
2. matkakortin lataus (rahaa matkustamiseen)
3. kortilla matkustaminen
Mieti mit‰ tietoja matkakortin t‰ytyy sis‰lt‰‰ toimiakseen. Toteuta matkakorttiluokka ja testaa sen
operaatiot.*/

#include "stdafx.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int v;
	string rivi;
	float raha;
	int koko;
	//Matkakortti kortti;
	Yksittaislippu lippu;
	Leimaaja leimaaja;
	Leimattavat leimattava;
	int tyyppi;

	do
	{
		system("cls");
		cout <<"----------------Matkakortin testausvalikko--------------------";
		cout <<"\n\n\n\n";
		cout << "\t\tAlusta matkakortti 1.\n";
		cout << "\t\tLataa matkakortti 2.\n";
		cout << "\t\tMatkusta Helsingissa 3.\n";
		cout << "\t\tMatkusta Seutumatka 4.\n";
		cout << "\t\tTulosta kortin tiedot 5.\n";
		cout << "\t\tLeimaa 6.\n";
		cout << "\t\tTulosta leimaukset 7.\n";
		cout << "\t\tMuuta leimaajan kokoa 8.\n";
		cout << "\t\tLopeta 9.\n";

		gotoxy(15,14);
		v=getIntFromStream();
		switch (v)
		{
			case 1:
				gotoxy(20, 14);
				cout << "Anna kortin omistajan nimi: ";
				getline(cin, rivi);
				kortti.alusta(rivi);
			break;
			case 2:
				gotoxy(20, 14);
				cout << "Anna lisattava saldo: ";
				raha = getFloatFromStream();
				kortti.lataa(raha);
			break;
			case 3:
				//Hyv‰‰ matkaa print / et pysty matkustamaan liian v‰h‰n saldoa..
				//Matkusta helsingiss‰ / matkusta seutuliikenteess‰ matkusta(HELSINKI) / SEUTU
				gotoxy(20, 14);
				if (leimattava.matkusta(HELSINKI))
					cout << "Hyvaa matkaa!";
				else
					cout << "Rahasi eivat riita.";
				cin.get();
			break;
			case 4:
				gotoxy(20, 14);
				Leimattavat *kortti = new Matkakortti;
				Leimattavat *kortti = new Yksittaislippu;
				if (kortti.matkusta(SEUTU))
					cout << "Hyvaa matkaa!";
				else
					cout << "Rahasi eivat riita.";
				cin.get();
				break;
			case 5:       
				gotoxy(20, 14);
				cout << "\tKortin tiedot: " << kortti.palautaNimi() << ", " << kortti.palautaSaldo();
				cin.get(); 
				break;
			case 6:
				gotoxy(20, 14);
				cout << "\tLeimaa kortti: ";
				cout << "\tLeimataanko seutumatka (1) vai helsingin sisainen matka (2): ";
				tyyppi = getIntFromStream();
				if (tyyppi == 1) {
					leimaaja.leimaa(kortti, SEUTU);
				}
				else {
					leimaaja.leimaa(kortti, HELSINKI);
				}
				cin.get();
				break;
			case 7:
				gotoxy(20, 14);
				cout << "\tLeimaustapahtuman tiedot: "; 
				leimaaja.tulostaTiedot();
				cin.get();
				break;
			case 8:
				gotoxy(20, 14);
				cout << "\tAnna leimaajan koko: ";
				koko = getIntFromStream();
				leimaaja.setLeimaajanKoko(koko);
				cin.get();
				break;
			case 9:       		
				cin.get();
			break;			
		}
	}
	while (v!=9);
	return 0;
}



