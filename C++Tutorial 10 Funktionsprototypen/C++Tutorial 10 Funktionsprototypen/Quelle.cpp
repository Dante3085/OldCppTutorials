#include <iostream>;

/*Funktionen k�nnen nicht einfach an das Ende des Quellcodes geschoben werden und dann in der dr�ber stehenden main aufgerufen werden. Das Programm geht die Zeilen von oben nach unten durch und kennt die in der main
 *aufgerufenen Funktionen somit noch nicht. Wenn Funktionen sich gegenseitig aufrufen, f�hrt dies zu Problemen, da f�hr das Programm eine der gebrauchten Funktionen noch nicht existiert.
 *
 *Funktionsprototypen beschreiben nur den Header (z.B: "int add(int a, int b)") von Funktionen. Durch Funktionsprototypen wei� das Programm, dass bestimmte Funktionen kommen k�nnen, da es den Header bereits compilen 
 *kann.
 *
 *Faustregel f�r Funktionsprototypen: Immer f�r alle Funktionen Prototypen vorbereiten, da sonst Prototypen von �hnlichen Funktionen f�r die Funktionen ohne Prototypen genommen werden und dies zu Bugs bzw Komplikationen
 *f�hren kann.
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