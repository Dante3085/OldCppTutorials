#include <iostream>
#include "OwnUtil.hpp"

/*Siehe Paint Datei in "Externe Ordner und Dateien".*/

int main() {

	int zahl = 100;								//integer "zahl" mit Wert 100 wird erstellt.
	int *pointer = &zahl;						//Pointer "pointer" wird erstellt, der auf die Speicherstelle, im Ram, der vorher deklarierten int Variable "zahl" zeigt.
	*pointer = 15;								//"pointer" wird auf 15 gesetzt. Somit auch "zahl".

	std::cout << zahl << std::endl;

	programmende();
}