#include <iostream>
#include <list>			

/*"list"(Allgemein: "linked list" oder "double linked list"): Verhält sich auf den ersten Blick ähnlich wie der Vektor. Neue Elemente können mit "push_back()" hinzugefügt werden. Es können auch neue Elemente 
auf der anderen Seite mit "push_front()" hinzugefügt werden. Äquivalent können diese Elemente mit "pop_back()" und "pop_front()" wieder gelöscht werden.

Eine list kopiert jedoch niemals Daten. Jedes Element hat einen Pointer auf das Element vor sich und auf das Element nach sich. Wenn wir neue Elemente in die list packen wollen, nehmen wir einfach den
nach vorne zeigenden Pointer des vorletzten Elements und richten ihn auf das neue Element.

Die Zeit für das Einfügen und Entfernen von Elementen einer list ist !konstant!

Nachteil: Möchte man über alle Elemente der list drübergehen, benötigt man deutlich mehr Zeit relativ zum Vektor.
	Grund 1: Man muss immer über die Pointer "hüpfen".
	Grund 2: "Cache Misses". CPU "vermutet" bei einem Datenzugriff, welche Daten denn wohl als nächstes kommen könnten, und lädt vom RAM ganze Datenblöcke in den Cache.
			 Bei einem Vektor ist dies simpel und schnell. Bei der list kann die CPU vorher nicht ahnen, was kommen könnte.

 => Beim "Einfügen" und "Löschen" von Elementen ist die list schneller als der Vektor.
    Beim drübergehen über die Elemente ist jedoch der Vektor wieder schneller als die list.
*/

int main() {

	std::list<int> l;



	system("pause");
	return 0;
}