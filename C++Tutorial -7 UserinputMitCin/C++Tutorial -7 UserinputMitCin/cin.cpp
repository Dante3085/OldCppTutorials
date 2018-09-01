#include <iostream>;
#include <math.h>;

//Aufgaben: 1.Benutzer soll Alter eingeben. Es soll geprüft werden, ob dieser volljährig oder nicht ist. 2. Benutzer soll einen Kreisradius eingeben. Damit soll Kreisumfang und Flächeninhalt berechnet werden.
//Kreisumfang: U = 2 * PI * r; Kreisflächeninhalt: A = PI * r^2 

/*Userinput speichern mit: "std::cin >> variablenname". "system("pause")" funktioniert nur auf Windowssystemen. Deswegen ist es sinnvoller einfach noch mal eine Eingabeaufforderung zu setzen, da diese auf allen 
 *Betriebsystemen funktioniert.
 */

namespace kreis {

	double kreisumfang(double r) {
		double kreisumfang = 2 * 3.14 * r;
		return kreisumfang;
	}

	double kreisflaecheninhalt(double r) {
		double kreisflaecheninhalt = 3.14 * pow(r, 2);
		return kreisflaecheninhalt;
	}
}

int main() {

	//Benutzer gibt in int Variable "i" sein Alter ein, aufgrund dessen dann auf Volljährigkeit bzw. Minderjährigkeit geprüft wird.
	int alter;
	std::cout << "Wert eingeben..." << std::endl;
	std::cin  >> alter;

	if (alter < 18) {
		std::cout << "Sie sind minderjährig." << std::endl;
	}
	else if (alter >= 18) {
		std::cout << "Sie sind volljährig" << std::endl;
	}

	std::cout << std::endl;

	//Benutzer gibt Kreisradius ein, mithilfe dessen der Kreisumfang und der Flächeninhalt des Kreises berechnet werden.
	double radius;
	std::cout << "Geben sie den Radius ihres Kreises ein. Mithilfe des Radius werden dann der Flaecheninhalt und der Umfang des Kreises ermittelt." << std::endl;
	std::cin  >> radius;
	std::cout << "Radius: " << radius << std::endl;
	std::cout << "Kreisflaecheninhalt " << kreis::kreisflaecheninhalt(radius) << std::endl;
	std::cout << "Kreisumfang " << kreis::kreisumfang(radius) << std::endl;

	//Programmende
	int programmende;
	//system("pause");
	std::cin >> programmende;
	return 0;
}