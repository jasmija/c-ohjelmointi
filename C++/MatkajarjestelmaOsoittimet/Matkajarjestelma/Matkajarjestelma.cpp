/*Tehtävä 4. Kirjoita matkakortin jäsenmuuttujat(omistajan nimi ja saldo) osoittimina ja varaa näille
tila kasasta konstruktorilla.Kirjoita Matkakortti - luokkaan vastaavasti destruktori, joka vapauttaa
jäsenmuuttujille varatun tilan oliota hävitettäessä.*/

#include "stdafx.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int v;
	string rivi;
	float raha;
	Matkakortti kortti;
	
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
		cout << "\t\tLopeta 6.\n";

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
				//Hyvää matkaa print / et pysty matkustamaan liian vähän saldoa..
				//Matkusta helsingissä / matkusta seutuliikenteessä matkusta(HELSINKI) / SEUTU
				gotoxy(20, 14);
				if (kortti.matkusta(HELSINKI))
					cout << "Hyvaa matkaa!";
				else
					cout << "Rahasi eivat riita.";
				cin.get();
			break;
			case 4:
				gotoxy(20, 14);
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
				cin.get();
			break;			
		}
	}
	while (v!=6);
	return 0;
}



