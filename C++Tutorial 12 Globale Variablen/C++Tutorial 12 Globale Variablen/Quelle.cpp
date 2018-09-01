#include <iostream>;

/*Globale Variablen sind in allen Funktionen gleichermaßen erreichbar. Es ist allerdings unratsam diese zu benutzen, da jede Funktion auf sie zugreifen können, kann auch jede Funktion Probleme durch versehentliches
 *Überschreiben eines vorherigen Wertes anrichten. Besonders schlecht, wenn mehrere Personen am selben Code arbeiten.
 *
 *"selbe"   = Eine einzige Sache ist gemeint. Mit dem selben Auto fahren (1 Auto).
 *"gleiche" = Eine identische Sache ist gemeint. Mit dem gleichen Auto fahren (mehrere Autos).
 */

//Globale Variablen
int programmende = 0;
int x = 0;

//Funktionen
void doSmth() {
	x++;
}

//Programmanfang
int main() {	
	std::cout << "Programm gestartet..." << std::endl;

	x++;
	doSmth();
	std::cout << x << std::endl;
	
	//Programmende
	//system("Pause");																										//Nur möglich auf Windows Systemen, um das Programm zu beenden. Bittet den Benutzer irgendeine Taste zu drücken, damit das Programm geschlossen wird.
	std::cout << "Geben sie irgendeine Zahl ein und bestaetigen sie mit Enter, um das Programm zu schliessen" << std::endl;
	std::cin >> programmende;																								//Funktioniert auf allen Systemen, um das Programm zu beenden.
	return 0;
}