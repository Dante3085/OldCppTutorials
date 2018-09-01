#include <iostream>
#include <string>
#include <cmath>

/*Übungen#2 Pointer: 
 1. Es gab schonmal die Aufgabe eine "swap" Funktion zu schreiben, die 2 int Werte erwartet und ihre Werte mittels Referenzen tauscht. Schreibe diese Funktion nun mit Pointern.

 2. Schreibe eine Funktion, die ein int Array und einen Pointer auf das letzte Element dieses Arrays erwartet, und dann alle Elemente des Arrays mit Leerzeichen getrennt ausgibt.

 3. Schreibe 4 Funktionen, welche 2 floats erwarten und ein float zurückliefern. Die Funktionen sollen die 4 Grundrechenarten "+, -, *, /" beherrschen. In der Mainfunktion soll es einen Funktionspointer geben, der nach Wahl des Benutzers
 auf eine der 4 Funktionen zeigt, dann noch nach 2 float Werten fragt und mit diesen Werten das Ergebnis der gepointeten Funktion ausrechnet.

 4. Schreibe eine Funktion "rootQuad", welche die beiden Lösungen der Mitternachtsformel ausrechnet. Als Argumente sind 3 float Werte zu übergeben, die jeweils a, b und c repräsentieren sowie 2 Pointer in denen die Lösungen gespeichert werden.
 Die Funktion soll außerdem bool zurückliefern. True, falls Lösungen im Reelen gefunden wurden, sonst false.

 "std::cerr << "...";" ist für Fehlermeldungen gedacht.
 */

/*Funktionsheader*/
void swapPtr(int *, int *);
void printArr(int [], int *);
float calc(float, std::string, float);
bool pqNull(float , float, float, float *, float *);

int main() {

	//Aufgabe 1------------------------------------------------------
	std::cout << "Aufgabe 1" << std::endl;
	int a = 323;
	int b = 34325;
	std::cout << a << " " << b << std::endl;
	swapPtr(&a, &b);
	std::cout << a << " " << b << std::endl;
	//---------------------------------------------------------------

	std::cout << std::endl;
	std::cout << std::endl;

	//Aufgabe 2------------------------------------------------------
	std::cout << "Aufgabe 2" << std::endl;
	int arr[] = { 2, 5, 2, 10, 6, 3, 9 };
	printArr(arr, arr + 6);
	//---------------------------------------------------------------

	std::cout << std::endl;
	std::cout << std::endl;

	//Aufgabe 3------------------------------------------------------
	std::cout << "Aufgabe 3" << std::endl;

	float(*func)(float, std::string, float);	//Funktionspointer
	func = calc;

	float zahl1 = 0;
	float zahl2 = 0;
	std::string rechenart = " ";
	std::string schließeCalc = " ";

	std::cout << "Geben sie ihre Rechenoperation wie folgt ein:\nZahl->Enter->Rechenoperator->Enter->Zahl->Enter" << std::endl;
	std::cout << "Wenn sie den Rechner beenden wollen, geben sie zwischen Rechnungen (vor bzw. nach einer Rechnung) 'endCalc' ein. Ansonsten 'contCalc'." << std::endl;

	while (schließeCalc != "endCalc") {

		std::cin >> schließeCalc;

		if (schließeCalc != "endCalc") {
			std::cin >> zahl1;
			std::cin >> rechenart;
			std::cin >> zahl2;

			float erg = calc(zahl1, rechenart, zahl2);
			std::cout << "Ergebnis: " << erg << std::endl;
		}
	}
	std::cout << std::endl;

	//--------------------------------------------------------------

	//Aufgabe 4-----------------------------------------------------
	std::cout << "Aufgabe 4" << std::endl;
	float x1 = -1;
	float x2 = -1;
	float *px1 = &x1;
	float *px2 = &x2;
	float A = 0;
	float p = 0;
	float q = 0;
	std::string schließePqNull;

	std::cout << "Geben sie 'a', 'p' und 'q' ein. Nach jeder Eingabe mit Enter bestaetigen . . . " << std::endl;
	std::cout << "Wenn sie die Nullstellenberechnung beenden wollen, geben sie zwischen Rechnungen (vor bzw. nach einer Rechnung) 'endPqNull' ein. Ansonsten 'contPqNull'." << std::endl;
	std::cout << "'-1' ist ein Wert der einen Fehler signalisiert." << std::endl;

	while (schließePqNull != "endPqNull") {

		std::cin >> schließeCalc;

		std::cin >> A;
		std::cin >> p;
		std::cin >> q;

		pqNull(A, p, q, px1, px2);

		std::cout << "x1: " << x1 << " x2: " << x2 << std::endl;
	}
	
	//--------------------------------------------------------------

	system("pause");
	return 0;
}

/*Funktionen*/

//Aufgabe 1: Verdreht Eingabewerte. Das ganze mit Pointern.
void swapPtr(int *a, int *b) {
	int auslagerung = *a;
	*a = *b;
	*b = auslagerung;
}

//Aufgabe 2:
void printArr(int a[], int *lastElement) {	//Erwartet "int Array" und "int Pointer".

	int *ptr = nullptr;						//Pointer "*ptr" wird als Nullpointer (zeigt nirgendwo hin) initialisiert.
	int index = 0;							//int Variable "index" wird mit "0" initialisiert.

	do {
		ptr = a + index;
		std::cout << *ptr << std::endl;
		index++;
	} while (ptr != lastElement);
}

//Aufgabe 3:
float calc(float a, std::string rechenart, float b) {

	if (rechenart == "+") {
		float ergebnis = a + b;
		return ergebnis;
	}
	else if (rechenart == "-") {
		float ergebnis = a - b;
		return ergebnis;
	}
	else if (rechenart == "*") {
		float ergebnis = a * b;
		return ergebnis;
	}
	else if (rechenart == "/") {
		float ergebnis = 0;
		if (b = 0) {
			std::cout << "Durch 0 teilen ist nicht erlaubt!";
			return ergebnis;
		}
		ergebnis = a / b;
		return ergebnis;
	}
	else if (rechenart != "+" | rechenart != "-" | rechenart != "*" | rechenart != "/") {
		std::cerr << "Dieses Programm unterstuetzt nur folgende Rechenoperationen: +, -, *, /";
		return 1;
	}
}

//Aufgabe 4:
bool pqNull(float a, float p, float q, float *x1, float *x2) {

	if (a != 0) {
		p = p / a;
		q = q / a;
	}

	if (pow((p / 2), 2) - q < 0) {
		std::cout << "Ihre Eingaben haben keine Loesungen im Reelen" << std::endl;
		return false;
	}

	*x1 = -(p / 2) + pow(pow((p / 2), 2) - q, 0.5);
	*x2 = -(p / 2) - pow(pow((p / 2), 2) - q, 0.5);

	return true;
}