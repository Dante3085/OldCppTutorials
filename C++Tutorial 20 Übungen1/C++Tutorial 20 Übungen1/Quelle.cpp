#include <iostream>;
#include <string>;
#include "primes.h";

void doSmth(int &a, int &b, int c) {
	a = b + c;
	b = 0;
	c = 3;
}

/* Funktionen stoppen ihren Ablauf nach dem sie ihren Rückgabewert überbracht haben.
*
*
*
*
*
*
*
*/

/*Aufgaben:
 *1.Schreibe eine Funktion "bool isPrime(int x)", welche errechnet ob x eine Primzahl ist. Lagere diese Funktion in eine eigene Datei (mit header und source!) aus und teste sie mit eigenen Zahlen in der main (Primzahlen: natürliche Zahlen, die größer als 1 sind und nur durch sich selbst und 1 teilbar sind).
 *2.Schreibe ein Programm, welches (theoretisch) alle Primzahlen bis unendlich ausgibt.
 *3.Modifiziere das Programm nun, so dass es nur die ersten 100 Primzahlen ausgibt.
 *4.Was gibt folgender Code aus (nicht einfach compilen, selbst nachdenken!):
 *
 *#include <iostream>;
 *
 *void doSmth(int &a, int &b, int c) {
 *	a = b + c;
 *	b = 0;
 *	c = 3;
 *}
 *
 *int main() {
 *
 *	int x = 3, y = 5, z = 4;
 *	doSmth(x, y, z);
 *	std::cout << x << " " << y << " " << z << std::endl;
 *	doSmth(x, y, z);
 *	std::cout << x << " " << y << " " << z << std::endl;
 *
 *	while(true);
 *
 *}
 */

int main() {
	
	std::cout << "AUFGABE1" << std::endl;
	std::cout << "Primzahlen" << std::endl;

	for (int i = 0; i < 100; i++) {							//Zählt die Parameterwerte für die Eingabe in "isPrime" von 0 bis 100 hoch.
		if (isPrime(i) == true) {							//Jeder Eingabewert, der ein true als Rückgabewert auslöst wird ausgegeben.
			std::cout << "\t" << i << std::endl;
		}
	}

	std::cout << "AUFGABE2" << std::endl;
	std::cout << "Primzahlen" << std::endl;
	int zahl = 0;
	int primesFound = 0;

	while (true && primesFound < 100) {					
			if (isPrime(zahl) == true) {
				std::cout << "\t" << zahl << std::endl;
				primesFound++;
			}
			zahl++;
	}

	std::cout << "AUFGABE3" << std::endl;
	int x = 3, y = 5, z = 4;
	doSmth(x, y, z);
	std::cout << x << " " << y << " " << z << std::endl;
	doSmth(x, y, z);
	std::cout << x << " " << y << " " << z << std::endl;
	
	while (true);

	system("pause");
	return 0;
}