#include <iostream>
#include <climits>

int main() {

	//0 = false; 1 = true; Alt + Mauszeiger ermöglicht es, mehrere Reihen gleichzeitig zu manipulieren. Alles ungleich 0 ist immer true.

	bool b1 = true;
	bool b2 = false;
	bool b3 = true || false;
	bool b4 = true && false;

	std::cout << "true || false \t\t" << (false || false) << std::endl;
	std::cout << "true || false \t\t" << (true	|| false) << std::endl;
	std::cout << "true || false \t\t" << (false	|| true) << std::endl;
	std::cout << "true || false \t\t" << (true  || true) << std::endl;

	std::cout << std::endl;

	std::cout << "true && false \t\t" << (false && false) << std::endl;
	std::cout << "true && false \t\t" << (true  && false) << std::endl;
	std::cout << "true && false \t\t" << (false && true) << std::endl;
	std::cout << "true && false \t\t" << (true  && true) << std::endl;

	std::cout << std::endl;

	if (b3 == 1) {
		std::cout << "b3 ist true" << std::endl;
	}
	else if (b3 == 0) {
		std::cout << "b3 ist false" << std::endl;
	}

	std::cout << std::endl;

	system("pause");
	return 0;
}