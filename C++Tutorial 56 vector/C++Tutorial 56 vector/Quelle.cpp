#include <iostream>
#include <vector>

/*"vector": Gegenstück zu "ArrayList" in Java. Ein Array, dass dynamisch wachsen kann. Es kann nicht einfach an einem Index der die Vectorgröße überschreitet hereingeschrieben werden.*/

int main() {

	std::vector<int> k(10);					//Hier entsteht schon ein Objekt. In Klammern steht der Startwer bzw. die Startgröße des Vectors.

	for (int i = 0; i < k.size(); i++) {
		k[i] = i;
	}

	k.push_back(10);						//Schreibt am nächst höheren Index des Vektors den in den Klammern angegebenen Wert rein. So werden dynamisch Werte unabhängig von der Startgröße hinzugefügt.

	for (int i = 0; i < k.size(); i++) {
		std::cout << k[i] << std::endl;
	}

	system("pause");
	return 0;
}