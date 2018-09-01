#include <iostream>
#include <Windows.h>

/*Dynamischen Speicher mit "delete" l�schen: Dynamischer Speicher bleibt auch nachdem er seinen Block/Scope ({}) verlassen hat, immer noch im Speicher bzw. erhalten. Wir m�ssen uns selbst darum k�mmern, dass dieser 
 *wieder gel�scht wird. In Java h�tte dies der "Garbage Collector" von selbst �bernommen. Sobald nichts mehr auf ein Objekt zeigt wird es vom GC gel�scht. Diese Funktion gibt es in C++ nicht!
 *
 *
 *M�chte man ein dynamisches Array l�schen und die [] Klammern werden nach delete vergessen, wird nur das erste Element des Arrays gel�scht.
 *
 *Dynamischer Speicher kann nicht zweimal gel�scht werden. Zwei deletes hintereinander funktionieren nicht. Es sein denn dem 2. delete wird ein Nullpointer "p = nullptr" �bergeben.
 *
 *Dynamischer Speicher ist einer der gro�en Vorteile von C++. Da dieser manuell gel�scht werden muss, kann diese Eigenschaft nat�rlich auch zu Problemen f�hren.
 *Allerdings sorgt der GC in Java f�r erhebliche Performanceeinbu�en. Dies macht sich besonders in Spielen bemerkbar, wo von Zeit zu Zeit Ruckler auftreten k�nnen, da der GC gerade ungebrauchten Speicher verarbeitet.
*/

int main() {

	int z�hler = 0;

	while (true) {
		int *p = new int[10];
		z�hler++;
		delete[] p;					//Wenn man ein dynamisches Array l�schen will, m�ssen nach delete immer die [] Klammern stehen. Ansonsten nat�rlich nicht. Dann kommt noch der Name des Pointers, der auf die dynamische Variable zeigt.
		p = nullptr;
		delete[] p;
	}

	system("pause");
	return 0;
}