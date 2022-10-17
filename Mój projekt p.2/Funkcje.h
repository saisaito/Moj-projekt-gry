#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include <conio.h>
#include "Klasy.h"

using namespace std;

class Akcje
{
public:
	void walka(Gracz& gracz, Przeciwnik& wrog)
	{
		int tura=0; 
		char option;
		while (!gracz.is_death() && !wrog.is_death())
		{
			tura++;
			cout << "Co chcesz zrobiæ bohaterze?" << endl;
			gracz.show_option();
			option = _getch();
			gracz.select_option(option);
			wrog.hp_p -= gracz.op;
			cout << "Zada³eœ " << gracz.op << " obra¿eñ" << endl << "Przeciwnikowi zosta³o "
				<< wrog.hp_p << " ¿ycia" << endl;
			gracz.op = 0;
			if (wrog.is_death())
			{
				cout << "Pokona³eœ " << wrog.nazwa << endl;
				break;
			}
			wrog.decide_action(gracz);
			gracz.hp_p -= wrog.op;
			cout << "Otrzyma³eœ " << wrog.op << " obra¿eñ" << endl << "Zosta³o Ci " << gracz.hp_p
				<< "¿ycia" << endl; 
			wrog.op = 0;
			if (gracz.is_death())
			{
				cout << "Zgin¹³eœ z r¹k " << wrog.nazwa << endl;
				break;
			}
			cout << "Koniec tury: " << tura << endl;
			system("pause");
			system("cls");
		}
	}
};
