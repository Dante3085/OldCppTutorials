#include <iostream>
#include <forward_list>

/*"forward_list": Wenn nur in eine Richtung, bzw. die fortschreitende Richtung iteriert werden soll, kann die "forward_list" verwendet werden.

iterieren: Eine Liste schrittweise durchgehen.

Die forward_list zeigt nicht immer auf das letzte Element, sonder auf das Nächste. Nur ein Pointer pro Element. Spart Speicherplatz
*/

int main() {

	std::forward_list<int> l;

	l.push_front(1202);
	l.push_front(1235);
	l.push_front(1643);
	l.push_front(967);

	for (auto i = l.begin(); i != l.end(); i++) {
		std::cout << *i << std::endl;
	}

	system("pause");
	return 0;
}