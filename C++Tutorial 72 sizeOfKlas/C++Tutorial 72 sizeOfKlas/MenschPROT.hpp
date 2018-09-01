#pragma once
#include <iostream>

/*Klassenprototyp*/
class Mensch {
private:
	static int anzahlMenschen;
	int alter;
	int iq;
	std::string name;
public:
	/*Konstruktorprototypen*/
	Mensch(int alter, int iq, std::string name);
	Mensch();

	/*Funktionsprototypen*/
	static int getAnzahlMenschen();
	int getAlter();
	int getIQ();
	std::string getName();
};