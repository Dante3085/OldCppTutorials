//Präprozessorbefehle
#include <iostream> 
#include "OwnUtil.hpp" 


/*Vollständiger Titel : "Bedingte Kompilierung #ifdef #ifndef #endif
 *
 *Bedingte Kompilierung: Wir können auswählen, welche Zeilen des Codes tatsächlich kompiliert werden sollen bzw. in welchen Fällen, welche Zeilen kompiliert werden sollen.
 *
 *"#ifdef ... #endif" ist praktisch ein if - Block für den Präprozessor.
 *
 */

int main() {


/*	//Programmende
#ifdef WIN														//If - Abfrage: Wenn "WIN" vorher definiert wurde,
	system("pause");											//führe "system("pause");" aus.
#endif															//Ende If - Abfrage.

#ifndef WIN														//Wenn "WIN" vorher NICHT definiert wurde, führe folgendes aus
	int ende;													//...
	std::cout << "Zahl + Enter zum beenden . . ." << std::endl;	//... 
	std::cin >> ende;											//...
	return 0;													//...
#endif															//Ende der Abfrage
*/

	programmende();
}