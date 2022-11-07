// Merkijonon tulostaminen nurinpäin.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	char merkkiJono[21];
	char *loppu, *alku;
	char apu;
	
	printf("Anna jokin merkkijono: ");
	gets_s(merkkiJono);

	printf("Tulostan merkkijonon nurinpain: \n");

	alku = merkkiJono;
	loppu = merkkiJono;
	printf("Alku ennen muutoksia: %c %d\n", *alku, alku);
	

	for (loppu = merkkiJono; *loppu != '\0'; loppu++); // kelataan loppuun
	loppu--; // osoitetaan jo loppumerkkiä
	printf("Loppu ennen muutoksia: %c %d \n\n", *loppu, loppu);

	/*for (; loppu != merkkiJono; loppu--) // tulostetaan
		printf("%c ",*loppu);
	printf("%c ", *loppu);*/ // 1 merkki erikseen
	//return 0;

	while (alku < loppu) 
	{
		apu = *alku;

		*alku = *loppu;
		printf("Alku: %d %c\n", alku, *alku);
		*loppu = apu;
		printf("Loppu: %d %c\n", loppu, *loppu);

		printf("\n %c\n", *alku);

		alku++;
		loppu--;
		
	}

	printf("%s", merkkiJono);

}