#pragma once
#include "Mensch.hpp"

/*Implementierung des Klassenprototypen.*/

int Mensch::anzahlMenschen = 0;

Mensch::Mensch(int alter_, int iq_, std::string name_) {
	alter = alter_;
	iq = iq_;
	name = name_;
	anzahlMenschen++;
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

int Mensch::getAnzahlMenschen() {
	return anzahlMenschen;
}