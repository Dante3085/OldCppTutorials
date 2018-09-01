#include <iostream>
#define WIN

#ifdef WIN
#ifdef LINUX
#error "WIN and LINUX are defined at the same time!"					
#endif
#endif

/*Funktionen*/
void programmende() {
#ifdef WIN														
	system("pause");
#endif															

#ifndef WIN														
	int ende;
	std::cout << "Zahl + Enter zum beenden . . ." << std::endl;
	std::cin >> ende;
	return 0;
#endif									
}