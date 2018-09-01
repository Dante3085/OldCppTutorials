#include <iostream>
#define WIN

void programmende() {
#ifdef WIN
	system("pause");
#endif

#ifndef WIN
	int ende;
	std::cout << "leertaste und enter zum beenden";
	std::cin >> ende;
#endif
}