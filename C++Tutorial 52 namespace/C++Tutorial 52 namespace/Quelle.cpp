#include <iostream>

/*"namespace": Verhindern "nameclashes" (Namenskonflikte), da sie ermöglichen zu sagen "Ich meine genau die Funktion von dem Namespace". Erstelle ich eine Funktion "doSmth" in einem Namespace "a", so wird diese Fnk.
*wie gewohnt mit "a::doSmth()" angesprochen.
*Namespaces können beliebig oft geöffnet werden und mit neuen Funktionen befüllt werden. Es wird dann immer noch der gleiche Namespace befüllt bzw. angesprochen. Macht im gleichen File wenig Sinn. Jedoch hat dies zur
*Konsequenz, dass derselbe Namespac in verschiedenen Files angesprochen bzw. befüllt werden kann.
*
*Global Namespace Pollution: Wenn die eigenen Funktionen in keinen Namespace geschrieben werden, können diese mit anderen Funktionen aus anderen hinzugefügten Libraries Kollisionen geben.
*Also, eigene Funktionen in einen Namespace packen!
*/

namespace a {
	void doSmth() {
		std::cout << "namespace a: doSmth()" << std::endl;
	}
}

namespace b {
	void doSmth() {
		std::cout << "namespace b: doSmth()" << std::endl;
	}
}

namespace a {
	void doSmthElse() {
		std::cout << "namespace a: doSmthElse()" << std::endl;
	}
}

using namespace a; //Kann benutzt werden, um sich die Angabe des Namespaces mit z.B.: "a::" zu sparen. Ist allerdings "bad practice", da es logischerweise das Konzept der Namespaces ad Absurdum führt.

int main() {

	a::doSmth();
	b::doSmth();
	a::doSmthElse();

	system("pause");
	return 0;
}