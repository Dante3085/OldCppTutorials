#pragma once
#include <iostream>
#include <string>
#include "MenschPROT.hpp"

int Mensch::anzahlMenschen = 0;

/*Klassenimplementierung*/

Mensch::Mensch(int alter, int iq, std::string name) : alter(alter), iq(iq), name(name) {
	anzahlMenschen++;
}

Mensch::Mensch() : alter(-1), iq(-1), name("NONAME") {
	anzahlMenschen++;
}

Mensch::~Mensch() {																//Destruktor.
	std::cout << "Bin im Destruktor und loesche 'dynInt'" << std::endl;
	delete dynInt;
	anzahlMenschen--;
}

int Mensch::getAnzahlMenschen() {
	return anzahlMenschen;
}

int Mensch::getAlter() const {						//Auch die Funktionsimplementierungen müssen auf "const" gesetzt werden.
	return alter;
}

int Mensch::getIQ() const {
	return iq;
}

std::string Mensch::getName() const {
	return name;
}