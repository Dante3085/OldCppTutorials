#include <iostream>

/*"memcpy": Gegenst�ck von memset. Erm�glicht das Kopieren von ganzen Datenbl�cken, damit diese benutzt werden k�nnen, ohne die Originaldaten zu ver�ndern (z.B. Arrays).

Es ist m�glich, dass der Compiler for-loops, die Arrays f�llen erkennt und diese intelligent durch "memset" bzw. "memcpy" ersetzt, da sie schneller als ein for-loop sind. 
*/

int main() {

	int arr[128];

	for (int i = 0; i < 128; i++) {
		arr[i] = i;
		std::cout << arr[i] << std::endl;
	}

	int arr2[128];
	memcpy(arr2, arr, 128 * sizeof(int)); //1.Parameter: Ziel des Kopiervorgangs; 2.Parameter: Inhalt des Kopiervorgangs; 3.Parameter: Gr��e. Arbeitet wieder auf Byteebene. Wieder schneller als for-loop.

	for (int i = 0; i < 128; i++) {
		std::cout << arr2[i] << std::endl;
	}

	system("pause");
	return 0;
}