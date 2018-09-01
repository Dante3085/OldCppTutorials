#include <iostream>;					//"Spitze Klammern <> ": Es wird in einem vorgegebenen Pfad gesucht, der häufig genutzte Bibliotheken enthält.
#include "meineFunktionen.h";			//"Anführungsstriche "" ": Es wird im eigenen Projekt gesucht.

/*Funktionen können nicht nur in ihrem Erstellungsumfeld einen Sinn haben bzw. hilfreich sein, sondern auch allgemein zur Lösung von Problemen beitragen. Damit Funktionen für jede Gelegenheit in der sie nützlich sein
 *können zur Verfügung stehen, können Headerdateien erstellt werden.
 *Headerdateien: Beinhalten Funktionsprototypen (meineFunktionen.h) und weitere Quelldateien mit identischen Namen (meineFunktionen.cpp) die kompletten Funktionen.
 *Hinzugefügt werden diese Dateien dann mit "#include "meineFunktionen.h"".
 *
 *"?" ist der Bedingungsoperator. Falls die Aussage "a > b" stimmt wird "a" von "a : b" zurückgegeben, ansonsten "b".
 */

int main() {

	std::cout << max(3, 8) << std::endl;

	system("pause");
	return 0;
}