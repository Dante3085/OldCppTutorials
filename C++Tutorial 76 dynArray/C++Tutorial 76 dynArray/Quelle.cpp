#include <iostream>
#include <string>
#include "DynamicArrayPROT.hpp"

/*"Dynamic Array": Klasse, die das Erstellen eines beliebig gro�en und jederzeit beliebig belegbarem Array erm�glicht.*/

int main() {

	DynamicArray d(100);
	d.set(5, 100);

	std::cout << "d an der Stelle 5: " << d.get(5) << std::endl;

	system("pause");
	return 0;
}