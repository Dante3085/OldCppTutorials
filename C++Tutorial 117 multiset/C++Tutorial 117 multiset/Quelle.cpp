#include <iostream>
#include <set>
#include <functional>

/*"multiset": Wie "set", mit dem Unterschied, dass Elemente auch mehrfach vorkommen können.
*/

int main() {

	std::multiset<int, std::greater<int>> s;

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