

#include "stdafx.h"
#include <ctype.h>
#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[])
{
	char merkki;
	char merkkijono[21];
	int i = 0;

	printf("Anna jokin merkkijono: ");
	gets_s(merkkijono);

	while (merkkijono[i]) {
		merkki = merkkijono[i];
		putchar(toupper(merkki));
		i++;
	}
}
