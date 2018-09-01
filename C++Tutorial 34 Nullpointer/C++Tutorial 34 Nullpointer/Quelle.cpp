#include <iostream>
#include "OwnUtil.hpp"

/*Nullpointer: Der Pointer hat einen bestimmten Wert, der ihn dazu bringt nirgendwo im Arbeitsspeicher hinzuzeigen. 3 Möglichkeiten (1. und 2. sind veraltet.):
 *
 *1. pointer = 0;
 *
 *2. pointer = NULL;	Compiler sieht dies als Integer 0 Wert. Kann Probleme mit Funktionen geben, die Pointer erwarten. "NULL" ist eben keine Variable mit Speicherstelle, sondern nur eine Int 0.
 *
 *3.pointer = nullptr;
 */

/*Funktionsprototypen*/
void doSmth(int);
void doSmth(int *);

int main() {

	int zahl = 100;
	int *pointer = &zahl;

	//do stuff

	pointer = 0;									//Es ist in C++ festgelegt, dass eine Variable niemals den Speicherort 0 haben wird. Deswegen zeigt der Pointer somit niergendswo hin.
	pointer = NULL;									//Ist defined mit "#define NULL 0". Ist also im Endeffekt nur eine Frage der Lesbarkeit.
	pointer = nullptr;								//"nullptr" ist ein für Nullpointer vorgesehenes Keyword.

	doSmth(NULL);									//Ruft Int Version von "doSmth()" auf, da NULL nur "0" für Kompiler ist.
	doSmth(nullptr);								//Vermeidet Verwirrung mit NULL. "nullptr" sorgt dafür, dass Pointer wirklich ohne Missverständnisse ins Leere zeigt.

	if (pointer == 0) {								//Wird in altem Code benutzt, um festzustellen, ob Pointer tatsächlich Nullpointer ist. Heutzutage lieber "pointer == nullptr".
		std::cout << "Ist gleich!" << std::endl;
	}

	programmende();
	return 0;
}

void doSmth(int a) {
	std::cout << "Int Version!" << std::endl;
}

void doSmth(int *a) {
	std::cout << "Pointer Version!" << std::endl;
}