#pragma once
#include <string>

/*Klassenprototyp*/
class Mensch {
private:											//Ist eig. nicht nötig, da "class" automatisch "private" ist, jedoch best practice wegen Lesbarkeit.
	int alter;
	int iq;
	std::string name;
public:
	Mensch(int alter_, int iq_, std::string name);	//Funktionsprototypen.
	int getAlter();									//Funktionsprototypen.
	int getIQ();									//Funktionsprototypen.
	std::string getName();							//Funktionsprototypen.
};
