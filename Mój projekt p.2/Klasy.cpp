//#include <iostream>
//#include <stdlib.h>
//#include <cstdio>
//#include <conio.h>
//#include "Klasy.h"
//
//using namespace std;
//
//
//bool Postac::is_death()		
//	{
//		return hp_p <= 0;
//	}
//
//class Gracz : public Postac
//{
//public:
//	virtual void show_option();
//	virtual void select_option(char option);
//};
//class Mag : public Gracz
//{
//public:
//	Mag(string imie)
//	{
//		nazwa = imie;
//		hp = 100;
//		hp_p = hp;
//		mana = 150;
//		mana_p = mana;
//		fatak = 10;
//		matak = 20;
//		ap = 20;
//		ad = 5;
//		luck = 1;
//		r = luck * 10 + rand() % 100 + 1;
//		op = 0;
//		pan = 2;
//	}
//	void show_option()
//	{
//		cout << "1. Atak" << endl << "2. Magiczny atak" << endl;
//	}
//
//	void select_option(char option)
//	{
//		switch (option)
//		{
//		case '1':
//			cout << "Bohater " << nazwa << " wykonuje atak fizyczny" << endl;
//			this->atakF();
//			break;
//		case '2':
//
//			cout << "Bohater " << nazwa << " wykonuje kule ognia" << endl;
//			this->k_ognia();
//			break;
//		default:
//			cout << "Tracisz ture" << endl;
//			break;
//		}
//	}
//
//	void k_ognia()					// Umiejêtnoœæ kuli ognia wykorzystywana w walce 
//	{
//		if (r <= 25 && r >= 1)
//		{
//			op = 0;
//			cout << "Nawet nie trafiles przeciwnika: " << op << endl;
//		}
//		else if (r <= 75 && r >= 26)
//		{
//			op = matak + ap * 1, 5;
//			cout << "Zadales tyle obrazen: " << op << endl;
//		}
//		else if (r <= 100 && r >= 76)
//		{
//			op = matak + ap * 3;
//			cout << "Potezne krytyczne uderzenie: " << op << endl;
//		}
//		else if (r >= 100)
//		{
//			op = (matak + ap * 2) * 3;
//			cout << "Turbo potezne krytyczne uderzenie: " << op << endl;
//		}
//	}
//
//	void piorun()					// Umiejêtnoœæ piorunów palpatina wykorzystywana w walce, dodaje magowi ¿ycie
//	{
//		if (r <= 25 && r >= 1)
//		{
//			op = 0;
//			cout << "Nawet nie trafiles przeciwnika: " << op << endl;
//		}
//		else if (r <= 75 && r >= 26)
//		{
//			op = matak + ap;
//			hp_p += 1 / 2 * op;
//			cout << "Zadales tyle obrazen: " << op << endl;
//			cout << "Uleczyles siê o: " << 1 / 2 * op << ". Masz aktualnie: " << hp_p << " zdrowia" << endl;
//		}
//		else if (r <= 100 && r >= 76)
//		{
//			op = matak + ap * 1, 2;
//			hp_p += op;
//			cout << "Potezne krytyczne uderzenie: " << op << endl;
//			cout << "Uleczyles siê o: " << op << ". Masz aktualnie: " << hp_p << " zdrowia" << endl;
//		}
//		else if (r >= 100)
//		{
//			op = matak + ap * 1, 5;
//			hp_p += op;
//			cout << "Turbo potezne krytyczne uderzenie: " << op << endl;
//			cout << "Uleczyles siê o: " << op << ". Masz aktualnie: " << hp_p << " zdrowia" << endl;
//		}
//	}
//
//	int atakF()					// Zwyk³y atak fizyczny
//	{
//		if (r <= 25 && r >= 1)
//		{
//			op = 0;
//			cout << "Nawet nie trafiles przeciwnika: " << op << endl;
//		}
//		else if (r <= 75 && r >= 26)
//		{
//			op = fatak + ad * 2;
//			cout << "Zadales tyle obrazen: " << op << endl;
//		}
//		else if (r <= 100 && r >= 76)
//		{
//			op = (fatak + ad * 2) * 2;
//			cout << "Potezne krytyczne uderzenie: " << op << endl;
//		}
//		else if (r >= 100)
//		{
//			op = (fatak + ad * 2) * 3.5;
//			cout << "Turbo potezne krytyczne uderzenie: " << op << endl;
//		}
//		return op;
//	}
//};
//
///*class Wojownik
//{
//public:
//	string nazwa;
//	int hp = 200;
//	int hp_p = hp;
//	int mana = 50;
//	int mana_p = mana;
//	int fatak = 20;
//	int matak = 10;
//	int ap = 5;
//	int ad = 20;
//	int luck = 1;
//	int r = luck * 10 + rand() % 100 + 1;
//	int op = 0;
//	int pan = 3;
//
//	int atakF()					// Zwyk³y atak fizyczny
//	{
//		if (r <= 25 && r >= 1)
//		{
//			op = 0;
//			cout << "Nawet nie trafiles przeciwnika: " << op << endl;
//		}
//		else if (r <= 75 && r >= 26)
//		{
//			op = fatak + ad * 2;
//			cout << "Zadales tyle obrazen: " << op << endl;
//		}
//		else if (r <= 100 && r >= 76)
//		{
//			op = (fatak + ad * 2) * 2;
//			cout << "Potezne krytyczne uderzenie: " << op << endl;
//		}
//		else if (r >= 100)
//		{
//			op = (fatak + ad * 2) * 3.5;
//			cout << "Turbo potezne krytyczne uderzenie: " << op << endl;
//		}
//		return op;
//	}
//
//	void whirlwind()				// Wir miecza
//	{
//
//	}
//
//	void rage()						// Buff który zabiera Ci jednorazowo zdrowie ale zwiêksza obra¿enia
//	{
//
//	}
//}; */
//
//class Przeciwnik : public Mag
//{
//public:
//	Przeciwnik() :Mag("Goblin")
//	{
//
//	}
//	void decide_action(Gracz gracz)
//	{
//		cout << "Przeciwnik atakuje fizycznie" << endl;
//		this->atakF();
//	}
//};