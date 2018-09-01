#pragma once
#include <iostream>
#include "LebewesenPROT.hpp"

/*Klassenprototyp*/

class Mensch : public Lebewesen{													
private:		
	static int anzahlMenschen;
	int alter;
	int iq;
	std::string name;
	int *zusatzDaten = new int[1000];
public:
	//Konstruktorprototypen
	Mensch(int alter, int iq, std::string name);
	Mensch();
	~Mensch();

	//Funktionsprototypen
	static int getAnzahlMenschen();
	int getAlter() const;												
	int getIQ() const;
	std::string getName() const;
	void makeSound();
};
