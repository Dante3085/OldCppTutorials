#include <iostream>

/*const bei Pointern: Pointer können auf 3 unterschiedliche Varianten "const" sein.
  1. "const int *pZ = &z;" const vor dem Datentyp							  : Das, was mein Pointer referenziert, kann nicht verändert werden. Mein Pointer kann jedoch etwas anderes referenzieren (Er kann die Referenz ändern).
  2. "int *const pZ = &z;" const nach dem Stern								  : Das, was mein Pointer referenziert, kann verändert werden. Mein Pointer kann jedoch NICHT etwas anderes referenzieren (Er kann die Referenz NICHT ändern).
  3. "const int *const pZ = &z;" const vor dem Datentyp und nach dem Sternchen: Weder, was der Pointer referenziert kann verändert werden, noch die Referenz.
*/

int main() {

	int z = 10;
	int y = 20;

	int a = 30;
	int b = 40;

	int v = 60;
	int i = 70;

	const int *pZ = &z;
	*pZ = 200;						//Das referenzierte Objekt etc. kann aufgrund "const" vor dem Datentyp nicht verändert werden.
	pZ = &y;						//Der Pointer kann jedoch immer noch dazu gebracht werden, auf etwas anderes zu zeigen.

	int *const pA = &a;
	*pA = 200;						//Das referenzierte Objekt etc. kann immer noch verändert werden.
	pA = &b;						//Aufgrund des "const" nach dem Sternchen kann die Referenz jedoch nicht mehr geändert werden.

	const int *const pV = &v;		
	*pV = 200;						//Das referenzierte Objekt kann nicht verändert werden.
	pV = &i;						//Die Referenz kann nicht verändert werden.

	std::cout << *pZ << std::endl;

	system("pause");
	return 0;
}