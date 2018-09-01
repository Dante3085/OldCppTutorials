#include <iostream>

/*"inline Funktionen": inline ermöglicht es, dass der Inhalt der Funktion einfach an die aufrufende Stelle kopiert wird, anstatt alle 5 unnötigen Maschineninstrukionen ausführen zu müssen.
*Verbessert die Performance, erhöht allerdings auch die Größe der "exe" Datei, da bei jedem Aufruf neue Codezeilen hinzukopiert werden.
*
*Die meisten modernen Compiler ignorieren unser Keyword "inline" komplett und entscheiden selbst wann eine Funktion mit inline versehen werden sollte. 
*/

inline int add(int a, int b) {
	return a + b;
}

int main() {
	
	int a = add(5, 10);
	std::cout << a << std::endl;

	system("pause");
	return 0;
}