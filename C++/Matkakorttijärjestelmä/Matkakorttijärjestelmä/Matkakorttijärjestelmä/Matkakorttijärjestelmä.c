/*Toteuta matkakortti - ohjelma, jolla voit ”matkustaa” julkisissa liikennevälineissä.
Matkakorttiin liittyy ainakin seuraavat toiminnot :
1. matkakortin alustus
2. matkakortin lataus(rahaa matkustamiseen)
3. kortilla matkustaminen
Syksy 2022 J.P.Kämäri
Matkoja on eri hintaisia : Helsingin sisäinen(hinta 2, 50 euroa) ja seutumatka(3, 80 euroa).
Kirjoita ohjelma niin, että hintamuutokset on helppo hallita.
Mieti, mitä tietoja matkakortin täytyy sisältää toimiakseen.Toteuta matkakortti
tietuerakenteena ja testaa sen operaatiot.Voit kirjoittaa kortin toteutuksen erillisenä.h
.cpp –tiedostoparina, joka liitetään #include –direktiivillä valikkototeutukseen.*/

#include "stdafx.h"

#define HELSINKIHINTA (float)3.0
#define SEUTUHINTA (float)4.80

enum Matkatyyppi { HELSINKI, SEUTU };

struct Matkakortti
{
	char omistaja[21];
	float saldo;
};

// prototyyppi vaaditaan, jos kutsu on ennen määrittelyä
void tulostaValikko();
void alustaKortti(struct Matkakortti* kortti);
void nollaaKortti(struct Matkakortti* kortti);
void lataaSaldo(struct Matkakortti* kortti);
int matkusta(struct Matkakortti* kortti, enum Matkatyyppi tyyppi);

int main(int argc, char* argv[])
{
	tulostaValikko();
	return 0;
}

void tulostaValikko()
{
	char v;
	struct Matkakortti kortti;  // kortti on struct Matkakortti -tyyppinen muuttuja
	nollaaKortti(&kortti); // huolehditaan ettei kortti näytä kamalalta, jos sitä ei alusteta

	do
	{
		system("cls");
		printf("---------------------------------Valikko------------------------------");
		printf("\n\n\n\n");
		printf("\t\t\tAlusta matkakortti\t\t1");
		printf("\n\t\t\tLataa saldoa\t\t\t2");
		printf("\n\t\t\tMatkusta Helsingissa\t\t3");
		printf("\n\t\t\tMatkusta seutuliikenteessa\t4");
		printf("\n\t\t\tTulosta kortin tiedot\t\t5");
		printf("\n\t\t\tLopetus\t\t\t\t6");
		printf("\n\t\t\tValitse:");
		printf("\n");

		v = _getch();
		switch (v)
		{
		case '1': 	alustaKortti(&kortti); // kortti välitetään aliohjelmalle muuttujaparametrina (käyttäen osoitinta)

			printf("\t\t\tMatkakortti alustetaan...");
			_getch();
			break;

		case '2':   lataaSaldo(&kortti);
					//printf("\n\t\t\tSaldo: %.2f ", kortti.saldo);

			break;
		case '3':
			if (matkusta(&kortti, HELSINKI) == 1)
			{
				printf("\n\t\t\tHyvaa matkaa!");
				printf("\n\t\t\tSaldo: %.2f ", kortti.saldo);
			}
			else
			{
				printf("\n\t\t\tRahasi eivat riita.");
				printf("\n\t\t\tSaldo: %.2f ", kortti.saldo);
			}
			_getch();
			break;
		case '4':	
			if (matkusta(&kortti, SEUTU) == 1)
			{
				printf("\n\n\t\t\tHyvaa matkaa!");
				printf("\n\t\t\tSaldo: %.2f ", kortti.saldo);
			}
			else
			{
				printf("\n\n\t\t\tRahasi eivat riita.");
				printf("\n\t\t\tSaldo: %.2f ", kortti.saldo);
			}
			_getch();
			break;
		case '5':
			printf("\n\t\t\tKortin tiedot:");
			printf("\n\t\t\tNimi: %s ", kortti.omistaja);
			printf("\n\t\t\tSaldo: %.2f ", kortti.saldo);
			_getch();
			break;

		case '6':
			break;
		}
	} while (v != '6');
}

void alustaKortti(struct Matkakortti* kortti)
{
	printf(" \n\t\t\tAnna kortin omistajan nimi: ");
	char omistaja[21];
	gets(omistaja);

	strncpy(kortti->omistaja, omistaja, 21);
	kortti->saldo = 0;
}

void nollaaKortti(struct Matkakortti* kortti)
{
	kortti->saldo = 0;
	strncpy(kortti->omistaja, "", 21);
}

void lataaSaldo(struct Matkakortti* kortti)
{
	float saldo = 0;
	float alkuSaldo = kortti->saldo;
	printf("\n\t\t\tSaldo kortilla nyt: %.2f. Paljonko kortille ladataan?: ", alkuSaldo);
	scanf_s("%f", &saldo);
	kortti->saldo = saldo + kortti->saldo;
}
// Tehtävä5: katsoo kortilta, onko saldo riittävä ja jos on, niin pienentää sitä
int matkusta(struct Matkakortti* kortti, enum Matkatyyppi tyyppi)
{
	if (tyyppi == HELSINKI) {

		if (kortti->saldo >= HELSINKIHINTA) {
			kortti->saldo = kortti->saldo - HELSINKIHINTA;
			return 1;
		}
		else {
			kortti->saldo = kortti->saldo;
			return 0;
		}
	}
	else {
		if (kortti->saldo >= SEUTUHINTA) {
			kortti->saldo = kortti->saldo - SEUTUHINTA;
			return 1;
		}
		else {
			kortti->saldo = kortti->saldo;
			return 0;
		}
	}
}