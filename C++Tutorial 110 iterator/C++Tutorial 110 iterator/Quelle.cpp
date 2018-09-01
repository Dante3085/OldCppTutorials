#include <iostream>
#include <list>
#include <vector>
#include <chrono>
#include <string>

/*"iterator": Klassen bzw. Objekte, die �ber alle Elemente eines Containers dr�bergehen k�nnen (zum Auslesen oder Ver�ndern...). 

Iterator kann man sich wie den Index bei einem Array vorstellen. 
Um also zu testen wie schnell ein Vektor dieselbe Aufgabe l�st, kann ich "l" einfach als Vektor deklarieren und als Iteratordeklaration verwende ich einfach "auto". Dann wird der entsprechende Iteratortyp des Containers benutzt.

*1	(Das folgende ist der Text zugeh�rig zum Verweiszeichen "*1".)
---
Ich sage also zuerst, dass ich einen "list Iterator vom Typ int" haben will (std::list<int>::iterator). Danach kommt der Name (i) und dann die Zuweisung eines Wertes (l.begin()). Iterator "i" zeigt auf das erste Element unserer list 
"l" (l.begin()). Die Schleife geht solange, bis i gleich dem letzten Element der list i ist (i != l.end()). i wird mit jedem Durchgang um "1" erh�ht (i++).
---
*1	(Hier ist das Ende des Verweises "*1".)

*2
---
Um die Werte in umgekehrter Reihenfolge auszugeben, k�nnen anstatt "begin()" und "end()", "rbegin()" und "rend()" genommen werden. Das "r" steht hier f�r "reverse".
---
*2
*/

int main() {

	std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();	//"t1" ist eine unserer Zeitpunkt Variablen.

	//std::list<int> l;
	std::vector<int> l;

	l.push_back(1202);
	l.push_back(1235);
	l.push_back(1643);
	l.push_back(967);

	//for (std::vector<int>::iterator i = l.begin(); i != l.end(); i++) {	// *1 (Sternchen + Zahl in einem Kommentar ist ein Verweis).
	for (auto i = l.begin(); i != l.end(); i++) {							//Optimal w�re es hier die Deklaration automatisch durch das Keyword "auto" zu bestimmen. So wird einfach der Containertyp, mit dem "l" deklariert wurde genommen. *2
		std::cout << *i << std::endl;										// Jetzt einfach das ausgeben, auf das der Iterator "i" zeigt (*i).
	}

	std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();	//"t2" ist eine unserer Zeitpunkt Variablen.
	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count();			//"duration" ist vom selben Typ wie t1 und t2. Sie ist die Differenz zwischen t2 und t1 bzw. die gebrauchte Zeit.

	std::cout << "duration in microseconds: " << duration << std::endl;

	system("pause");
	return 0;
}