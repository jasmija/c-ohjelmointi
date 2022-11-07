// ValikkojaInputOutput.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <conio.h>

// globaalit muuttujat
char nimi[21], puskuri[21];
int ika;

void kysyNimi()
{
	getchar(); // kuluta enter
	printf(" Anna nimesi: ");
	gets_s(nimi, 21);
}
void kysyIka()
{
	getchar(); // kuluta enter
	printf(" Anna ikasi: ");

	while (sscanf_s(puskuri, "%d", &ika) != 1)// onnistuuko luku?
	{
		gets_s(puskuri, 21);
		printf("Et syottanyt numeerista tietoa, yrita uudelleen.\n");
	}

	puskuri [0] = '\0';
}
void tulostaNimi()
{
	printf(" Nimi: %s ", nimi);
	_getch(); // kuittaus
}
void tulostaIka()
{
	printf(" Ika: %d ", ika);
	_getch(); // kuittaus
}


void tulostaValikko()
{
	char v;
	do
	{
		system("cls");
		printf("-----------------------Syöttö/Tulostus-testaus----------------------------------");
		printf("\n\n\n\n");
		printf("\t\t\t\tKysy nimi\t\t1");
		printf("\n\t\t\t\tKysy ika\t\t2");
		printf("\n\t\t\t\tTulosta nimi\t\t3");
		printf("\n\t\t\t\tTulosta ika\t\t4");
		printf("\n\t\t\t\tLopetus\t\t\t5");
		printf("\n\n\n\t\t\t\tValitse: ");
		v = getchar();
		switch (v) {
		case '1': 	kysyNimi();
			break;
		case '2': 	kysyIka();
			break;
		case '3':   tulostaNimi();
			break;
		case '4': 	tulostaIka();
			break;
		case '5': break;

		}
	} while (v != '5');
}

void main()
{
	tulostaValikko();
}
