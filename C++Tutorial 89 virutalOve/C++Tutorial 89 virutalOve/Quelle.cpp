#include <iostream>
#include "MenschPROT.hpp"

/*"virtual und override": 
"virtual": https://de.wikipedia.org/wiki/Virtuelle_Methode; Virtuelle Methoden sind in der objektorientierten Programmierung Methoden einer Klasse, deren Einsprungadresse erst zur Laufzeit ermittelt wird.
Dieses "dynamische Binden" erm�glicht es, Klassen von Oberklassen abzuleiten und dabei Funktionen zu �berschreiben bzw. zu �berladen.

"Override": bringt den Compiler dazu zu testen, ob die Funktion, die �berschrieben werden soll �berhaupt existiert. Hilfestellung f�r den Programmierer (Schreibfehler etc.).
*/

int main() {

	Lebewesen *l = new Mensch();		//In C++ wird bei Pointern immer die Funktion aus dem Bereich genommen, auf den der Pointer zeigt. Bei einem Lebewesen Pointer ist dies die Funktion "makeSound()" in Lebewesen. Virtual sorgt daf�r, dass die Funktion des Menschen genommen wird.
	l->makeSound();

	system("pause");
	return 0;
}