#include <iostream>

/*Assembler: Programmiercode wird vom Compiler in Maschinensprache bzw. Assemblersprache übersetzt. Hier wird eine Möglichkeit gezeigt um in VS an den Assemblercode zu kommen.
1. Programm schreiben
2.Breakpoint setzen
3.Rechte Maustaste auf Code -> Gehe zu Disassembly
*/

int main() {

	int i = 10;
	int k = 100;
	int j = i + k;

	system("pause");
	return 0;
}