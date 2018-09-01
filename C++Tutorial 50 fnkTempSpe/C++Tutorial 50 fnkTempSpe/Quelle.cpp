#include <iostream>

/*"function Templates Spezialisierung" 
*Problem mit function Templates: Bei �begabe von Arrays funktioniert unsere normale Funktion nicht mehr. Deshalb muss eine Spezialisierung des Templates erfolgen. C++-Strings funktionieren allerdings mit der normalen
*Funktion.
*
*Randnotizen: Aus Funktionen k�nnen keine Arrays zur�ckgegeben werden. Da Arrays aber praktisch Pointer sind, kann man einfach einen auf ein Array zeigenden Pointer zur�ckgeben.
*Arrays sind Pointer auf den Anfang von einem Datenblock.
*/

template<typename T>

T min(T a, T b) {
	return a < b ? a : b;
}

template<>							//�berladung bzw. Spezialisierung des Templates.
char *min(char *a, char *b) {
	return strcmp(a, b) < 0 ? a : b;
}

int main() {
	char a[] = "a";
	char b[] = "b";
	char *c = min(a, b);			//Unsere "min" Funktion pr�ft leider nicht lexikographisch, sondern gibt in diesem Fall lediglich an, welcher C-String im Speicher fr�her kommt.

	std::cout << c << std::endl; 

	system("pause");
	return 0;
}