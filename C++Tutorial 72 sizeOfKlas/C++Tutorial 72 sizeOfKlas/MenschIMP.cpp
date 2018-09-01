#pragma once
#include <iostream>
#include <string>
#include "MenschPROT.hpp"

int Mensch::anzahlMenschen = 0;

/*Klassenimplementierung 'Mensch'*/

/*Konstruktorimplementierungen*/
Mensch::Mensch(int alter, int iq, std::string name) : alter(alter), iq(iq), name(name) {
	anzahlMenschen++;
}

Mensch::Mensch() : alter(-1), iq(-1), name("NO_NAME") {		//Dies ist der Standardkonstruktor der Klasse Mensch. Er wird aufgerufen, wenn keine Parameterklammern bei einer Instanziierung der Klasse Mensch angegeben werden.
	anzahlMenschen++;
}

/*Funktionsimplementierungen*/
int Mensch::getAnzahlMenschen() {
	return anzahlMenschen;
}

int Mensch::getAlter() {
	return alter;
}

int Mensch::getIQ() {
	return iq;
}

std::string Mensch::getName() {
	return name;
}
