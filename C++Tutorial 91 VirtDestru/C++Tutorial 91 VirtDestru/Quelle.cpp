#include <iostream>
#include "MenschPROT.hpp"

/* !WICHTIG! "Virtual Destruktor": Faustregel ist einen Dekonstruktor immer auf "virtual" zu setzen!
  
Am wichtigsten ist dies bei der "Base Class", also die Klasse, die an andere vererbt, da dies einen Aufruf der Dekonstruktoren der erbenden Klassen sicherstellt. Bei den erbenden Klassen kann dies auch
getan werden. Dies dient allerdings lediglich der Lesbarkeit des Codes und hat keinen technischen Grund. Es sei denn diese Klasse vererbt auch wieder.*/

int main() {

	while (true) {
		Lebewesen *l = new Mensch();
		delete l;						//Hier wird nur der Destruktor von Lebewesen aufgerufen. Dieser existiert nicht und macht somit nichts. Da wir aber bei jeder Instanziierung von Mensch ein dynamisches Int Array mit 1000 Stellen erstellen, dass eigentlich im Mensch Destruktor gelöscht werden sollte, läuft unser Speicher über.
	}


	system("pause");
	return 0;
}