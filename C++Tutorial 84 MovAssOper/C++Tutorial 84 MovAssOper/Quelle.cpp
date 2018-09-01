#include <iostream>
#include "DynamicArrayPROT.hpp"

/*"Move Assignment Operator": Zusammenschluss aus dem "Assignment Operator" (Wir wollen auf ein bestehendes Objekt etwas zuweisen!) und dem "Move Constructor" (Sorgt dafür, dass von einem RValue,
*der sowieso gleich gelöscht werden würde, die Daten genommen werden).
*
*/

int main() {

	DynamicArray d(100);
	d[5] = 100;

	DynamicArray e(d);

	std::cout << "Gleich sollte move kommen!" << std::endl;
	DynamicArray f = d + e;
	std::cout << "Move vorbei!" << std::endl;

	d = f;

	d = f + e;

	std::cout << d[5] << std::endl;
	std::cout << f[5] << std::endl;

	

	system("pause");
	return 0;
}