#pragma once
#include <iostream>
#include <string>
#include "MenschPROT.hpp"

int Mensch::anzahlMenschen = 0;

Mensch::Mensch(int alter, int iq, std::string name) : alter(alter), iq(iq), name(name) {
	anzahlMenschen++;
}

Mensch::Mensch() : alter(-1), iq(-1), name("NONAME") {

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