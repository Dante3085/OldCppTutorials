#include <iostream>

/*"const_cast": Mit const_cast kann der "const" Modifier von Variablen weggenommen werden. Nachteil: Nachdem "const_cast" angewandt wurde, darf in die Variable nicht mehr reingeschrieben werden bzw.
wenn wir es doch tun, haben wir wieder Undefined Behaviour. Dies geschieht aus folgendem Grund: Wenn Variablen auf const gesetzt sind, können sie nicht verändert werden. Dies ermöglicht dem Compiler
gewisse Optimierungen vorzunehmen. Beispielsweise packt der Compiler 2 const Variablen mit dem gleichen Inhalt auf denselben Speicherplatz. Wird nun eine der const Variablen durch const_cast doch verändert,
so verändern wir gleich beide.

Anwendungsbeispiele: 1. Beim arbeiten mit alten APIs. 2. Originale Variable ist nicht const. Wir haben auf diese aber eine const Referenz. Von dieser Referenz wollen wir das const nun wegbekommen.
*/

int main() {

	const char c1[] = "Hallo Welt";

	char *c2 = const_cast<char*>(c1);
	c2[0] = 'K';							//NICHT MACHEN!!!!! UNDEFINED BEHAVIOUR.

	std::cout << c1 << std::endl;

	system("pause");
	return 0;
}