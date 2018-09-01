#include <iostream>
#include <Windows.h>

/*Dynamischen Speicher mit "delete" löschen: Dynamischer Speicher bleibt auch nachdem er seinen Block/Scope ({}) verlassen hat, immer noch im Speicher bzw. erhalten. Wir müssen uns selbst darum kümmern, dass dieser 
 *wieder gelöscht wird. In Java hätte dies der "Garbage Collector" von selbst übernommen. Sobald nichts mehr auf ein Objekt zeigt wird es vom GC gelöscht. Diese Funktion gibt es in C++ nicht!
 *
 *
 *Möchte man ein dynamisches Array löschen und die [] Klammern werden nach delete vergessen, wird nur das erste Element des Arrays gelöscht.
 *
 *Dynamischer Speicher kann nicht zweimal gelöscht werden. Zwei deletes hintereinander funktionieren nicht. Es sein denn dem 2. delete wird ein Nullpointer "p = nullptr" übergeben.
 *
 *Dynamischer Speicher ist einer der großen Vorteile von C++. Da dieser manuell gelöscht werden muss, kann diese Eigenschaft natürlich auch zu Problemen führen.
 *Allerdings sorgt der GC in Java für erhebliche Performanceeinbußen. Dies macht sich besonders in Spielen bemerkbar, wo von Zeit zu Zeit Ruckler auftreten können, da der GC gerade ungebrauchten Speicher verarbeitet.
*/

int main() {

	int zähler = 0;

	while (true) {
		int *p = new int[10];
		zähler++;
		delete[] p;					//Wenn man ein dynamisches Array löschen will, müssen nach delete immer die [] Klammern stehen. Ansonsten natürlich nicht. Dann kommt noch der Name des Pointers, der auf die dynamische Variable zeigt.
		p = nullptr;
		delete[] p;
	}

	system("pause");
	return 0;
}