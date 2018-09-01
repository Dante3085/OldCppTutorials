#include <iostream>
#include "OwnUtil.hpp"

/*Pointer Rückgabe von Stackvariablen:
  Stackvariablen: Variablen, die innerhalb ihres Blockes erstellt wurden. Sobald sie ihren aktuellen Block ("{}") verlassen, wird ihr Speicher wieder freigegeben bzw. kann wieder beschrieben werden.

  Faustregel: NIE einen Pointer, der auf eine Stackvariable zeigt zurückgeben!!!!!!! (Anders gesagt: Der Pointer, der auf die Stackvariable zeigt und gleichzeitig irgendwo hin zurückgegeben wird, hieft die Stackvariable aus ihrem
  Block bzw. Gültigkeitsbereich).

  Bei globalen Variablen braucht man sich in dieser Hinsicht keine Sorgen zu machen, da diese keinem Block/Stack angehören.
*/

/*Funktionen*/

int *doSmth() {											//Funktion, die einen Pointer zurückliefert.
	int i = 4;
	return &i;
}

int main() {

	std::cout << doSmth() << std::endl;

	int *p = doSmth();

	std::cout << *p << std::endl;						//Computer holt sich zunächst noch den Wert der in "i" liegt (4). Danach wird "cout" aufgerufen. Da die Stackvariable i nun aus ihrem Block raus ist, erkennt der Computer ihren Speicherplatz als wiederbeschreibbar an. Das heißt cout überschreibt "i"s Speicherplatz mit irgendetwas.
	std::cout << *p << std::endl;						//Beim nächsten cout steht dann natürlich irgendein Schwachsinnswert in "i"s altem Speicherplatz.

	programmpause();
	return 0;
}