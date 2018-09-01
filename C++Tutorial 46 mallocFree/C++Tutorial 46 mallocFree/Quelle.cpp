#include <iostream>

/*malloc und free(diese Funktionen stammen von C und sind in C++ "new" und "delete" bereits ersetzt worden): Sind das Gegenst�ck zu "new" und "delete" in C++. "malloc" erzeugt dyn. Speicher, der auf dem Heap landet.
 *"free" kann dieser Speicher wieder freigegeben bzw. gel�scht werden.
 *
 *Bei malloc ist nicht sichergestellt, dass �berpr�ft wird, ob der gerufene Datentyp des Pointers bzw. dessen Gr��e gleich mit dem Datentyp bzw. der Gr��e des dyn. Speichers ist. 
 *Bei Fehlern kann es also dazu kommen, dass ungewolt Teile des Heaps �berschrieben werden.
 *
 *Niemals "malloc und free" und "new und delete" im Mischgebrauch verwenden. Unvorhergesehene Konsequenzen...
 *
 *Bei einem eigenen Speichermanager kann "malloc" besser sein als "new". Dies geht allerdings sehr weit in die Materie rein.
 *
 *Faustregel: "new und delete" verwenden.
*/

int main() {

	int *p = (int*)malloc(sizeof(int) * 10);	//Reserviert 40 Byte (da int = 4 Byte) auf dem Heap. malloc gibt standardm��ig einen Voidpointer zur�ck. Dieser muss zum jeweiligen Datentyp gecastet werden.
	p[0] = 100;
	free(p);									//Gleiche Funktion wie delete.

	int *i = new double;						//Bei "new" wird �berpr�ft Datentyp des Pointers und Datentyp des dyn. Speichers �bereinstimmen.
	*i = 3;

	system("pause");
	return 0;
}