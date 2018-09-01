#include <iostream>
#define WIN
#define LINUX															//Es kann nicht gleichzeitig die Windows und Linux L�sung kompiliert werden. Deswegen m�ssen wir einen Error f�r diesen Fall erstellen.

#ifdef WIN
#ifdef LINUX
#error "WIN and LINUX are defined at the same time!"					
#endif
#endif

/* Hinter "#error" steht die Error Message, die in dem Fall "#ifdef WIN #ifdef LINUX" ausgegeben wird. #error sind immer rot unterstrichen. Eines der #define l�schen, um Error zu verhindern.*/

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