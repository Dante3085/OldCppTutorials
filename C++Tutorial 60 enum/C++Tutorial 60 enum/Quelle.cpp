#include <iostream>

/*"enums(Aufzählungstypen)": Datentypen, die wir kreieren können, in die nur vorgefertigte Werte passen.
*
*Wenn wir Funktionen haben, die nur bestimmte Werte annehmen können, ist es sinnvoll "enum" zu verwenden, da bei Eingabe von nicht zugelassenen Werten direkt eine Fehlermeldung vom Compiler kommt.
*/

enum Farbe{ROT, GRUEN = 2, BLAU}; //RGBw


int main() {

	Farbe f = ROT;
	int i = GRUEN;
	std::cout << i << std::endl;

	system("pause");
	return 0;
}