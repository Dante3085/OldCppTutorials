#include <iostream>
#include <string>
#include "Mensch.hpp"

/*"Klassenprototypen": Klassen ohne Funktionsrümpfe (Rümpfe: Inhalt der Funktion).*/

int main() {

	Mensch m(15, 100, "karl");

	std::cout << m.getAlter() << std::endl;
	std::cout << m.getIQ() << std::endl;
	std::cout << m.getName() << std::endl;

	system("pause");
	/*std::cin.get();*/		//"cin.get()" kann auch verwendet werden, um die Konsole zum stoppen zu bringen, da sie lediglich eine "Enter" Eingabe des Benutzers benötigt.
	return 0;
}