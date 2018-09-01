#include <iostream>
#include "DynamicArrayPROT.hpp"
/*"Copy-Constructor deleten": Wir m�chten verhindern, dass ein Objekt jemals kopiert wird. "delete" hinter Konstruktorprototyp schreiben. Mit dieser Methode kann jeder Defaultkonstruktor gel�scht
*werden.
*/

int main() {

	DynamicArray d(100);
	d.set(5, 100);

	DynamicArray e(d);		//Funktioniert nicht mehr, da es keinen Copy-Constructor mehr gibt.

	system("pause");
	return 0;
}