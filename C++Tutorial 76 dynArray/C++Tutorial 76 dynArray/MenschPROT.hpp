#pragma once
#include <iostream>

/*Klassenprototyp*/

class Mensch {
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
	int getAlter() const;												//Um eine Funktion const zu deklarieren, schreibt man const hinter die Parameterklammern.
	int getIQ() const;
	std::string getName() const;
};
