#include <iostream>

/*"namespace": Verhindern "nameclashes" (Namenskonflikte), da sie erm�glichen zu sagen "Ich meine genau die Funktion von dem Namespace". Erstelle ich eine Funktion "doSmth" in einem Namespace "a", so wird diese Fnk.
*wie gewohnt mit "a::doSmth()" angesprochen.
*Namespaces k�nnen beliebig oft ge�ffnet werden und mit neuen Funktionen bef�llt werden. Es wird dann immer noch der gleiche Namespace bef�llt bzw. angesprochen. Macht im gleichen File wenig Sinn. Jedoch hat dies zur
*Konsequenz, dass derselbe Namespac in verschiedenen Files angesprochen bzw. bef�llt werden kann.
*
*Global Namespace Pollution: Wenn die eigenen Funktionen in keinen Namespace geschrieben werden, k�nnen diese mit anderen Funktionen aus anderen hinzugef�gten Libraries Kollisionen geben.
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

using namespace a; //Kann benutzt werden, um sich die Angabe des Namespaces mit z.B.: "a::" zu sparen. Ist allerdings "bad practice", da es logischerweise das Konzept der Namespaces ad Absurdum f�hrt.

int main() {

	a::doSmth();
	b::doSmth();
	a::doSmthElse();

	system("pause");
	return 0;
}