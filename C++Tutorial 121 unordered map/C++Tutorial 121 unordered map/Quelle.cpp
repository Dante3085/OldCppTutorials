#include <iostream>
#include <string>
#include <unordered_map>

/*"unordered_map unordered_multimap unordered_set unordered_multiset": Sind optimierte Varianten der maps und sets.

Unordered Varianten funktionieren wie folgt: Haben intern mehrere "Buckets" (fungieren wie Container, die mehrere Cars, in diesem Fall, vom gleichen Hash halten können), die selber abhängig vom Compiler in einem
Array oder ähnlichem abgelegt sind.

Die Suchgeschwindigkeit nach dem passenden Value zum Key, ist in der unordered_map deutlich höher, als in der normalen map.

Wenn gleich viele Elemente in den unordered Containern sind, wie es Buckets gibt, dann werden neue Buckets erzeugt und die Inhalte werden umsortiert (relativ schnell).

unordered Klassen haben alle 3 Nachteile:
	1. Wenn wir über alle Elemente iterieren wollen, sind die unordered Varianten langsamer.
	2. Wenn wir doch über alle Elemente iterieren, ist die Reihenfolge undefiniert, da die Buckets immer umsortiert werden, um die Schnelligkeit der gezielten Suche zu gewährleisten.
	3. Keys dürfen nach einmaliger Eingabe nicht mehr überschrieben bzw. verändert werden.
*/

class Car {
public:
	int ps;
	int numberDoors;
	bool hasTrunk;

	Car(int ps, int numberDoors, bool hasTrunk) :ps(ps), numberDoors(numberDoors), hasTrunk(hasTrunk) {
		//DO NOTHING
	}

	friend bool operator==(const Car &c1, const Car &c2) {										//Überladung von "=="
		return c1.ps == c2.ps && c1.numberDoors == c2.numberDoors && c1.hasTrunk == c2.hasTrunk;
	}
};

namespace std {						
	template<> struct hash<Car> {																//Hashfunktion
		size_t operator()(const Car &car) const {	
													
			hash<int> intHash;
			hash<bool> boolHash;
			return intHash(car.ps) + intHash(car.numberDoors) * 7 + boolHash(car.hasTrunk);
		}
	};
}

int main() {

	std::unordered_map<Car, std::string> owners;

	Car c(120, 4, true);
	owners.insert(std::pair<Car, std::string>(c, "Peter"));

	std::cout << owners.find(c)->second << std::endl;			//Benötigt Überladung von "==" und Hashfunktion.

	system("pause");
	return 0;
}