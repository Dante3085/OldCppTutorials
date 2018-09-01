#include <iostream>
#include <string>
#include "Mensch.hpp"

/*"Initialisierungslisten": Die Initialisierungsliste zwingt Variablen während der Initialisierung in einem Konstruktor einen bestimmten Wert anzunehmen.
*
*
*/

int main() {

	std::cout << Mensch::getAnzahlMenschen() << std::endl;

	Mensch m(10, 100, "karl");

	std::cout << m.getName() << std::endl;
	std::cout << Mensch::getAnzahlMenschen() << std::endl;

	system("pause");
	return 0;
}