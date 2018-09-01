#include <iostream>
#define WIN

void programmende() {
#ifdef WIN
	system("pause");
#endif

#ifndef WIN
	int ende;
	std::cout << "Zahl eingeben und akzeptieren, um Programm zu beenden . . ." << std::endl;
	std::cin >> ende;
	return 0;
#endif
}