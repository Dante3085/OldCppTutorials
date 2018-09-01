#include <iostream>
#include <set>
#include <functional>

/*"set": Container mit 2 Eigenschaften. 1. set bleibt immer sortiert (Das reingegebene Element wird sofort nach der Sortierroutine an den richtigen Platz gesetzt.)
2. Kein Element kann mehrfach vorkommen. Wird versucht ein Element mehrfach hinzuzufügen, passiert nichts.
*/

int main() {

	std::set<int, std::greater<int>> s;	//"greater" dreht die Ordnung um. Von groß nach klein.

	s.insert(0);
	s.insert(8);
	s.insert(4);
	s.insert(3);
	s.insert(45);
	s.insert(0);

	for (auto i = s.begin(); i != s.end(); i++) {
		std::cout << *i << std::endl;
	}

	system("pause");
	return 0;
}