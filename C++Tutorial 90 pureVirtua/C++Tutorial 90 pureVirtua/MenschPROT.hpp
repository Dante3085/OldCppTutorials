#pragma once
#include <iostream>
#include "LebewesenPROT.hpp"

/*Klassenprototyp*/

class Mensch : public Lebewesen{													
private:
	int *dynInt = new int;
	static int anzahlMenschen;
	int alter;
	int iq;
	std::string name;
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
