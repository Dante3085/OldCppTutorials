#pragma once
#include <iostream>
#include "LebewesenPROT.hpp"

/*Klassenprototyp*/

class Mensch : public Lebewesen{					//Die Klasse "Lebewesen" wurde an die Klasse "Mensch" vererbt.								
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
	void makeSound() override;						//"Override" bringt den Compiler dazu zu testen, ob die Funktion, die überschrieben werden soll überhaupt existiert. Hilfestellung für den Programmierer (Schreibfehler etc.).
};
