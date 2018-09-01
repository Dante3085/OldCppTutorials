#include <iostream>
#define WIN

void programmpause() {
#ifdef WIN
	system("pause");
#endif

#ifndef WIN
	int ende;
	std::cout << "Wert + Enter zum fortfahren . . ." << std::endl;
	std::cin >> ende;
#endif
}