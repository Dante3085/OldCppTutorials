#include <iostream>
#include "Mensch.hpp"

/*"static in Klassen": Static Variable ist in einer Klasse eine Variable, die es nur ein Mal gibt.*/

int main() {

	Mensch m(15, 100, "karl");

	std::cout << Mensch::getAnzahlMenschen() << std::endl;
	std::cout << m.getName() << std::endl;
	std::cout << m.getIQ() << std::endl;
	std::cout << m.getName() << std::endl;

	system("pause");
	return 0;
}