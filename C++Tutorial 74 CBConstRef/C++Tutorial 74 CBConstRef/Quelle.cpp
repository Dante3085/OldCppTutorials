#include <iostream>
#include "MenschPROT.hpp"
#include <string>

/*"Call By Const Reference": */

void printMensch(const Mensch &m) {									//Kopiert alle Werte, die der Mensch "m" hat. Dies kann bei einem großen Objekt (z.B.: 1 Mio. Werte) unnötig lange dauern. Deshalb einfach eine Referenz mit "&" übergeben. Um nun auch zu verhindern, dass die Funktion Schindluder mit unseren Werten treibt, da durch das "&" die Speicheradressen der Werte selbst übergeben werden, können wir eine "const" Referenz übergeben.
	std::cout << "Alter: "	<< m.getAlter() << std::endl;
	std::cout << "IQ: "		<< m.getIQ()	<< std::endl;
	std::cout << "Name: "	<< m.getName()	<< std::endl;
}

int main() {

	Mensch m(18, 100, "Peter");
	printMensch(m);

	system("pause");
	return 0;
}