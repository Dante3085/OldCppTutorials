#include <iostream>
#include <string>
#include "MenschPROT.hpp"

/*"const bei Objekten": In Java bedeutet const bei Objekten, dass in die Speicheradresse eines auf "final" (Äquivalent zu const in C++) gesetzten Objektes kein anderes Objekt mit "new" mehr hereingesetzt werden kann.
*In C++ bedeutet "const", dass ein Objekt komplett unveränderbar wird. Hat ein const Mensch "m" bei Initialisierung folgende Parameter: Alter = 10, iq = 100, name = "Peter", so können diese nie verändert werden.
*Funktionen, die mit Attributen des const Objektes arbeiten, müssen in diesem Fall auch auf const gesetzt werden, damit der Compiler weiß, dass auch diese die Attribute nicht verändern können.
*/

int main() {

	const Mensch m(10, 100, "karl");
	std::cout << m.getAlter() << std::endl;

	system("pause");
	return 0;
}