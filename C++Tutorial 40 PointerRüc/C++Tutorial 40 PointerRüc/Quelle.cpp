#include <iostream>
#include "OwnUtil.hpp"

/*Pointer R�ckgabe von Stackvariablen:
  Stackvariablen: Variablen, die innerhalb ihres Blockes erstellt wurden. Sobald sie ihren aktuellen Block ("{}") verlassen, wird ihr Speicher wieder freigegeben bzw. kann wieder beschrieben werden.

  Faustregel: NIE einen Pointer, der auf eine Stackvariable zeigt zur�ckgeben!!!!!!! (Anders gesagt: Der Pointer, der auf die Stackvariable zeigt und gleichzeitig irgendwo hin zur�ckgegeben wird, hieft die Stackvariable aus ihrem
  Block bzw. G�ltigkeitsbereich).

  Bei globalen Variablen braucht man sich in dieser Hinsicht keine Sorgen zu machen, da diese keinem Block/Stack angeh�ren.
*/

/*Funktionen*/

int *doSmth() {											//Funktion, die einen Pointer zur�ckliefert.
	int i = 4;
	return &i;
}

int main() {

	std::cout << doSmth() << std::endl;

	int *p = doSmth();

	std::cout << *p << std::endl;						//Computer holt sich zun�chst noch den Wert der in "i" liegt (4). Danach wird "cout" aufgerufen. Da die Stackvariable i nun aus ihrem Block raus ist, erkennt der Computer ihren Speicherplatz als wiederbeschreibbar an. Das hei�t cout �berschreibt "i"s Speicherplatz mit irgendetwas.
	std::cout << *p << std::endl;						//Beim n�chsten cout steht dann nat�rlich irgendein Schwachsinnswert in "i"s altem Speicherplatz.

	programmpause();
	return 0;
}