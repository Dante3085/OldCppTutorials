//Pr�prozessorbefehle
#include <iostream> 
#include "OwnUtil.hpp" 


/*Vollst�ndiger Titel : "Bedingte Kompilierung #ifdef #ifndef #endif
 *
 *Bedingte Kompilierung: Wir k�nnen ausw�hlen, welche Zeilen des Codes tats�chlich kompiliert werden sollen bzw. in welchen F�llen, welche Zeilen kompiliert werden sollen.
 *
 *"#ifdef ... #endif" ist praktisch ein if - Block f�r den Pr�prozessor.
 *
 */

int main() {


/*	//Programmende
#ifdef WIN														//If - Abfrage: Wenn "WIN" vorher definiert wurde,
	system("pause");											//f�hre "system("pause");" aus.
#endif															//Ende If - Abfrage.

#ifndef WIN														//Wenn "WIN" vorher NICHT definiert wurde, f�hre folgendes aus
	int ende;													//...
	std::cout << "Zahl + Enter zum beenden . . ." << std::endl;	//... 
	std::cin >> ende;											//...
	return 0;													//...
#endif															//Ende der Abfrage
*/

	programmende();
}