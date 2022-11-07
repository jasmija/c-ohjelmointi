// TestingIO.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <conio.h>

int main()
{
	char nimi[11], osoite[21], puskuri[21];
	int ika;
	printf("\nAnna nimesi:\n");
	gets_s(nimi, 11);
	//scanf_s("%s", &nimi, sizeof(nimi));
	printf("Anna ikäsi:\n");
	gets_s(puskuri, 21);
	while (sscanf_s(puskuri, "%d", &ika) != 1)// onnistuuko luku?
	{
		printf("Et syöttänyt numeerista tietoa, anna uudelleen.\n");
		gets_s(puskuri, 21);
	}
	getchar(); // kuluta enter
	printf("Anna osoitteesi:\n");
	gets_s(osoite, sizeof(osoite));

	printf("Nimesi on %s, ikäsi on %d ja osoitteesi on %s", nimi, ika, osoite);
	_getch(); // kuittaus


}
