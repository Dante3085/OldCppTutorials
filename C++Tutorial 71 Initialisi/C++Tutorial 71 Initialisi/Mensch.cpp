#pragma once
#include "Mensch.hpp"
#include <string>

/*Klassenimplementierung 'Mensch'*/

int Mensch::anzahlMenschen = 0;

/*Konstruktorimplementierungen*/
Mensch::Mensch(int alter, int iq, std::string name) : alter(alter), iq(iq), name(name) {	//Die Initialisierungsliste verhindert auch Namenskonflikte. Alter der Klasse ist jetzt das Alter, was hier übergeben wird usw.
	anzahlMenschen++;
}

Mensch::Mensch() : alter(-1), iq(-1), name("NO_NAME") {										//"-1" steht für nicht belegt. 
	anzahlMenschen++;
}

/*Funktionsimplementierungen*/
int Mensch::getAlter() {
	return alter;
}

int Mensch::getIQ() {
	return iq;
}

std::string Mensch::getName() {
	return name;
}

int Mensch::getAnzahlMenschen() {
	return anzahlMenschen;
}