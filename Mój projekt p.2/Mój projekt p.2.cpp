#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include <conio.h>
#include "Klasy.h"
#include "Funkcje.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	Akcje gra;
	Mag gracz("Michał");
	Przeciwnik wrog;
	gra.walka(gracz,wrog);
}

