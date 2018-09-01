#include <iostream>

/*"hash": Einfache Zahlen (int, long, sizeT), die aus komplexeren Objekten gebildet werden.

1.Regel : Wenn wir 2 "Car"s haben, die die gleichen Werte (ps, numberDoors, hasTrunk) haben, müssen beide den gleichen "hash" Wert haben. 
2.Regel : Sind die Werte unterschiedlich, sollten die hash Werte auch unterschiedlich sein, müssen sie streng genommen aber nicht.

"functional Object": Objekt, dass aufgerufen werden kann wie eine Funktion.

"Hashkollisionen": Wenn 2 unterschiedliche Objekte den gleichen Hash produzieren. Können nicht komplett verhindert werden, nur vermieden.

Anwendung: Virenscanner überprüfen häufig zum Beispiel ".exe" Dateien auf ihren Hashwert und vergleichen diesen mit bekannten Viren. Deutlich schneller als Vergleiche über den Inhalt einer Datei.
*/

class Car {
public:
	int ps;
	int numberDoors;
	bool hasTrunk;

	Car(int ps, int numberDoors, bool hasTrunk) :ps(ps), numberDoors(numberDoors), hasTrunk(hasTrunk) {
		//DO NOTHING
	}
};

namespace std {						//!DIES IST EINE AUSNAHME. NORMALERWEISE NIEMALS EIGENE SACHEN IN DEN "std" NAMESPACE SCHREIBEN!
	template<> struct hash<Car> {
		size_t operator()(const Car &car) const {	//"size_t" ist einfach eine positive Zahl. Compilerabhängig ist der Datentyp.
			//return 0;								//Zulässige hash-Funktion, aber Schlechte, da 2.Regel verletzt.
			hash<int> intHash;						
			hash<bool> boolHash;					
			return intHash(car.ps) + intHash(car.numberDoors) * 7 + boolHash(car.hasTrunk);	//"*7" macht Hashkollisionen unwahrscheinlicher.
		}
	}; 
}

int main() {

	Car car(100, 4, true);
	std::hash<Car> carHash;

	std::cout << carHash(car) << std::endl;			//Functional Object. Verwendet wie eine Funktion.

	system("pause");
	return 0;
}