#include <iostream>

/*Pointer auf Pointer:
  1.Pointer haben wie Variablen auch Speicheradressen im RAM. Somit ist es logisch, das auch auf sie Pointer zeigen können.
  2.Ist nützlich, wenn Objekte nach bestimmten Eigenschaften sortiert werden müssen (Arrays sind bereits Pointer auf Pointer).
 
 */

int main() {

	int a = 10;
	int b = 100;

	int *aP = &a;
	int *bP = &b;

	int **pP = &aP;			//Pointer auf Pointer. Neuer Pointer "**pP" zeigt auf alten Pointer "*ap".

	**pP = 30;				//Überschreibt ursprüngliches "a" mit 30, da "**pP" auf "*ap" zeigt und "*ap" auf "a" zeigt.

	std::cout << a << b << std::endl;

	system("pause");
	return 0;
}