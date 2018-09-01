#include <iostream>
#include "OwnUtil.hpp"

/*Dynamischen Speicher erzeugen mit "new": Arrays können nur mit einer festen Größe initialisiert werden. Dieses Problem kann mit "new" umgangen werden. Durch new kann während der Laufzeit dynamisch Speicher erzeugt werden.
 *Dynamische Variablen funktionieren immer nur in Zusammenspiel mit einem Pointer, der auf sie zeigt.
 *Die Erstellung einer dynamischen Variable z.B. bei einem Array, das erst während der Laufzeit vom Benutzer mit seiner Größe initialisiert wird, ist etwas langsamer als die herkömliche Methode vor dem kompilieren (nur merkbar, wenn in
 *Schleife häufig dynamischen Variablen erstellt werden).
 *
 *"new" C++: dynamischer Speicher wird erzeugt.
 *"new" Java: Objekt wird erzeugt.
 *
*/

int main() {

	int k = 0;
	std::cin >> k;

	//int *p = new int;					//Pointer "p" zeigt auf dynamische int Variable
	int *p = new int[k];				//Pointer "p" zeigt auf dynamisches int Array, dessen Größe nun durch "new" vom Benutzer während der Laufzeit bestimmt werden kann. 
	//*p = 10;
	p[0] = 10;

	//std::cout << *p << std::endl;
	std::cout << p[0] << std::endl;

	programmpause();
	return 0;
}