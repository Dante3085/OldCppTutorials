#include <iostream>
#include <list>			

/*"list"(Allgemein: "linked list" oder "double linked list"): Verh�lt sich auf den ersten Blick �hnlich wie der Vektor. Neue Elemente k�nnen mit "push_back()" hinzugef�gt werden. Es k�nnen auch neue Elemente 
auf der anderen Seite mit "push_front()" hinzugef�gt werden. �quivalent k�nnen diese Elemente mit "pop_back()" und "pop_front()" wieder gel�scht werden.

Eine list kopiert jedoch niemals Daten. Jedes Element hat einen Pointer auf das Element vor sich und auf das Element nach sich. Wenn wir neue Elemente in die list packen wollen, nehmen wir einfach den
nach vorne zeigenden Pointer des vorletzten Elements und richten ihn auf das neue Element.

Die Zeit f�r das Einf�gen und Entfernen von Elementen einer list ist !konstant!

Nachteil: M�chte man �ber alle Elemente der list dr�bergehen, ben�tigt man deutlich mehr Zeit relativ zum Vektor.
	Grund 1: Man muss immer �ber die Pointer "h�pfen".
	Grund 2: "Cache Misses". CPU "vermutet" bei einem Datenzugriff, welche Daten denn wohl als n�chstes kommen k�nnten, und l�dt vom RAM ganze Datenbl�cke in den Cache.
			 Bei einem Vektor ist dies simpel und schnell. Bei der list kann die CPU vorher nicht ahnen, was kommen k�nnte.

 => Beim "Einf�gen" und "L�schen" von Elementen ist die list schneller als der Vektor.
    Beim dr�bergehen �ber die Elemente ist jedoch der Vektor wieder schneller als die list.
*/

int main() {

	std::list<int> l;



	system("pause");
	return 0;
}