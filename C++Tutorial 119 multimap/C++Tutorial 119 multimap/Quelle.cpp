#include <iostream>
#include <map>
#include <string>

/*"multimap": Genauso wie "map", mit dem Unterschied, dass pro Key mehrere Values vorhanden sein können.

#include <map>
*/

int main() {

	std::multimap<int, std::string> m;

	m.insert(std::pair<int, std::string>(2, "Peter"));
	m.insert(std::pair<int, std::string>(2, "Uwe"));

	//std::cout << m.find(2)->second << std::endl;		//"find()" sucht nur nach dem 1. Vertreter des Keys.	

	/*for (auto i = m.begin(); i != m.end(); i++) {		//Dauert zu lang, da maps sehr groß werden können. Außerdem gibt es die entsprechenden Values für alle Keys aus.
		std::cout << i->second << std::endl;
	}*/

	auto iters = m.equal_range(2);						//"first" zeigt aufs erste und "second" einen Platz hinters letzte. Sehr ähnlich zu Pointern.

	for (auto i = iters.first; i != iters.second; i++) {
		std::cout << i->second << std::endl;
	}

	system("pause");
	return 0;
}