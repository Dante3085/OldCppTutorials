#include <iostream>;

/*Funktionen können nicht einfach an das Ende des Quellcodes geschoben werden und dann in der drüber stehenden main aufgerufen werden. Das Programm geht die Zeilen von oben nach unten durch und kennt die in der main
 *aufgerufenen Funktionen somit noch nicht. Wenn Funktionen sich gegenseitig aufrufen, führt dies zu Problemen, da führ das Programm eine der gebrauchten Funktionen noch nicht existiert.
 *
 *Funktionsprototypen beschreiben nur den Header (z.B: "int add(int a, int b)") von Funktionen. Durch Funktionsprototypen weiß das Programm, dass bestimmte Funktionen kommen können, da es den Header bereits compilen 
 *kann.
 *
 *Faustregel für Funktionsprototypen: Immer für alle Funktionen Prototypen vorbereiten, da sonst Prototypen von ähnlichen Funktionen für die Funktionen ohne Prototypen genommen werden und dies zu Bugs bzw Komplikationen
 *führen kann.
 */

//Funktionsprototypen
int add(int a, int b);
double add(double a, double b);
void doSmth();


int main() {
	std::cout << "Programm gestartet..." << std::endl;

	add(3, 9);
	add(3.9, 2.5);
	doSmth();

	//Programmende
	system("Pause");
	return 0;
}

int add(int a, int b) {
	return a + b;
}

double add(double a, double b) {
	return a + b;
}


void doSmth() {
	std::cout << "do Something" << std::endl;
}