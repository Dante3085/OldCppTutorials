#include <iostream>;

/*Switch - Case - Fallthrough (Cases ohne jeweilige breaks): Case der ausgewählt wurde wird ausgeführt, sowie alle Zeilen die danach kommen bis ein break kommt.
 *
 *
 *
 *
 *
 */

//Funktionsprototypen
void analyzeDigit(int);

//Allgemeine Variablen
int switchBeispiel = 0;

int main() {

	/*std::cout << "Welchen switch-case wollen sie betreten? (1/2)" << std::endl;
	std::cin >> switchBeispiel;

	switch (switchBeispiel) {

	case 1: {
		std::cout << "case1" << std::endl;
		break;
	}

	case 2: {
		std::cout << "case2" << std::endl;
		break;
	}

	default: {
		std::cout << "Diesen Case gibt es nicht. Versuchen sie es erneut . . ." << std::endl;
		break;
	}
	}
	*/
	
	analyzeDigit(9);

	//Programmende
	int ende;
	std::cout << "Wert eingeben und Enter, um Programm zu beenden . . .";
	std::cin >> ende;
	return 0; 

	
}

//Funktionen
void analyzeDigit(int z) {
	switch (z) {

		//Fall-Through
	case 0: 
		std::cout << "case0" << std::endl;
		break;

	case 2:

	case 4:

	case 6:
		
	case 8:
		std::cout << "gerade" << std::endl;
		break;

	case 1:

	case 3:

	case 5:

	case 7:

	case 9:
		std::cout << "ungerade" << std::endl;
		break;

	default:
		std::cout << "keine Ziffer" << std::endl;
		break;
	}
}