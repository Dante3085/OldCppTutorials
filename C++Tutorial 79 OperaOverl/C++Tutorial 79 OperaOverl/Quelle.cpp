#include <iostream>
#include "DynamicArrayPROT.hpp"

/*"Operator Overloading": Wir können Operatoren, wie "+, -, *, /, =" eine eigene Bedeutung geben. In C++ kann so gut wie jeder Operator überladen werden. "sizeof" ist aber zum Beispiel eine Ausnahme.
*
*Faustregel: Sparsam mit Operator Overlaoding arbeiten, da bei schlechter Verwendung Verwirrung verursacht werden kann.
*/

int main() {

	DynamicArray d(100);
	d[5] = 100;

	std::cout << d[5] << std::endl;

	system("pause");
	return 0;
}