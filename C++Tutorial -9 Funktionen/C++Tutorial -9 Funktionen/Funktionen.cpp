#include <iostream>;

//Funktionen sind Methoden, die z.B. in Java vorkommen sehr ähnlich. Der jetzt wichtigste Unterschied ist, dass Funktionen in C++ komplett frei und an nichts gebunden (Klasse, Objekt etc.) sind.

	//Beispiel Funktion mit "void" Rückgabewert.
	void doSomething() {
		std::cout << "Bin in einer Funktion" << std::endl;
	}

	//Beispiel Funktion mit "int" Rückgabewert.
	int add(int a, int b) {
		return a + b;
	}

	//Beispiel überladene Funktion.
	double add(double a, double b) {
		return a + b;
	}

int main() {

	doSomething();

	int ergebnis1;
	ergebnis1 = add(3, 45);
	std::cout << ergebnis1 << std::endl;

	double ergebnis2;
	ergebnis2 = add(3.5, 2);

	//Programmende
	int programmende;
	std::cout << "Zufaellige Eingabe machen und Enter druecken, um das Programm zu schliessen" << std::endl;
	std::cin  >> programmende;
	return 0;
}