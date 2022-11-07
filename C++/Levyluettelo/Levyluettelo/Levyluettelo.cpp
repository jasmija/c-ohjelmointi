/*Muuta materiaalit-alueen Levyluettelo.c c-ohjelmaesimerkkiä niin, että tiedot luetaan ja
tulostetaan käyttäen cin- ja cout-olioita.*/

#include <iostream>

// C-kielinen Levyluettelo 

#include <stdio.h>
#include <tchar.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

#define MAX 10

typedef struct kokoelma {
	char nimi[41];
	char tekija[31];
	int jvuosi;
} aanite;

aanite levy, * levyOsoitin, levyt[MAX];

int kysyTiedot()
{
	char rivi[81];
	int i;

	//levyOsoitin=&levy; // asetetaan osoitin osoitamaan levy-muuttujaa
	printf("kirjoita aanilevykokoelmasi tiedot. Lopetus: \"teoksen nimi\"-kentassa = *\n");
	i = 0;
	do
	{
		cout << "\nteoksen nimi? (40 merkkia) ";
		levyOsoitin = &levyt[i];
		cin >> levyOsoitin->nimi;
		//gets_s(levyOsoitin->nimi, 41);

		if (levyOsoitin->nimi[0] != '*')
		{
			cout << "\ntekija? (30 merkkia) ";
			//gets_s(levyOsoitin->tekija, 31);
			cin >> levyOsoitin->tekija;
			cout << "\njulkaisuvuosi? ";
			//gets_s(rivi, 81);
			cin >> rivi;
			while (sscanf_s(rivi, "%d", &levyOsoitin->jvuosi) != 1)
			{
				cout << "\nantamasi tieto ei ollut numeerinen. Kirjoita uusi";
				//gets_s(rivi, 81);
				cin >> rivi;
			}
			i++;
		}
	} while ((levyOsoitin->nimi[0] != '*') && (i < MAX));
	return(i);
}

void tulostaTiedot(int lkm)
/* tulostetaan levyt */
{
	int i = 0;
	system("cls");
	if (lkm == 0)
	{
		cout << "Et syottanyt yhtakaan levy\n";
	}
	else
		for (i = 0; i < lkm; i++)
		{
			cout << levyt[i].nimi << " " << levyt[i].tekija << " " << levyt[i].jvuosi << "\n";
		}
	_getch();
}

void main()
{
	tulostaTiedot(kysyTiedot());
}
