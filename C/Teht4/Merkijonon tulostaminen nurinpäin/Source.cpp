/*Teht�v� 4. M��rittele kokonaislukutyyppinen taulukko, jonka nollaat aluksi.Lue sen
j�lkeen n�pp�imist�lt� arvot taulukon joka toiselle arvolle.Tulosta t�m�n j�lkeen taulukon
alkioiden arvot sek� muistiosoitteet(sek� heksadesimaalimuodossa(�% p�) ett� 10 -
j�rjestelm�n lukuina(� % d�)), joissa taulukon alkiot sijaitsevat.K�yt� taulukon k�sittelyyn osoitinta.*/
	

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
		//Muistiosoitteet kymmenj�rjestelm�
		printf("%d ", &taulu[i]);
	}

	printf("\n");
	for (i = 0; i < 5; i++)
	{
		//Muistiosoitteet heksadesimaali
		printf("%p ", &taulu[i]);
	}
	
}
