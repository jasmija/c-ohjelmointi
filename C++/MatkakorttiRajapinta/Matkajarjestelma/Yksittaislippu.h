#pragma once
#include "stdafx.h"
using namespace std;

enum Matkatyyppi { HELSINKI, SEUTU };

#define HELSINKIHINTA (float)2.8 
#define SEUTUHINTA (float)4.0

class Yksittaislippu : public Leimattavat
{
private:
	int i;

public:
	void alusta();
	bool matkusta(Matkatyyppi tyyppi);
};

