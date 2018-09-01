#pragma once
#include "Mensch.hpp"

/*Implementierung des Klassenprototypen.*/

Mensch::Mensch(int alter_, int iq_, std::string name_) {			//"Mensch::" gibt an von wo ich das, was ich implementieren will her habe. Ähnlich wie mit Namespaces.
	alter = alter_;
	iq = iq_;
	name = name_;
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