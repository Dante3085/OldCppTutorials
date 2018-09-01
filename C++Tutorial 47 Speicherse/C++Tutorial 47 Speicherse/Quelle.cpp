#include <iostream>

/*Speichersegmente Code(Textsegment), Daten, BSS, Stack, Heap: Jedes Programm ist in diese 5 Speichersegmente unterteilt.
*
*1. Code-Segment: Hier befindet sich der gesamte Programmcode (in Maschinensprache). Kein vern�nftiges Betriebssystem l�sst eine Manipulation dieses kompilierten Codes zu.
*
*2. Daten-Segment: Beinhaltet alle globalen und statischen Variablen. Statische Variablen sind nat�rlich nicht im gesamten Programm g�ltig, sie m�ssen aber immer vorhanden sein.
*
*3. BSS-Segment: Kleine Optimierung des Daten-Segments. Auch hier kommen globale und statische Variablen rein. Allerdings nur jene die nicht initialisiert worden sind. Nicht initialisierte Variablen werden standard-
*m��ig mit "0" initialisiert. In diesem Speichersegment steht eigentlich nur eine Zahl, die besagt wie viele Nullen bzw. nicht initialisierte Variablen folgen.
*
*Code-, Daten- und BSS-Segment k�nnen ihre Gr��e zur Laufzeit nicht ver�ndern(statisch).
*Stack- und Heap-Segment sind dazu in der Lage ihre Gr��e w�hrend der Laufzeit zu ver�ndern.
*
*4.Stack-Segment: Wird immer vergr��ert, wenn eine neue Funktion aufgerufen wird("Stack Frame" wird auf diesem Stack abgespeichert.) und wieder verkleinert, wenn die Funktion verlassen wird. Stack Frame speichert 
"R�cksprungadresse" der Funktion, speichert Registerwerte zum Zeitpunkt des Sprungs in die Funktion sowie alle Variablen, die in einer Funktion normal deklariert werden.
*Wenn Funktion aufgerufen wird, wird alles im Bereich des Aufrufers in ein Stack Frame gepackt, und f�r die aufgerufene Funktion ein neues Stack Frame erstellt.
*
*5.Heap-Segment: Kann durch "new" oder "malloc" dynamisch wachsen und schrumpft immer bei "delete" oder "free". Um den Heap muss man sich immer SELBER K�MMERN! Variablenspeicher wird hier nicht von selber frei gegeben.
*/

int z = 5; //Ist im Daten-Segment, da diese globale Variable im gesamten Programm g�ltig ist und initialisiert wurde.
int i;	   //Ist im BSS-Segment, da diese globale Variable nicht initialisiert wurde und deshalb standardm��ig mit 0 initialisiert wird.


int main() {

	std::cout << i << std::endl; //Nicht initialisiert Variable "i" wird automatisch mit "0" initialisiert.
	int k = 5;                   //Ist auf Stack im StackFrame abgespeichert.

	system("pause");
	return 0;
}