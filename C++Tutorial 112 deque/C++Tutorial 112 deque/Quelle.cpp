#include <iostream>
#include <deque>

/*"deque": Speicher ist nicht komplett zusammenhängend. Wir haben auch keine einzelnen Elemente, die einander referenzieren.

"deque" besteht aus verschiedenen Arrays, die jeweils auf ein nächstes Array zeigen. Zusammenhängende Chunks im RAM. Etwas schneller als die list.
*/

int main() {

	std::deque<int> l;

	l.push_front(1202);
	l.push_front(12302);
	l.push_front(202);
	l.push_front(4602);

	for (auto i = l.begin(); i != l.end(); i++) {
		std::cout << *i << std::endl;
	}

	system("pause");
	return 0;
}