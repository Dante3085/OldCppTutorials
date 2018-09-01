#include <iostream>

/*"inline Funktionen": inline erm�glicht es, dass der Inhalt der Funktion einfach an die aufrufende Stelle kopiert wird, anstatt alle 5 unn�tigen Maschineninstrukionen ausf�hren zu m�ssen.
*Verbessert die Performance, erh�ht allerdings auch die Gr��e der "exe" Datei, da bei jedem Aufruf neue Codezeilen hinzukopiert werden.
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