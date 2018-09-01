#include <iostream>
#include <string>
#include "MenschPROT.hpp"

/*"Destruktor": Wird nicht wie der Konstruktor aufgerufen wenn ein Objekt entsteht, sondern wenn der Lebenszyklus des Objekts vorbei ist bzw. es zerst�rt wird. Dies passiert wenn ein Objekt
*seinen Scope verl�sst oder das Programm beendet wird. Ein Ausnahmefall ist ein dynamisch erstelltes Objekt mit "new". Dieses landet dann auf dem Heapspeicher und wird wie gewohnt erst vernichtet,
*wenn es manuell mit "delete" gel�scht wird.
*
*Destruktoren werden mit einem "~" (Alt Gr + Plus) gekennzeichent. Beispiel: "~Mensch ()".
*
*Werden gebraucht, wenn eine Klasse dynamischen Speicher als Attribut hat. Dieser dynamische Speicher kann dann im Destruktor gel�scht werden.
*/

int main() {

	{
		Mensch m(10, 105, "karl");
	}


	system("pause");
	return 0;
}