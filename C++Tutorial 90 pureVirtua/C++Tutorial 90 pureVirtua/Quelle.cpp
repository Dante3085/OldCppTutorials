#include <iostream>
#include "MenschPROT.hpp"

/*"pure Virtual" (pure virtual Methods): Pure Virtual Methods sind virtuelle Methoden, die keine wirkliche Implementation in ihrer Basisklasse haben. Sie zwingen allerdings ihre Kindklassen zu einer 
Überschreibung bzw. Definition dieser Methode. Ähnlich wie "abstract classes" in Java. Ebenfalls kann die Klasse mit den "pure virtual Methods" nicht mehr instanziiert werden, da diese durch das Einsetzen
einer pure virtual method "abstract" wurde.

Ein "= 0" hinter der Funktionsdeklaration und vor dem Semikolon deklariert eine Funktion als "pure virtual". Diese Funktion hat dann keine Implementation. Macht z.B. Sinn wenn ich sage, dass alle Arten von
Lebewesen einen Laut von sich geben, jedoch nicht gesagt werden kann, welchen Laut ein Lebewesen macht, da erst festgestellt werden muss um welches bestimmte Lebewesen (Affe, Hund ...) es sich handelt.
*/

int main() {

	//Mensch a;		//Hier verlangt der Compiler jetzt die Implementation der "pure virtual Method" "makeSound()" aus Lebewesen, falls diese nicht vorhanden ist.
	Mensch a;
	a.makeSound();

	system("pause");
	return 0;
}