#include <iostream>

/*function templates: Ist ein sehr großes Feld in C++.
*Template: Schablone für eine Funktion. Compiler kann aus Templates Funktionen in bestimmter Form generieren (int, float, double...). Dies ist gebraucht, wenn man Funktionen mit dem gleichen Inhalt hat, man aber
*verschiedene Datentypen abdecken will. Beispiel unten...
*
*Ich erstelle mit dem Template praktisch einen Platzhalter für den Datentyp.
*
*Wenn Templates nicht gebraucht werden, werden auch dessen Funktionen nicht kreiert. Somit wird auch kein Speicherplatz an diese nicht kreierten Funktionen verschwendet.
Habe ich zum Beispiel eine Additionsfunktion mit Templates erstellt, brauche im Programm aber nur die int-Version, so wird kein Speicherplatz an dieselbe Funktion mit unterschiedlichem Datentyp verschwendet,
da es diese ja garnicht gibt. Sie wurden nie kompiliert.
*/

template<typename T>
T min(T a, T b) {
	return a < b ? a : b;
}

/*int min(int a, int b) {
	return a < b ? a : b;
}

int min(double a, double b) {
	return a < b ? a : b;
}

int min(float a, float b) {
	return a < b ? a : b;
}*/

int main() {

	double a = 5.7;
	int b = 10.4;
	double c = min<int>(a, b);		//Hier erkennt der Compiler jetzt welcher Datentyp der Funktion übergeben wird, und erstellt anhand diesem die Funktion. Wenn mehrere Datentypen übergeben werden, muss einer der Datentypen in spitzen Klammern vor die Parameterklammern der Funktion geschrieben.

	std::cout << c << std::endl;

	system("pause");
	return 0;
}