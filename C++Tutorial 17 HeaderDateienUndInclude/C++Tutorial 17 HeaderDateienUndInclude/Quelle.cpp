#include <iostream>;					//"Spitze Klammern <> ": Es wird in einem vorgegebenen Pfad gesucht, der h�ufig genutzte Bibliotheken enth�lt.
#include "meineFunktionen.h";			//"Anf�hrungsstriche "" ": Es wird im eigenen Projekt gesucht.

/*Funktionen k�nnen nicht nur in ihrem Erstellungsumfeld einen Sinn haben bzw. hilfreich sein, sondern auch allgemein zur L�sung von Problemen beitragen. Damit Funktionen f�r jede Gelegenheit in der sie n�tzlich sein
 *k�nnen zur Verf�gung stehen, k�nnen Headerdateien erstellt werden.
 *Headerdateien: Beinhalten Funktionsprototypen (meineFunktionen.h) und weitere Quelldateien mit identischen Namen (meineFunktionen.cpp) die kompletten Funktionen.
 *Hinzugef�gt werden diese Dateien dann mit "#include "meineFunktionen.h"".
 *
 *"?" ist der Bedingungsoperator. Falls die Aussage "a > b" stimmt wird "a" von "a : b" zur�ckgegeben, ansonsten "b".
 */

int main() {

	std::cout << max(3, 8) << std::endl;

	system("pause");
	return 0;
}