#include <iostream>;

//In C++ muss in die Schleifen nicht unbedingt ein booleanscher Ausdruck rein. Es kann jede Zahl eingesetzt werden (0 = false; jede andere Zahl = true).

int main() {

	while (42) {												//1.Schleifentyp: 
		std::cout << "while Schleife..." << std::endl;
	}

	do {														//2.Schleifentyp:
		std::cout << "do-while Schleife..." << std::endl;
	} 
	while (true);

	for (int i = 0; i < 10; i++) {								//3.Schleifentyp:
		std::cout << "for Schleife..." << std::endl;
	}
}