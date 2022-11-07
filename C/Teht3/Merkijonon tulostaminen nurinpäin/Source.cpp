/*Tehtävä 3. Pyydä käyttäjältä kaksi merkkijonoa ja yhdistä ne kolmanneksi merkkijonoksi,
jonka tulostat.Esim.syöte ”luku” ja ”järjestys” tuottaisi tuloksen ”lukujärjestys”.Älä käytä
valmisfunktiota.Tarkastele, mitä tapahtuu, jos yhdistämisessä käytettävä puskuri on liian
pieni.*/

#include "stdafx.h"
#include <ctype.h>
#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[])
{

	char merkkijono1[21];
	char merkkijono2[21];
	char merkkijono3[100];
	int i = 0;
	int j = 0;

	printf("Anna jokin merkkijono: ");
	gets_s(merkkijono1);

	printf("Anna jokin merkkijono: ");
	gets_s(merkkijono2);

	while (merkkijono1[i] != '\0') {
		merkkijono3[j] = merkkijono1[i];
		i++;
		j++;
	}

	i = 0;
	while (merkkijono2[i] != '\0') {
		merkkijono3[j] = merkkijono2[i];
		i++;
		j++;
	}
	merkkijono3[j] = '\0';

	printf("\nYhdistettyna: %s", merkkijono3);
}
