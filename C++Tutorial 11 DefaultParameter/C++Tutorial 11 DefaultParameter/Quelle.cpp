#include <iostream>;

/*Anmerkungen: 1. Im Funktionsprototyp darf nach einem Default Parameter nicht nochmal eine Variable ohne Default Parameter kommen. "double volumen (double = 1, double, double)" funktioniert nicht. "double volumen 
 *(double, double = 1, double = 1)" funktioniert.
 *
 */

//Funktionsprototypen
double volumen(double, double, double = 1);					//Setzt den default Wert der dritten Variable der Funktion "volumen" auf 1. Wenn kein Wert eingegeben wird, dann = 1;

int main() {

	double vol = volumen(2, 5);								//Wenn ein dritter Wert eingegeben wird, benutzt die Funktion anstatt des Default Parameters diesen.
	std::cout << "Volumen: " << vol << std::endl;

	//Programmende
	system("Pause");
	return 0;
}

//Funktionen
double volumen(double breite, double höhe, double tiefe) {
	return breite * höhe * tiefe;
}
