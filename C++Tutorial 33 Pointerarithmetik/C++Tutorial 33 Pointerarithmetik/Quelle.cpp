#include <iostream>
#include "OwnUtil.hpp"

/*Pointerarithmetik: Rechnen mit Pointern.
 *
 *Bedenke das Pointer immer um die Byteanzahl im Hauptspeicher springen, die für den Wert üblich ist auf den sie zeigen. Int sind gewöhnlich 4 Bytes groß. Double sind größer.
 *
 *Iteration: Prozess mehrfachen Wiederholens gleicher oder ähnlicher Handlungen zur Annäherung an eine Lösung oder ein bestimmtes Ziel.
 *
 *Pointer können voneinander abgezogen werden, um deren Abstand im Hauptspeicher zu ermitteln. Sie können aber nicht miteinander addiert werden bzw. es macht keinen Sinn, weil dort immer zufällige und sinnlose Werte rauskommen.
 *Multiplikation und Division von Pointern macht auch keinen Sinn.
 *Auf Pointer können Konstanten und Variablen drauf addiert werden.
 */

int main() {

	int zahlen[100];						//"zahlen" ist hier ein Pointer zum Anfang eines Datenblocks im Hauptspeicher. Anfangsadresse und danach 100 int Werte.
	int *anfang = zahlen;					//Zeigt auf die gleiche Stelle im RAM wie "zahlen".

	double z = 5.0;
	double *pointerz = &z;

	for (int i = 0; i < 100; i++) {
		*(anfang + i) = i;					//Dereferenzieren(Zugreifen auf das, wo der Pointer drauf zeigt) durch Stern vor Klammer.
	}

	for (int i = 0; i < 100; i++) {
		std::cout << zahlen[i] << " ";
	}

	programmende();
	return 0;
}