// IOKonversio.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// C-kielinen Levyluettelo 
//

#include "stdafx.h"

#define MAX 10

typedef struct kokoelma {
	char nimi[41];
	char tekija[31];
	int jvuosi;
} aanite;

aanite levy, * levyOsoitin, levyt[MAX];


int kysyTiedot()
{
	/* pyyt�� ��nitteiden tiedot k�ytt�j�lt�. palauttaa arvonaan sy�tettyjen lukum��r�n*/
	char rivi[81];
	int i;
	//levyOsoitin=&levy; // asetetaan osoitin osoitamaan levy-muuttujaa
	printf("kirjoita ��nilevykokoelmasi tiedot. Lopetus: \"teoksen nimi\"-kent�ss� = *\n");
	i = 0;
	do
	{
		printf("\nteoksen nimi? (40 merkki�) ");
		levyOsoitin = &levyt[i];
		gets_s(levyOsoitin->nimi, 41);

		if (levyOsoitin->nimi[0] != '*')
		{
			printf("\ntekij�? (30 merkki�) ");
			gets_s(levyOsoitin->tekija, 31);
			printf("\njulkaisuvuosi? ");
			gets_s(rivi, 81);
			while (sscanf_s(rivi, "%d", &levyOsoitin->jvuosi) != 1)
			{
				printf("\nantamasi tieto ei ollut numeerinen. Kirjoita uusi");
				gets_s(rivi, 81);
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
		printf("Et sy�tt�nyt yht�k��n levy�\n");
	}
	else
		for (i = 0; i < lkm; i++)
		{
			printf("\n%-30s %-25s %d", levyt[i].nimi, levyt[i].tekija, levyt[i].jvuosi);
		}
	printf("\n"); // rivinvaihto
	_getch();
}

void main()
{
	tulostaTiedot(kysyTiedot());
}





