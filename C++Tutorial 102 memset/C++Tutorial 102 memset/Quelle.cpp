#include <iostream>

/*"memset": Initialisiert ein Array mit 0. Tut dasselbe wie eine for-Schleife, ist aber schneller. Funktioniert nicht mit anderen Zahlen, da memset auf Byteebene arbeitet. Sprich, es setzt jeden Byte
auf die entsprechende Zahl, dies wird dann als der gewählte Datentyp interpretiert und die Zahlen sind nicht die gewollten.
*/

int main() {

	int arr[128];		//Da keine Initialisierungswerte angegeben wurden, wird in der unteren Schleife nur zufälliger Schwachsinn ausgegeben werden. Dinge, die den Speicher vorher belegt haben.

	memset(arr, 1, 128 * sizeof(int));	//1.Parameter: Variable; 2.Parameter: Initialisierungswert; 3.Parameter: Wie viele Elemente der Variable sollen mit diesem Wert besetzt werden. Da memset auf Byteebene arbeitet, muss hier die Anzahl wie folgt angegeben werden: "(Größe des Arrays) * sizeof(Datentyp)".

	for (int i = 0; i < 128; i++) {
		std::cout << arr[i] << std::endl;
	}

	system("pause");
	return 0;
}