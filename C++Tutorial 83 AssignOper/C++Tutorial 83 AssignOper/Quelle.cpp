#include <iostream>
#include "DynamicArrayPROT.hpp"

/*"Assignment Operator"(=): Das gleiche wie der Copy-Constructor, mit dem Unterschied, das kein neues Objekt erzeugt wird, sondern die bisherigen Daten weggeworfen und mit den Daten des Anderen 
*ersetzt werden.
*/

int main() {

	DynamicArray d(100);
	d[5] = 100;

	DynamicArray e(d);

	std::cout << "Gleich sollte move kommen!" << std::endl;
	DynamicArray f = d + e;
	std::cout << "Move vorbei!" << std::endl;

	d = f;

	std::cout << d[5] << std::endl;
	std::cout << f[5] << std::endl;

	system("pause");
	return 0;
}