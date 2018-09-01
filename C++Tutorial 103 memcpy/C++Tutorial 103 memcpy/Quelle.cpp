#include <iostream>

/*"memcpy": Gegenstück von memset. Ermöglicht das Kopieren von ganzen Datenblöcken, damit diese benutzt werden können, ohne die Originaldaten zu verändern (z.B. Arrays).

Es ist möglich, dass der Compiler for-loops, die Arrays füllen erkennt und diese intelligent durch "memset" bzw. "memcpy" ersetzt, da sie schneller als ein for-loop sind. 
*/

int main() {

	int arr[128];

	for (int i = 0; i < 128; i++) {
		arr[i] = i;
		std::cout << arr[i] << std::endl;
	}

	int arr2[128];
	memcpy(arr2, arr, 128 * sizeof(int)); //1.Parameter: Ziel des Kopiervorgangs; 2.Parameter: Inhalt des Kopiervorgangs; 3.Parameter: Größe. Arbeitet wieder auf Byteebene. Wieder schneller als for-loop.

	for (int i = 0; i < 128; i++) {
		std::cout << arr2[i] << std::endl;
	}

	system("pause");
	return 0;
}