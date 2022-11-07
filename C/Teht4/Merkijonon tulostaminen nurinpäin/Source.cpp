/*Tehtävä 4. Määrittele kokonaislukutyyppinen taulukko, jonka nollaat aluksi.Lue sen
jälkeen näppäimistöltä arvot taulukon joka toiselle arvolle.Tulosta tämän jälkeen taulukon
alkioiden arvot sekä muistiosoitteet(sekä heksadesimaalimuodossa(”% p”) että 10 -
järjestelmän lukuina(” % d”)), joissa taulukon alkiot sijaitsevat.Käytä taulukon käsittelyyn osoitinta.*/
	

#include "stdafx.h"
#include <ctype.h>
#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int taulu[5] = { 0 };
	int luku = 0;
	int i = 0;

	for (i = 0; i < 5; i++){

		printf("Anna jokin kokonaisluku: ");
		scanf("%d", &luku);
		//printf("Saatu luku: %d \n", luku);
		taulu[i] = luku;
		i++;
	}

	for (i = 0; i < 5; i++)
	{
		//Alkioiden arvot
		printf("%d ", taulu[i]);
	}

	printf("\n");
	for (i = 0; i < 5; i++)
	{
		//Muistiosoitteet kymmenjärjestelmä
		printf("%d ", &taulu[i]);
	}

	printf("\n");
	for (i = 0; i < 5; i++)
	{
		//Muistiosoitteet heksadesimaali
		printf("%p ", &taulu[i]);
	}
	
}
