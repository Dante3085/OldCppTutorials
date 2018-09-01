#include <iostream>
#include <vector>

/*"vector": Gegenst�ck zu "ArrayList" in Java. Ein Array, dass dynamisch wachsen kann. Es kann nicht einfach an einem Index der die Vectorgr��e �berschreitet hereingeschrieben werden.*/

int main() {

	std::vector<int> k(10);					//Hier entsteht schon ein Objekt. In Klammern steht der Startwer bzw. die Startgr��e des Vectors.

	for (int i = 0; i < k.size(); i++) {
		k[i] = i;
	}

	k.push_back(10);						//Schreibt am n�chst h�heren Index des Vektors den in den Klammern angegebenen Wert rein. So werden dynamisch Werte unabh�ngig von der Startgr��e hinzugef�gt.

	for (int i = 0; i < k.size(); i++) {
		std::cout << k[i] << std::endl;
	}

	system("pause");
	return 0;
}