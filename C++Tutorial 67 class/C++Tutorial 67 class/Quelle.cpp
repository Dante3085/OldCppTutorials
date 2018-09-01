#include <iostream>
#include <string>

/*"class": C++ ist keine objektorientierte Sprache, unterstützt jedoch diesen Programmierstil. Theoretisch brauchen wir Objekte nicht. Sie sind aber teilweise sehr hilfreich.
*Klassen haben in C++ standardmäßig einen Standardkonstruktor der komplett leer ist. Wenn man einen eigenen Konstruktor in die Klasse eingbaut, muss dies bei der Instanziierung natürlich berücksichtigt werden.
*
*
*/

class Mensch {
public:															//Setzt alles was folgt in den "public" Sichtbarkeitsbereich.
	int alter;													//Attribut (sind ohne jegliche Kennzeichung private.)
	std::string name;											//Attribut (sind ohne jegliche Kennzeichung private.)
	int iq;														//Attribut (sind ohne jegliche Kennzeichung private.)

	Mensch(int alter_, std::string name_, int iq_) {			//Konstruktor der "Mensch" Klasse. Er hat 3 Parameter: Das Alter, der Name und der Iq.
		alter = alter_;
		name = name_;
		iq = iq_;
	}
private:														//Setzt alles was folgt in den "private" Sichtbarkeitsbereich.


};																//Am Ende der Klasse kommt immer ein Semikolon. VS übernimmt dies automatisch.

int main() {

	Mensch m(20, "Karl", 100);									//Objekt "m" anhand der oben erstellten Klasse "Mensch". Im Gegensatz zu Java ist dies schon ein Objekt. Kein "new Mensch" etc. erforderlich.
	//m.alter = 10;												//Setzt das Attribut "alter" des "Mensch" Objekts "m" auf "10".

	std::cout << m.alter << std::endl;							//Gibt das derzeitige "alter" des Menschen "m" aus.
	std::cout << m.name << std::endl;
	std::cout << m.iq << std::endl;

	system("pause");
	return 0;
}