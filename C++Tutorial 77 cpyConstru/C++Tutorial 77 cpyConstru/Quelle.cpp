#include <iostream>
#include "DynamicArrayPROT.hpp"

/*"copy Constructor": Bei jeder Klasse gibt es zunächst einen Copy-Konstruktor. Sorgt dafür, dass man eine Kopie von der Klasse machen kann. Standard Copy-Konstruktor ist relativ dumm. Er kopiert
*einfach nur die Klassenattribute. Dies macht Probleme, wenn wir dynamischen Speicher haben. Da bei beiden Objekten (d und e) im Endeffekt derselbe dynamische Speicher existiert, versuchen auch
*beide Destruktoren diesen zu löschen. Das funktioniert nicht! Man kann dynamischen Speicher nicht 2 Mal löschen. Wenn wir also Heapspeicher haben, muss der Copy-Konstruktor entsprechend angepasst
*werden.
*/

int main() {

	DynamicArray d(100);
	d.set(5, 100);

	DynamicArray e(d);						//Macht eine Kopie von DynamicArray "d" und speichert diese in DynamicArray "e".

	std::cout << d.get(5) << std::endl;

	system("pause");
	return 0;
}