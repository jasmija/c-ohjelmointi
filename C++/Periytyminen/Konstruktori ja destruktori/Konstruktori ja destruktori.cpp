// Konstruktori ja destruktori.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Piste.h"
#include "Nelio.h"

#define MAX 20
#define MAXCOLS 79.0 // generoidaan kok. lukuja [0..79]
#define MAXROWS 24.0 // generoidaan kok. lukuja [0..24]
using namespace std;

/* Demonstroidaan konstruktoria ja destruktoria sekä
olion varaamista pinosta ja kasasta. */
int _tmain(int argc, _TCHAR* argv[])
{
	// yhden olion varaaminen pinosta
		{
        Nelio omaPiste; // olion luonti
        omaPiste.aseta(5,5);
        omaPiste.piirra();
        cin.get();
        omaPiste.siirra(74, 17);
        cin.get();
        //omaPiste.aseta(5,6);
		omaPiste.siirra(5,6);
        //omaPiste.piirra();
        cin.get();
        omaPiste.siirra(10,10);
        cin.get();
        }
        cout << "Olen vielä pääohjelmassa..";
        cin.get(); 

        // Oliotaulukon varaaminen pinosta
        /*Nelio pisteet[MAX];
		unsigned int rNumber;
		errno_t err;
		unsigned int x, y;
	  
        while (!_kbhit())
        {			
                for (int i=0; i<MAX; i++)
                {
						err = rand_s(&rNumber) ; // generoidaan satunnaiset x ja y...(huh)
						if (err != 0)
						{
							printf_s("The rand_s function failed!\n");
						}
						x = (unsigned int) ((double)rNumber /
                          (double) UINT_MAX *  MAXCOLS);
						err = rand_s(&rNumber) ;
						if (err != 0)
						{
							printf_s("The rand_s function failed!\n");
						}
						y = (unsigned int) ((double)rNumber /
                          (double) UINT_MAX *  MAXROWS);
                        pisteet[i].siirra(x, y);
						
                }
                _sleep(3000);
        } */

        // Oliotaulukon varaaminen kasasta
        /*Nelio *pisteet[MAX];

        for (int i=0; i<MAX; i++)
                pisteet[i] = new Nelio;
		unsigned int rNumber;
		errno_t err;
		unsigned int x, y;
		
        while (!_kbhit())
        {			
                for (int i=0; i<MAX; i++)
                {
						err = rand_s(&rNumber) ; // generoidaan satunnaiset x ja y...(huh)
						if (err != 0)
						{
							printf_s("The rand_s function failed!\n");
						}
						x = (unsigned int) ((double)rNumber /
                          (double) UINT_MAX *  MAXCOLS);
						err = rand_s(&rNumber) ;
						if (err != 0)
						{
							printf_s("The rand_s function failed!\n");
						}
						y = (unsigned int) ((double)rNumber /
                          (double) UINT_MAX *  MAXROWS);
                        pisteet[i]->siirra(x, y);
						
                }
                _sleep(3000);
        } 
        for (int i=0; i<MAX; i++)
        {
                delete pisteet[i];
        } */

        // "Tuntitehtävä"
        /*int *x = new int; // muista tilanvaraus (new)
        *x = 100;
        cout << "Muistiosoitteessa " << x << " on arvo "<< *x;
        delete x; // muista vapauttaa varaamasi tila
        cin.get(); */ 
	return 0;
}

